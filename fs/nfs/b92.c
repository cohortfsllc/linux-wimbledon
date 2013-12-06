#include <linux/slab.h>
#include "b92.h"

static unsigned char d92toc[] =
	"!\"#$%&'()*+,-0123456789:;<=>?@ABCDEFGHIJKLMNOP"
	"QRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
static unsigned char ctod92[256] = {
 255,  255,	 255,  255,	 255,  255,	 255,  255,
 255,  255,	 255,  255,	 255,  255,	 255,  255,
 255,  255,	 255,  255,	 255,  255,	 255,  255,
 255,  255,	 255,  255,	 255,  255,	 255,  255,
 255,	 0,	   1,	 2,	   3,	 4,	   5,	 6,
   7,	 8,	   9,	10,	  11,	12,	 255,  255,
  13,	14,	  15,	16,	  17,	18,	  19,	20,
  21,	22,	  23,	24,	  25,	26,	  27,	28,
  29,	30,	  31,	32,	  33,	34,	  35,	36,
  37,	38,	  39,	40,	  41,	42,	  43,	44,
  45,	46,	  47,	48,	  49,	50,	  51,	52,
  53,	54,	  55,	56,	  57,	58,	  59,	60,
  61,	62,	  63,	64,	  65,	66,	  67,	68,
  69,	70,	  71,	72,	  73,	74,	  75,	76,
  77,	78,	  79,	80,	  81,	82,	  83,	84,
  85,	86,	  87,	88,	  89,	90,	  91,  255};

static int i2l(int i)
{
	if (!i) return 0;
	return ((((i*567945)-231551)/231564)+1)/2+1;
}

static int
l2i(int l)
{
	if (!l) return 0;
	return (((l * 500000 - 250000) / 306581)+1)/2;
}

static char *
encode_pattern(int i)
{
	int j;
	unsigned int lim = 402653175;
	unsigned int l2_92 = 109447194;
	unsigned int inc = 134217725;
	/* unsigned int dvsr = 16777215.625 */
	int b = 0;
	char *rp;
	int maxlen = 1 + i + i2l(i);
	char *result = kmalloc(maxlen + 30, GFP_KERNEL);

	if (!result)
		return 0;
	rp = result;

	for (j = 0; j < i; ++j) {
		while (b > lim) {
			b -= l2_92;
			*rp++ = 'o';
		}
		b += inc;
		*rp++ = 'i';
	}
	while (1) {
		if (b <= 0) break;
		b -= l2_92;
		*rp++ = 'O';
	}
	*rp++ = 0;
	if (rp != result+maxlen) {
		printk(KERN_ERR "encode_pattern: expected to write %d but wrote %ld!\n",
			maxlen, rp-result);
		kfree(result);
		return 0;
	}
	return result;
}

char *
b92_encode(const char *in, int len)
{
	char *tape;
	char *tp;
	int t, j, x;
	unsigned int a;
	const unsigned char *ip;
	int outlen = i2l(len)+1;
	char *result;
	char *rp;

	tape = encode_pattern(len);
	if (!tape) return 0;
	tp = tape;
	result = kmalloc(outlen+30, GFP_KERNEL);
	rp = result;
	x = 0 ;
	a = 0;
	ip = (const unsigned char *) in;
	while ((t = *tp++)) {
		if (t == 'i') {
			j = *ip++;
			a <<= 8;
			a |= j;
			continue;
		}
		x = a%92;
		*rp++ = d92toc[x];
		a /= 92;
	}
	*rp++ = 0;
	if (rp != result + outlen) {
		printk(KERN_ERR "b92_encode length calc bad!  wrote=%ld expected=%d\n",
			rp-result, outlen);
	}
	if (a) {
		printk(KERN_ERR "b92_encode trailing bits %d!\n", a);
	}
	if (tape) kfree(tape);
	return result;
}

char * b92_decode(const char *in, int *outlen)
{
	int l = strlen(in);
	int i = l2i(l);
	char *tape;
	int tlen, tx, t, j;
	unsigned int a = 0;
	const char *ip = in + l;
	char *rp;
	char *result;

	tape = encode_pattern(i);
	if (!tape) {
		printk(KERN_ERR "b92_decode: no tape!?\n");
		return 0;
	}
	tlen = strlen(tape);
	result = kmalloc(i+1, GFP_KERNEL);
	if (!result) {
		kfree(tape);
		printk(KERN_ERR "b92_decode: can't allocate result %d\n", i);
		return 0;
	}
	rp = result + i;
	*rp = 0;
	for (tx = tlen; --tx >= 0; ) {
		t = tape[tx];
		if (t == 'i') {
			if (rp <= result) {
				printk(KERN_ERR "b92_decode: over/underrun! wrote %ld expected %d\n",
					((result+i)-rp),
					i);
				kfree(result);
				result = 0;
				break;
			}
			*--rp = a&255;
			a >>= 8;
			continue;
		}
		if (ip <= in) {
			printk(KERN_ERR "b92_decode: Ran off start of string\n");
			break;
		}
		j = (*--ip) & 255;
		a *= 92;
		a += ctod92[j];
	}
	if (tape) kfree(tape);
	*outlen = i;
	return result;
}
