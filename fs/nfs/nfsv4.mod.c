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
	{ 0xd0298b8b, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0xcf6a555b, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x77aa25db, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe2e0e4ca, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x51892d61, __VMLINUX_SYMBOL_STR(nfs_callback_set_tcpport) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xb79e575e, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x7b162f08, __VMLINUX_SYMBOL_STR(nfs_fhget) },
	{ 0x6f53ca99, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x31908c63, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0x83724d8e, __VMLINUX_SYMBOL_STR(user_instantiate) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc837b75c, __VMLINUX_SYMBOL_STR(nfs_alloc_inode) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x802c5839, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x39e05ac3, __VMLINUX_SYMBOL_STR(nfs_idmap_cache_timeout) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x6c5daf6, __VMLINUX_SYMBOL_STR(key_set_timeout) },
	{ 0xb4c1e06, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0x1c9a2551, __VMLINUX_SYMBOL_STR(xdr_init_encode) },
	{ 0xdc554f7f, __VMLINUX_SYMBOL_STR(rpcauth_create) },
	{ 0xfb4751dc, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2553a3b8, __VMLINUX_SYMBOL_STR(nfs_init_server_rpcclient) },
	{ 0x2e905082, __VMLINUX_SYMBOL_STR(nfs_access_set_mask) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x628121e9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x91d1fe52, __VMLINUX_SYMBOL_STR(max_session_slots) },
	{ 0x61634f05, __VMLINUX_SYMBOL_STR(lock_flocks) },
	{ 0xd68e293d, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xf2278198, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0xef5b41c4, __VMLINUX_SYMBOL_STR(user_match) },
	{ 0xde8d2b89, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0xb2ed8dfa, __VMLINUX_SYMBOL_STR(nfs_server_insert_lists) },
	{ 0xe592cb12, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0xac41a6b9, __VMLINUX_SYMBOL_STR(rpc_call_async) },
	{ 0x36ab36f3, __VMLINUX_SYMBOL_STR(nfs_alloc_server) },
	{ 0xd598436e, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x1ab0af24, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x5e1d863a, __VMLINUX_SYMBOL_STR(nfs_sockaddr_match_ipaddr) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd4843e4c, __VMLINUX_SYMBOL_STR(nfs_file_llseek) },
	{ 0x3591da, __VMLINUX_SYMBOL_STR(nfs_force_lookup_revalidate) },
	{ 0xb81839d7, __VMLINUX_SYMBOL_STR(nfs_set_sb_security) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xbdaee03e, __VMLINUX_SYMBOL_STR(svc_sock_update_bufs) },
	{ 0xcd3eae83, __VMLINUX_SYMBOL_STR(nfs_file_write) },
	{ 0x9b8e999f, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0xad880e79, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x1d3ef924, __VMLINUX_SYMBOL_STR(nfs_show_devname) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xbe0ff01c, __VMLINUX_SYMBOL_STR(nfs_show_path) },
	{ 0x982544ba, __VMLINUX_SYMBOL_STR(put_nfs_open_context) },
	{ 0xb57ce6, __VMLINUX_SYMBOL_STR(nfs_pgheader_init) },
	{ 0xdc485167, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode_force_wcc) },
	{ 0x331f2300, __VMLINUX_SYMBOL_STR(__fscache_invalidate) },
	{ 0x902feef5, __VMLINUX_SYMBOL_STR(vfs_kern_mount) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8f1efb7c, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2f14a14, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0xbbe15ef5, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf3c634f1, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x98196ee1, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xbbd33651, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x4b809e6f, __VMLINUX_SYMBOL_STR(user_read) },
	{ 0x50a1e8bd, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0xf4a669aa, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x374e45c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x67e255, __VMLINUX_SYMBOL_STR(nfs_file_read) },
	{ 0xcd8223ec, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0xdea6c791, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x3df90523, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xcdec389d, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0xce016c81, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa959d67f, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xf6cc258c, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x12798608, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x19fde312, __VMLINUX_SYMBOL_STR(nfs_fs_mount_common) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x843a4a04, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x6db875c2, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0x4f45fe66, __VMLINUX_SYMBOL_STR(nfs_server_copy_userdata) },
	{ 0xfcaa04a0, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x91632456, __VMLINUX_SYMBOL_STR(nfs_may_open) },
	{ 0x4c7d6423, __VMLINUX_SYMBOL_STR(flock_lock_file_wait) },
	{ 0x55e09c3c, __VMLINUX_SYMBOL_STR(nfs_pageio_complete) },
	{ 0xc8e9aa23, __VMLINUX_SYMBOL_STR(nfs_destroy_inode) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x4cce4f94, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xd5098e82, __VMLINUX_SYMBOL_STR(nfs_dns_resolve_name) },
	{ 0xc5ef47d5, __VMLINUX_SYMBOL_STR(nfs_init_timeout_values) },
	{ 0xad19bd82, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0xec730387, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xba974f2e, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5f964f89, __VMLINUX_SYMBOL_STR(nfs_flock) },
	{ 0x55b0de31, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xeeceb206, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0xaaba21ff, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0x297b1bf, __VMLINUX_SYMBOL_STR(nfs4_fs_type) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfe600c0d, __VMLINUX_SYMBOL_STR(nfs_generic_flush) },
	{ 0x5aaea494, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0xa979202e, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0x6b1b2cbe, __VMLINUX_SYMBOL_STR(nfs_free_server) },
	{ 0xf3d8ff47, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0xf705875e, __VMLINUX_SYMBOL_STR(rpc_put_task_async) },
	{ 0x456833b3, __VMLINUX_SYMBOL_STR(nfs_file_fsync_commit) },
	{ 0x8b852a69, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0x3f2690f2, __VMLINUX_SYMBOL_STR(nfs_check_flags) },
	{ 0x208d4d37, __VMLINUX_SYMBOL_STR(rpc_init_priority_wait_queue) },
	{ 0x1b55b112, __VMLINUX_SYMBOL_STR(nfs_file_set_open_context) },
	{ 0xd93157b3, __VMLINUX_SYMBOL_STR(svc_create) },
	{ 0x599d5ba1, __VMLINUX_SYMBOL_STR(xprt_setup_backchannel) },
	{ 0x9f0dcb48, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0xa2d2dfe0, __VMLINUX_SYMBOL_STR(svc_destroy) },
	{ 0x755f4bd0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xe51518f7, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x50fa11, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd530bdb, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x3863ae0, __VMLINUX_SYMBOL_STR(nfs_readdata_release) },
	{ 0x7622eeb6, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x329e28a6, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xee288d34, __VMLINUX_SYMBOL_STR(nfs_create_rpc_client) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xce4494d8, __VMLINUX_SYMBOL_STR(nfs_path) },
	{ 0x8cca3ab2, __VMLINUX_SYMBOL_STR(rpc_rmdir) },
	{ 0xad039c54, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x9af7f73f, __VMLINUX_SYMBOL_STR(alloc_nfs_open_context) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x8854e7a, __VMLINUX_SYMBOL_STR(rpc_wake_up_first) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x9c4c58e0, __VMLINUX_SYMBOL_STR(nfs_write_inode) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xfa095f3f, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xa66febd, __VMLINUX_SYMBOL_STR(nfs_generic_pg_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x98675ec0, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x3bdae399, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdf7d396b, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0xea360854, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x5ebcad90, __VMLINUX_SYMBOL_STR(nfs_umount_begin) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x1a65c31a, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0xb0479c99, __VMLINUX_SYMBOL_STR(rpc_sleep_on_priority) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x1ddee9e0, __VMLINUX_SYMBOL_STR(nfs_clear_inode) },
	{ 0x6f7aa9f4, __VMLINUX_SYMBOL_STR(rpc_peeraddr2str) },
	{ 0x772e7039, __VMLINUX_SYMBOL_STR(nfs4_dentry_operations) },
	{ 0x2e745b40, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0xa483a159, __VMLINUX_SYMBOL_STR(nfs_pageio_add_request) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0x416be1b4, __VMLINUX_SYMBOL_STR(svc_process) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x319a4a31, __VMLINUX_SYMBOL_STR(svc_rpcb_cleanup) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x217c0720, __VMLINUX_SYMBOL_STR(rpc_clone_client) },
	{ 0x4eaf571e, __VMLINUX_SYMBOL_STR(rpc_clone_client_set_auth) },
	{ 0x9e1aaed8, __VMLINUX_SYMBOL_STR(request_key_with_auxdata) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xc6a5cd2d, __VMLINUX_SYMBOL_STR(nfs_do_submount) },
	{ 0x42f2c81f, __VMLINUX_SYMBOL_STR(nfs4_client_id_uniquifier) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xd8efc0e2, __VMLINUX_SYMBOL_STR(get_nfs_open_context) },
	{ 0xb3990656, __VMLINUX_SYMBOL_STR(nfs_kill_super) },
	{ 0x4f7577ba, __VMLINUX_SYMBOL_STR(mount_subtree) },
	{ 0xf159a417, __VMLINUX_SYMBOL_STR(nfs_writehdr_free) },
	{ 0x7cc96b01, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0xf7c62474, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0x26884ff7, __VMLINUX_SYMBOL_STR(nfs_alloc_fhandle) },
	{ 0x70ceb9c2, __VMLINUX_SYMBOL_STR(nfs_show_options) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x6d180971, __VMLINUX_SYMBOL_STR(nfs_put_client) },
	{ 0xa11e7be9, __VMLINUX_SYMBOL_STR(kmalloc_dma_caches) },
	{ 0x2644a711, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x1c257184, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0xa02f84d1, __VMLINUX_SYMBOL_STR(svc_xprt_put) },
	{ 0x98d37235, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0xd6c269eb, __VMLINUX_SYMBOL_STR(__rpc_wait_for_completion_task) },
	{ 0xa862286c, __VMLINUX_SYMBOL_STR(nfs_remount) },
	{ 0x1f79c813, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0x841997e7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf22202c8, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x429eb45b, __VMLINUX_SYMBOL_STR(nfs_atomic_open) },
	{ 0xd639e0f3, __VMLINUX_SYMBOL_STR(rpc_protocol) },
	{ 0x3c867432, __VMLINUX_SYMBOL_STR(posix_lock_file_wait) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x2050817f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x630a7176, __VMLINUX_SYMBOL_STR(nfs_get_client) },
	{ 0x80320dfa, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xa8e9e1ae, __VMLINUX_SYMBOL_STR(send_implementation_id) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x42546727, __VMLINUX_SYMBOL_STR(bc_svc_process) },
	{ 0xc5dc283c, __VMLINUX_SYMBOL_STR(xprt_destroy_backchannel) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xac3d20e2, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x41b46d0e, __VMLINUX_SYMBOL_STR(xdr_enter_page) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xfc95ae7b, __VMLINUX_SYMBOL_STR(nfs_clone_sb_security) },
	{ 0xbc952508, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xfd8ac7eb, __VMLINUX_SYMBOL_STR(nfs_generic_pagein) },
	{ 0x1d48bd25, __VMLINUX_SYMBOL_STR(rpc_get_timeout) },
	{ 0xdf2b4617, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x320b89eb, __VMLINUX_SYMBOL_STR(nfs_file_mmap) },
	{ 0x8afcb06c, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0x5f148ac7, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xea269407, __VMLINUX_SYMBOL_STR(nfs_fill_super) },
	{ 0x90a5530f, __VMLINUX_SYMBOL_STR(nfsiod_workqueue) },
	{ 0x1175aedd, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xeecea145, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3aa617ca, __VMLINUX_SYMBOL_STR(nfs_statfs) },
	{ 0xc1200a8f, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x1fc8f9fd, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x6595f93f, __VMLINUX_SYMBOL_STR(complete_request_key) },
	{ 0x20591846, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0x33db7720, __VMLINUX_SYMBOL_STR(nfs_setlease) },
	{ 0xdd5f7ec4, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0x8328797c, __VMLINUX_SYMBOL_STR(rpc_run_task) },
	{ 0xce7968e3, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x9399c6fc, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0xa315f0c2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x44135a8c, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x2075c2ee, __VMLINUX_SYMBOL_STR(key_instantiate_and_link) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x975aacfd, __VMLINUX_SYMBOL_STR(nfs_file_release) },
	{ 0xc4ab9fa0, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x1509ee92, __VMLINUX_SYMBOL_STR(_copy_from_pages) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe7cfd469, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xb2a880b5, __VMLINUX_SYMBOL_STR(svc_shutdown_net) },
	{ 0x45834e9, __VMLINUX_SYMBOL_STR(rpcauth_get_pseudoflavor) },
	{ 0xa0ceef51, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x34c0ccdb, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0xe0f54555, __VMLINUX_SYMBOL_STR(nfs_sb_active) },
	{ 0xfa1b3207, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0x8a35b2f5, __VMLINUX_SYMBOL_STR(nfs_readhdr_free) },
	{ 0xd59668e6, __VMLINUX_SYMBOL_STR(unlock_flocks) },
	{ 0xdadc225a, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xe808e9dd, __VMLINUX_SYMBOL_STR(svc_exit_thread) },
	{ 0x248c273b, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x5223b846, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e9d0785, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x78d3e517, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xf50182ea, __VMLINUX_SYMBOL_STR(nfs_file_splice_read) },
	{ 0x33be412a, __VMLINUX_SYMBOL_STR(nfs_probe_fsinfo) },
	{ 0x5182420f, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0xcefe63c0, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0x86ecb79e, __VMLINUX_SYMBOL_STR(nfs_lock) },
	{ 0xad0e67c, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0xdb8643bb, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xd95c6121, __VMLINUX_SYMBOL_STR(svc_prepare_thread) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1a8c8b99, __VMLINUX_SYMBOL_STR(nfs_file_splice_write) },
	{ 0x7a36ddbd, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xb41ac5bd, __VMLINUX_SYMBOL_STR(rpc_localaddr) },
	{ 0x305c75a9, __VMLINUX_SYMBOL_STR(nfs_pageio_init) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbc550fc0, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x931ef8b9, __VMLINUX_SYMBOL_STR(nfs_put_super) },
	{ 0xfe2e820f, __VMLINUX_SYMBOL_STR(rpc_net_ns) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0x79e444d1, __VMLINUX_SYMBOL_STR(nfs_wait_client_init_complete) },
	{ 0xc8217999, __VMLINUX_SYMBOL_STR(nfs_pageio_init_read) },
	{ 0xb88bd7d4, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa82784a, __VMLINUX_SYMBOL_STR(nfs_drop_inode) },
	{ 0xc88a96f6, __VMLINUX_SYMBOL_STR(svc_recv) },
	{ 0x2b73d63c, __VMLINUX_SYMBOL_STR(nfs_pageio_init_write) },
	{ 0x7431a569, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0xaa0c5dee, __VMLINUX_SYMBOL_STR(nfs_sb_deactive) },
	{ 0x64aceee6, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0x89bc5a64, __VMLINUX_SYMBOL_STR(nfs_wait_bit_killable) },
	{ 0xff16dd11, __VMLINUX_SYMBOL_STR(svc_bind) },
	{ 0x43b2bf58, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0x672d4f3e, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x2754eb1e, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0xa4a8371b, __VMLINUX_SYMBOL_STR(nfs_mark_client_ready) },
	{ 0x7f2d84b0, __VMLINUX_SYMBOL_STR(nfs_file_flush) },
	{ 0xdae9b5d7, __VMLINUX_SYMBOL_STR(nfs4_disable_idmapping) },
	{ 0x3ea0773c, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0x1036ed17, __VMLINUX_SYMBOL_STR(nfs_writedata_release) },
	{ 0xeac95850, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x98b6dac, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9146e71d, __VMLINUX_SYMBOL_STR(user_revoke) },
	{ 0xa0fba029, __VMLINUX_SYMBOL_STR(nfs_writehdr_alloc) },
	{ 0xa555a167, __VMLINUX_SYMBOL_STR(user_destroy) },
	{ 0x32e53659, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xd9b48e9f, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x1061de36, __VMLINUX_SYMBOL_STR(nfs_fscache_set_inode_cookie) },
	{ 0xb2bcae87, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xaf129d81, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x5d4fdcd7, __VMLINUX_SYMBOL_STR(filemap_flush) },
	{ 0xcc739fca, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xa8740ec5, __VMLINUX_SYMBOL_STR(generic_listxattr) },
	{ 0x22c1921e, __VMLINUX_SYMBOL_STR(nfs_show_stats) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x9132ca79, __VMLINUX_SYMBOL_STR(nfs_readhdr_alloc) },
	{ 0xd2b2d00c, __VMLINUX_SYMBOL_STR(nfs_access_add_cache) },
	{ 0xca3d0198, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
	{ 0x2a598a5d, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0x30100f20, __VMLINUX_SYMBOL_STR(rpc_put_task) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,fscache";

