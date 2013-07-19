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
	{ 0xa43a5804, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbfca2e9, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x77aa25db, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5b89f8ab, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x6f53ca99, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xbbba6cd3, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x9571b0fb, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xa91772e1, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x9d1a7a67, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0x6c3ddcdd, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0x843a4a04, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfbc30807, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x4d405db8, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x7d660af0, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x94939a8d, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb83f9963, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x4d721a14, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xea360854, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x74f38679, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x469f3a8f, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x1bc9c901, __VMLINUX_SYMBOL_STR(nfs4_insert_deviceid_node) },
	{ 0xa11e7be9, __VMLINUX_SYMBOL_STR(kmalloc_dma_caches) },
	{ 0x2050817f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe3b8d5a7, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x8569a219, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xa315f0c2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcaf6f503, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xd6b70575, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe0599609, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0xdb8643bb, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb88bd7d4, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x93bd8cfb, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0xdad97fd7, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0xd9b48e9f, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x6e389a6e, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xb257ca99, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,libore,nfs,sunrpc,osd";

