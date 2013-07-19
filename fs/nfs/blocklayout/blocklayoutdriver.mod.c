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
	{ 0x9b1706a5, "fs_bio_set" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x855b7e41, "bio_alloc_bioset" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x3a469d78, "malloc_sizes" },
	{ 0xb5dcab5b, "remove_wait_queue" },
	{ 0xd279c083, "rpc_unlink" },
	{ 0xc4308e03, "pnfs_ld_write_done" },
	{ 0x30cada8f, "radix_tree_next_hole" },
	{ 0x4cce1e0b, "test_set_page_writeback" },
	{ 0x49fd7a0d, "__lock_page" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x29aaae17, "schedule_work" },
	{ 0xb8e475d0, "dput" },
	{ 0x3ca31f35, "nfs_net_id" },
	{ 0x92ee6df7, "nfs4_proc_getdevicelist" },
	{ 0x6f213879, "nfs4_proc_getdeviceinfo" },
	{ 0xcd534015, "rpc_mkpipe_data" },
	{ 0x5333fe80, "rpc_mkpipe_dentry" },
	{ 0xa241328, "xdr_reserve_space" },
	{ 0x857151b, "pnfs_generic_pg_test" },
	{ 0xaf251d4e, "end_page_writeback" },
	{ 0xe6d7d206, "rpc_get_sb_net" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x252f072e, "xdr_init_decode_pages" },
	{ 0x6823143a, "rpc_queue_upcall" },
	{ 0x76d6d21f, "unregister_pernet_subsys" },
	{ 0x49fc20e5, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd79ede92, "bio_add_page" },
	{ 0x84d0239d, "find_or_create_page" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc00f741b, "nfs_pageio_reset_write_mds" },
	{ 0x6d999895, "rpc_d_lookup_sb" },
	{ 0x4010f7cc, "blkdev_get_by_dev" },
	{ 0x6c9bee96, "wait_on_page_bit" },
	{ 0x6bc8a76a, "unlock_page" },
	{ 0x4a08dc2, "bio_put" },
	{ 0x94fcb76b, "bh_submit_read" },
	{ 0xdabdd37c, "module_put" },
	{ 0x2449356a, "rpc_pipe_generic_upcall" },
	{ 0xf46059e0, "submit_bio" },
	{ 0x181f0b9f, "rpc_pipefs_notifier_register" },
	{ 0x7c6e6b3b, "__free_pages" },
	{ 0x53df621c, "rpc_destroy_pipe_data" },
	{ 0x90bd821f, "blkdev_put" },
	{ 0xbdfc69c, "free_buffer_head" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1000e51, "schedule" },
	{ 0xd33397d, "register_pernet_subsys" },
	{ 0x80636783, "rpc_put_sb_net" },
	{ 0x31a811e3, "pnfs_generic_pg_readpages" },
	{ 0x1a176dbd, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x5860aad4, "add_wait_queue" },
	{ 0x196e3eb8, "pnfs_generic_pg_writepages" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d427e6, "pnfs_generic_pg_init_read" },
	{ 0xf40981c4, "put_page" },
	{ 0xbca707c4, "rpc_pipefs_notifier_unregister" },
	{ 0x95d24469, "xdr_inline_decode" },
	{ 0xf55a3077, "find_get_page" },
	{ 0x2edebe7c, "nfs_pageio_reset_read_mds" },
	{ 0x77e2f33, "_copy_from_user" },
	{ 0xd2439161, "pnfs_set_lo_fail" },
	{ 0xba0168da, "xdr_set_scratch_buffer" },
	{ 0xbc378c47, "pnfs_ld_read_done" },
	{ 0x7b00337, "alloc_page_buffers" },
	{ 0xed10168c, "try_module_get" },
	{ 0xd094a677, "pnfs_register_layoutdriver" },
	{ 0xb459e62c, "bh_uptodate_or_lock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";

