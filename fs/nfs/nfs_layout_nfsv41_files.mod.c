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
	{ 0x59526375, "nfs4_schedule_session_recovery" },
	{ 0xfa80c608, "alloc_pages_current" },
	{ 0x48cde2de, "nfs4_set_ds_client" },
	{ 0xba3d49d, "nfs_request_add_commit_list" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x2b0b957e, "nfs_init_cinfo" },
	{ 0x3a469d78, "malloc_sizes" },
	{ 0xc70c8f2f, "nfs_initiate_commit" },
	{ 0xb0c8b59f, "nfs4_mark_deviceid_unavailable" },
	{ 0x8713382e, "nfs_commitdata_alloc" },
	{ 0x6f213879, "nfs4_proc_getdeviceinfo" },
	{ 0x2d5c5793, "nfs41_setup_sequence" },
	{ 0x857151b, "pnfs_generic_pg_test" },
	{ 0xf4214ab7, "nfs4_schedule_lease_recovery" },
	{ 0x9129b9a0, "pnfs_update_layout" },
	{ 0x3acc1567, "rpc_exit" },
	{ 0xec730387, "_atomic_dec_and_lock" },
	{ 0xfa7f335c, "rpc_delay" },
	{ 0x252f072e, "xdr_init_decode_pages" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x8c75e532, "_pnfs_return_layout" },
	{ 0xbf922d7, "nfs_request_remove_commit_list" },
	{ 0x8c4c0681, "nfs4_find_get_deviceid" },
	{ 0x5a921311, "strncmp" },
	{ 0x1d370dbb, "nfs_generic_pg_test" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc00f741b, "nfs_pageio_reset_write_mds" },
	{ 0x4303a57, "nfs_retry_commit" },
	{ 0x9da8fe22, "nfs_initiate_write" },
	{ 0xc21adeb8, "pnfs_destroy_layout" },
	{ 0xdbb5a9e0, "pnfs_put_lseg" },
	{ 0x6cdf428a, "nfs4_put_deviceid_node" },
	{ 0x334cab3d, "nfs_put_client" },
	{ 0x638c3e85, "nfs4_insert_deviceid_node" },
	{ 0xc007d332, "pnfs_set_layoutcommit" },
	{ 0xe2cfb038, "__cond_resched_lock" },
	{ 0xd8400d69, "nfs4_init_ds_session" },
	{ 0x9f984513, "strrchr" },
	{ 0x7c6e6b3b, "__free_pages" },
	{ 0x9812c5e6, "nfs_initiate_read" },
	{ 0xb37067d7, "nfs4_schedule_stateid_recovery" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb8f27b72, "nfs4_test_deviceid_unavailable" },
	{ 0x3a6b1777, "rpc_sleep_on" },
	{ 0x31a811e3, "pnfs_generic_pg_readpages" },
	{ 0x1a176dbd, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x1de9eb06, "pnfs_read_done_resend_to_mds" },
	{ 0x97a57fd8, "rpc_count_iostats" },
	{ 0x7d3ef519, "rpc_restart_call_prepare" },
	{ 0xc45a888, "rpc_wake_up_queued_task" },
	{ 0x3fc6d34b, "rpc_pton" },
	{ 0x196e3eb8, "pnfs_generic_pg_writepages" },
	{ 0x37a0cba, "kfree" },
	{ 0x171137c0, "pnfs_write_done_resend_to_mds" },
	{ 0x7a36ddbd, "rpc_wake_up" },
	{ 0xda1db09d, "nfs_commitdata_release" },
	{ 0xf19c84de, "nfs_init_commit" },
	{ 0x95d24469, "xdr_inline_decode" },
	{ 0x28318305, "snprintf" },
	{ 0x2edebe7c, "nfs_pageio_reset_read_mds" },
	{ 0xbe9d04d8, "nfs4_init_deviceid_node" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xdbf67bd8, "nfs_remove_bad_delegation" },
	{ 0xba0168da, "xdr_set_scratch_buffer" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xd094a677, "pnfs_register_layoutdriver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";

