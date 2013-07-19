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
	{ 0xb0ae3927, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x6f53ca99, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xe6a8df65, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x9b8e999f, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x9571b0fb, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x30cada8f, __VMLINUX_SYMBOL_STR(radix_tree_next_hole) },
	{ 0x5f627cdd, __VMLINUX_SYMBOL_STR(test_set_page_writeback) },
	{ 0xe60df236, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbbe15ef5, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0x5dbfbd88, __VMLINUX_SYMBOL_STR(nfs4_proc_getdevicelist) },
	{ 0x9d1a7a67, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0x3df90523, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xce016c81, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x843a4a04, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfbc30807, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xf7a2b1a2, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xba974f2e, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x9786b3bb, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0xf3d8ff47, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x8d2fa007, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x755f4bd0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb163263a, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x94939a8d, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x98675ec0, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0xa8676cc1, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0x9d5e12b1, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x85ef44ab, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x74f38679, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xc11b13b0, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x9d27ca84, __VMLINUX_SYMBOL_STR(bh_submit_read) },
	{ 0x841997e7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf22202c8, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0xcc9b4f56, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x2050817f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x80320dfa, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xb6d6e63c, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x2177c47f, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2dd008ee, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x1fc8f9fd, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x8569a219, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xa315f0c2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xcaf6f503, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe0599609, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0xdb8643bb, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb88bd7d4, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x93bd8cfb, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0x2754eb1e, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x83e9d829, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0xd9b48e9f, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x6e389a6e, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x2e69b2df, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0xcc739fca, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb257ca99, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
	{ 0xde8b9964, __VMLINUX_SYMBOL_STR(bh_uptodate_or_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";

