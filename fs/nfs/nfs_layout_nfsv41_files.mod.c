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
	{ 0x3f4f92f1, __VMLINUX_SYMBOL_STR(nfs4_schedule_session_recovery) },
	{ 0x77aa25db, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2b24c93, __VMLINUX_SYMBOL_STR(nfs4_set_ds_client) },
	{ 0x6c0d7a2e, __VMLINUX_SYMBOL_STR(nfs_request_add_commit_list) },
	{ 0x6f53ca99, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x4ccd2cda, __VMLINUX_SYMBOL_STR(nfs_init_cinfo) },
	{ 0x20ba9da1, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0xe8d23a2f, __VMLINUX_SYMBOL_STR(nfs4_mark_deviceid_unavailable) },
	{ 0xb263f49, __VMLINUX_SYMBOL_STR(nfs_commitdata_alloc) },
	{ 0x856d7545, __VMLINUX_SYMBOL_STR(nfs4_set_rw_stateid) },
	{ 0x9d1a7a67, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0xff6f60ef, __VMLINUX_SYMBOL_STR(nfs41_setup_sequence) },
	{ 0xfbc30807, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xdef7d2d4, __VMLINUX_SYMBOL_STR(nfs4_schedule_lease_recovery) },
	{ 0x36b2aca5, __VMLINUX_SYMBOL_STR(pnfs_update_layout) },
	{ 0x4cce4f94, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xec730387, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x55b0de31, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0x9786b3bb, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x25365a78, __VMLINUX_SYMBOL_STR(_pnfs_return_layout) },
	{ 0x9128621a, __VMLINUX_SYMBOL_STR(nfs_request_remove_commit_list) },
	{ 0x4d721a14, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xa66febd, __VMLINUX_SYMBOL_STR(nfs_generic_pg_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x98675ec0, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x61b15f5, __VMLINUX_SYMBOL_STR(nfs_retry_commit) },
	{ 0xdaf68ef6, __VMLINUX_SYMBOL_STR(nfs_initiate_write) },
	{ 0x821b967, __VMLINUX_SYMBOL_STR(pnfs_destroy_layout) },
	{ 0xfad7b6cc, __VMLINUX_SYMBOL_STR(pnfs_put_lseg) },
	{ 0x469f3a8f, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x6d180971, __VMLINUX_SYMBOL_STR(nfs_put_client) },
	{ 0x1bc9c901, __VMLINUX_SYMBOL_STR(nfs4_insert_deviceid_node) },
	{ 0xa11e7be9, __VMLINUX_SYMBOL_STR(kmalloc_dma_caches) },
	{ 0x2918d52b, __VMLINUX_SYMBOL_STR(pnfs_set_layoutcommit) },
	{ 0xe2cfb038, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0xcd4dd095, __VMLINUX_SYMBOL_STR(nfs4_init_ds_session) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x2050817f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1aba9b60, __VMLINUX_SYMBOL_STR(nfs_initiate_read) },
	{ 0x3875f418, __VMLINUX_SYMBOL_STR(nfs4_schedule_stateid_recovery) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe52b6e26, __VMLINUX_SYMBOL_STR(nfs4_test_deviceid_unavailable) },
	{ 0xce7968e3, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x8569a219, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xa315f0c2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb8543c18, __VMLINUX_SYMBOL_STR(pnfs_read_done_resend_to_mds) },
	{ 0x45618e0a, __VMLINUX_SYMBOL_STR(rpc_count_iostats) },
	{ 0xe7cfd469, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xa0ceef51, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x34c0ccdb, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0xfa1b3207, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0xcaf6f503, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x84d0533, __VMLINUX_SYMBOL_STR(pnfs_write_done_resend_to_mds) },
	{ 0x7a36ddbd, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xae5e6a33, __VMLINUX_SYMBOL_STR(nfs_commitdata_release) },
	{ 0xe272ae75, __VMLINUX_SYMBOL_STR(nfs_init_commit) },
	{ 0xb88bd7d4, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x89bc5a64, __VMLINUX_SYMBOL_STR(nfs_wait_bit_killable) },
	{ 0x2754eb1e, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0xdad97fd7, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xdd6298a5, __VMLINUX_SYMBOL_STR(nfs_remove_bad_delegation) },
	{ 0xd9b48e9f, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xb257ca99, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";

