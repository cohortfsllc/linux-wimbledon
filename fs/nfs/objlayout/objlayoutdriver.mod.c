#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x822c235a, "module_layout" },
	{ 0x3d5818f9, "pnfs_unregister_layoutdriver" },
	{ 0xfa80c608, "alloc_pages_current" },
	{ 0x3fd83e72, "pnfs_generic_pg_init_write" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x58d66abd, "ore_read" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x3a469d78, "malloc_sizes" },
	{ 0xc4308e03, "pnfs_ld_write_done" },
	{ 0x29aaae17, "schedule_work" },
	{ 0x9e06af61, "ore_put_io_state" },
	{ 0x6f213879, "nfs4_proc_getdeviceinfo" },
	{ 0xfc63324c, "ore_write" },
	{ 0xa241328, "xdr_reserve_space" },
	{ 0x857151b, "pnfs_generic_pg_test" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0x461db0, "osduld_info_lookup" },
	{ 0x27e1a049, "printk" },
	{ 0x84d0239d, "find_or_create_page" },
	{ 0x7c90547d, "ore_check_io" },
	{ 0x8c4c0681, "nfs4_find_get_deviceid" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb41eb90, "xdr_init_decode" },
	{ 0x6bc8a76a, "unlock_page" },
	{ 0x6cdf428a, "nfs4_put_deviceid_node" },
	{ 0x28806871, "ore_verify_layout" },
	{ 0x638c3e85, "nfs4_insert_deviceid_node" },
	{ 0x7c6e6b3b, "__free_pages" },
	{ 0xd5afea7c, "osduld_put_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x79a38e61, "___ratelimit" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x5fc1bf4e, "call_usermodehelper_fns" },
	{ 0x31a811e3, "pnfs_generic_pg_readpages" },
	{ 0x1a176dbd, "kmem_cache_alloc_trace" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x196e3eb8, "pnfs_generic_pg_writepages" },
	{ 0x168fe490, "ore_get_rw_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d427e6, "pnfs_generic_pg_init_read" },
	{ 0xf40981c4, "put_page" },
	{ 0x95d24469, "xdr_inline_decode" },
	{ 0xf55a3077, "find_get_page" },
	{ 0xbe9d04d8, "nfs4_init_deviceid_node" },
	{ 0xba0168da, "xdr_set_scratch_buffer" },
	{ 0xbc378c47, "pnfs_ld_read_done" },
	{ 0xd094a677, "pnfs_register_layoutdriver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,libore,nfs,sunrpc,osd";

