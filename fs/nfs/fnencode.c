#include <linux/slab.h>
#include <linux/crc32.h>
#include <linux/crypto.h>
#include <linux/scatterlist.h>

#include "b92.h"
#include "fnencode.h"

#define ALG "ctr(aes)"

char *
encrypt_filename(char *c, unsigned char *k, int kl)
{
	struct crypto_blkcipher *tfm = 0;
	struct scatterlist sg[1];
	unsigned char ivec[16];
	int l, l2;
	unsigned int sum;
	char *ret = 0;
	char *work;
	struct blkcipher_desc desc[1];
	int rc;

	tfm = crypto_alloc_blkcipher(ALG, 0, CRYPTO_ALG_ASYNC);
	if (IS_ERR(tfm)) {
		printk(KERN_ERR "encrypt_filename: crypto_alloc_blkcipher (%s) failed\n", ALG);
		ret = (void*)tfm;	/* ERR_PTR(PTR_ERR(tfm)) */
		tfm = 0;
		goto Failed;
	}
	if (crypto_blkcipher_setkey(tfm, k, kl) < 0) {
		printk(KERN_ERR "encrypt_filename: crypto_blkcipher_setkey failed (bad key?)\n");
		ret = ERR_PTR(-EIO);
		goto Failed;
	}
	l = strlen(c);
	/* NOTE: bitrev(crc32_le != crc32_be( */
	sum = le32_to_cpu(~crc32_le(~0, c, l));
	l2 = l + 4;
	work = kmalloc(l2, GFP_KERNEL);
	if (!work) {
		printk(KERN_ERR "encrypt_filename: can't allocate %d bytes\n", l2);
		ret = ERR_PTR(-ENOMEM);
		goto Failed;
	}
	work[0] = sum>>24;
	work[1] = sum>>16;
	work[2] = sum>>8;
	work[3] = sum;
	memcpy(work+4, c, l);
	memcpy(ivec, work, 4);
	memset(ivec+4, 0, sizeof ivec-5);
	ivec[sizeof ivec-1]=1;
	sg_init_table(sg, 1);
	sg_set_buf(sg, work+4, l);
	memset(desc, 0, sizeof *desc);
	desc->info = ivec;
	desc->tfm = tfm;
	rc = crypto_blkcipher_encrypt_iv(desc, sg, sg, l);
	if (rc) {
		printk(KERN_ERR "encrypt_filename: encrypt failed code=%d\n", rc);
		ret = ERR_PTR(rc);
		goto Failed;
	}
	ret = b92_encode(work, l2);
Failed:
	if (work) kfree(work);
	if (tfm)
		crypto_free_blkcipher(tfm);
	return ret;
}
EXPORT_SYMBOL(encrypt_filename);

char *
decrypt_filename(char *c, unsigned char *k, int kl)
{
	struct crypto_blkcipher *tfm = 0;
	struct scatterlist sgi[1], sgo[1];
	unsigned char *work;
	unsigned char ivec[16];
	int outlen;
	unsigned int sum1, sum2;
	char *ret = 0, *rp = 0;
	struct blkcipher_desc desc[1];
	int rc;

	tfm = crypto_alloc_blkcipher(ALG, 0, CRYPTO_ALG_ASYNC);
	if (IS_ERR(tfm)) {
		printk(KERN_ERR "decrypt_filename: crypto_alloc_blkcipher (%s) failed\n", ALG);
		ret = (void*)tfm;	/* ERR_PTR(PTR_ERR(tfm)) */
		tfm = 0;
		goto Done;
	}
	if (crypto_blkcipher_setkey(tfm, k, kl) < 0) {
		printk(KERN_ERR "decrypt_filename: crypto_blkcipher_setkey failed (bad key?)\n");
		ret = ERR_PTR(-EIO);
		goto Done;
	}
	work = b92_decode(c, &outlen);
	if (!work) {
		printk(KERN_ERR "decrypt_filename: b92_decode failed!\n");
		ret = ERR_PTR(-ENOMEM);
		goto Done;
	}
	memcpy(ivec, work, 4);
	memset(ivec+4, 0, sizeof ivec-5);
	ivec[sizeof ivec-1]=1;
	rp = kmalloc(outlen-3, GFP_KERNEL);
	if (!rp) {
		printk(KERN_ERR "decrypt_filename: can't allocate %d bytes\n", outlen-3);
		ret = ERR_PTR(-ENOMEM);
		goto Done;
	}
	rp[outlen-4] = 0;
	sg_init_table(sgi, 1);
	sg_init_table(sgo, 1);
	sg_set_buf(sgi, work+4, outlen-4);
	sg_set_buf(sgo, rp, outlen-4);
	memset(desc, 0, sizeof *desc);
	desc->info = ivec;
	desc->tfm = tfm;
	rc = crypto_blkcipher_encrypt_iv(desc, sgo, sgi, outlen-4);
	if (rc) {
		printk(KERN_ERR "decrypt_filename: encrypt failed code=%d\n", rc);
		ret = ERR_PTR(rc);
		goto Done;
	}
	sum1 = le32_to_cpu(~crc32_le(~0, rp, outlen-4));
	sum2 = (((unsigned int)work[0])<<24)
		| (((unsigned int)work[1])<<16)
		| (((unsigned int)work[2])<<8)
		| ((unsigned int)work[3]);
	if (sum1 != sum2) {
		printk(KERN_ERR "decrypt_filename: crc didn't match! (on %x) (got %x)\n",
			be32_to_cpu(sum1), be32_to_cpu(sum2));
		ret = ERR_PTR(-EIO);
		goto Done;
	}
	ret = rp;
	rp = 0;
Done:
	if (work) kfree(work);
	if (tfm)
		crypto_free_blkcipher(tfm);
	if (rp)
		kfree(rp);
	return ret;
}
EXPORT_SYMBOL(decrypt_filename);
