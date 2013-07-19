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
	{ 0xfa80c608, "alloc_pages_current" },
	{ 0x774d66d, "inode_dio_done" },
	{ 0x6178d55c, "__fscache_acquire_cookie" },
	{ 0x700d4d3e, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xc02d09, "set_anon_super" },
	{ 0xf5893abf, "up_read" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xce41b24b, "generic_file_llseek" },
	{ 0x63aba688, "__fscache_wait_on_page_write" },
	{ 0xb94553db, "__mark_inode_dirty" },
	{ 0x6f4c812f, "__percpu_counter_add" },
	{ 0xe1254b86, "d_invalidate" },
	{ 0xd18d8862, "__set_page_dirty_nobuffers" },
	{ 0x632ebf4c, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x628121e9, "register_sysctl_table" },
	{ 0xaacefb05, "mntget" },
	{ 0x645a9372, "generic_write_checks" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x6512016f, "nlmclnt_done" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xeae4906a, "filemap_write_and_wait_range" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x80c0ad44, "iget5_locked" },
	{ 0x98c960c2, "migrate_page" },
	{ 0xf2219a74, "kill_anon_super" },
	{ 0x1d7661db, "dec_zone_page_state" },
	{ 0x67a0d829, "nlmclnt_init" },
	{ 0x9a09b9bf, "dget_parent" },
	{ 0xd2964ea, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbdc89bea, "seq_escape" },
	{ 0x34184afe, "current_kernel_time" },
	{ 0x3a469d78, "malloc_sizes" },
	{ 0x2b0e63e3, "seq_puts" },
	{ 0xd067fc5c, "proc_dointvec" },
	{ 0xcbb02eeb, "is_bad_inode" },
	{ 0x49603fb8, "security_sb_copy_data" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x980ea1cc, "sunrpc_cache_unregister_pipefs" },
	{ 0x4cce1e0b, "test_set_page_writeback" },
	{ 0x84951295, "__fscache_invalidate" },
	{ 0xb519146c, "vfs_kern_mount" },
	{ 0x49fd7a0d, "__lock_page" },
	{ 0x5c609076, "filemap_write_and_wait" },
	{ 0xf4f05082, "put_rpccred" },
	{ 0x1e4302c4, "deactivate_locked_super" },
	{ 0x1ac4c518, "__page_file_mapping" },
	{ 0x29aaae17, "schedule_work" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x2f14a14, "rpc_init_wait_queue" },
	{ 0x40425796, "generic_file_aio_read" },
	{ 0xb8e475d0, "dput" },
	{ 0x789bdca3, "seq_printf" },
	{ 0xe5193591, "__fscache_write_page" },
	{ 0xa75e9a0c, "remove_proc_entry" },
	{ 0x822844f4, "generic_file_remap_pages" },
	{ 0xefba93e1, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x330a20a1, "d_materialise_unique" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x207893b, "invalidate_inode_pages2" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x23bf2ac6, "mutex_unlock" },
	{ 0x77c238dc, "__fscache_register_netfs" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa0fad543, "vfs_fsync" },
	{ 0xe4bc6174, "rename_lock" },
	{ 0xd73234f4, "aio_complete" },
	{ 0xd41f5e62, "have_submounts" },
	{ 0x61447272, "generic_read_dir" },
	{ 0xe16874ba, "igrab" },
	{ 0xd2bef294, "get_kernel_page" },
	{ 0x2ac1c5c9, "redirty_page_for_writepage" },
	{ 0x91715312, "sprintf" },
	{ 0x2e8dfff9, "__put_net" },
	{ 0xba6065b6, "generic_file_aio_write" },
	{ 0xbbfce3e5, "seq_read" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x9b11eb8e, "__fscache_uncache_page" },
	{ 0x6c11f217, "set_page_dirty" },
	{ 0x6d262bc9, "kthread_create_on_node" },
	{ 0x52026cdf, "security_sb_parse_opts_str" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x706eb8e2, "cancel_dirty_page" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0xa241328, "xdr_reserve_space" },
	{ 0x57a6ccd0, "down_read" },
	{ 0xea10c071, "rpc_killall_tasks" },
	{ 0xfcaa04a0, "out_of_line_wait_on_bit_lock" },
	{ 0xaf251d4e, "end_page_writeback" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x3edf8db1, "flock_lock_file_wait" },
	{ 0xac484cf1, "d_delete" },
	{ 0x40256835, "complete_all" },
	{ 0xece784c2, "rb_first" },
	{ 0xec730387, "_atomic_dec_and_lock" },
	{ 0xe6d7d206, "rpc_get_sb_net" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x252f072e, "xdr_init_decode_pages" },
	{ 0x76d6d21f, "unregister_pernet_subsys" },
	{ 0x7fdafb9c, "rpc_put_task_async" },
	{ 0x889d15fc, "cancel_delayed_work" },
	{ 0x77fbfca0, "proc_mkdir" },
	{ 0xcd39dfe3, "rpc_call_sync" },
	{ 0xeaebaa10, "__fscache_read_or_alloc_page" },
	{ 0x7c7f7408, "__fscache_uncache_all_inode_pages" },
	{ 0xf9eab61d, "idr_destroy" },
	{ 0x1579b91d, "finish_no_open" },
	{ 0x49fc20e5, "current_task" },
	{ 0x8224f4c, "rpc_create" },
	{ 0x511ab427, "wait_for_completion_killable" },
	{ 0x5a1ac40d, "freezing_slow_path" },
	{ 0x8cfe4c62, "sync_inode" },
	{ 0x27e1a049, "printk" },
	{ 0x84507ee4, "d_rehash" },
	{ 0xc53119a8, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2339e583, "write_inode_now" },
	{ 0x382b417a, "sget" },
	{ 0x64db9a5, "mark_mounts_for_expiry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x661e08d2, "__fscache_maybe_release_page" },
	{ 0x7b9a8659, "rpc_proc_unregister" },
	{ 0x82d79b51, "sysctl_vfs_cache_pressure" },
	{ 0xb9401dbd, "d_move" },
	{ 0x35411f02, "bdi_init" },
	{ 0x2cd44458, "rpc_max_payload" },
	{ 0xf2b8a6cb, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7c1bb18e, "sunrpc_cache_register_pipefs" },
	{ 0x64d6756c, "mutex_lock" },
	{ 0x8c4b3fc4, "set_nlink" },
	{ 0x8f5611c0, "write_cache_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbf95d541, "rpc_lookup_machine_cred" },
	{ 0x6d999895, "rpc_d_lookup_sb" },
	{ 0x79122d74, "rpc_lookup_cred" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x9d18d62b, "rpc_peeraddr2str" },
	{ 0xcc2979e6, "truncate_pagecache" },
	{ 0x7c3c2fa9, "clear_bdi_congested" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6c9bee96, "wait_on_page_bit" },
	{ 0x823b7aac, "inc_zone_page_state" },
	{ 0x6c988925, "rpc_clone_client_set_auth" },
	{ 0x6bc8a76a, "unlock_page" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x48f497a5, "init_net" },
	{ 0x4a79ce91, "security_d_instantiate" },
	{ 0xd0427086, "sunrpc_init_cache_detail" },
	{ 0x3dfc71f6, "__get_page_tail" },
	{ 0xcee467f3, "xprt_load_transport" },
	{ 0x82053adb, "sunrpc_destroy_cache_detail" },
	{ 0xaf6ae696, "kstrndup" },
	{ 0x3ebda85, "dns_query" },
	{ 0xd644e1ad, "__fscache_unregister_netfs" },
	{ 0x61651be, "strcat" },
	{ 0x1203a770, "idr_remove" },
	{ 0xfd6293c2, "boot_tvec_bases" },
	{ 0x99e7fe97, "inode_init_once" },
	{ 0xb670bb38, "rpc_setbufsize" },
	{ 0xccbffa79, "__rpc_wait_for_completion_task" },
	{ 0xdabdd37c, "module_put" },
	{ 0x674e736b, "posix_lock_file_wait" },
	{ 0xe2cfb038, "__cond_resched_lock" },
	{ 0x76a8ef5, "__pagevec_lru_add" },
	{ 0x84e82bd4, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x7c6e6b3b, "__free_pages" },
	{ 0xc50bab05, "unregister_shrinker" },
	{ 0xe9dff136, "mempool_alloc" },
	{ 0x6f797a53, "generic_file_mmap" },
	{ 0xa130386d, "bdi_register_dev" },
	{ 0x707250fc, "d_alloc" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xac3d20e2, "unregister_sysctl_table" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb152d87d, "cpu_possible_mask" },
	{ 0x33f24ae4, "get_user_pages" },
	{ 0x1f822217, "schedule_delayed_work" },
	{ 0xe200d2d5, "param_get_uint" },
	{ 0x1000e51, "schedule" },
	{ 0x1058ab9, "rpc_print_iostats" },
	{ 0x3f71faa1, "mempool_create" },
	{ 0x2b964317, "do_sync_read" },
	{ 0x3f6e2452, "unlock_new_inode" },
	{ 0x2c1945d, "deactivate_super" },
	{ 0x8c10e96a, "d_drop" },
	{ 0xb06ca68a, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5fc1bf4e, "call_usermodehelper_fns" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x348e8b83, "__module_put_and_exit" },
	{ 0x24c1fb8f, "wake_up_process" },
	{ 0xd33397d, "register_pernet_subsys" },
	{ 0xfaf49bf4, "shrink_dcache_parent" },
	{ 0x80636783, "rpc_put_sb_net" },
	{ 0x6f20960a, "full_name_hash" },
	{ 0x404de003, "clear_page_dirty_for_io" },
	{ 0xa4fde343, "rpc_run_task" },
	{ 0x1a176dbd, "kmem_cache_alloc_trace" },
	{ 0x4aad52d7, "mempool_free" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x7d0107c9, "read_cache_pages" },
	{ 0x5ecfeec6, "__per_cpu_offset" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x4eebb802, "kmem_cache_create" },
	{ 0x355b6635, "register_filesystem" },
	{ 0x7213f914, "__fscache_relinquish_cookie" },
	{ 0xc929a896, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x66b03b1c, "d_lookup" },
	{ 0x7d3ef519, "rpc_restart_call_prepare" },
	{ 0x9450a749, "__pagevec_release" },
	{ 0x56954a0f, "add_to_page_cache_locked" },
	{ 0xa0ceef51, "out_of_line_wait_on_bit" },
	{ 0x3fc6d34b, "rpc_pton" },
	{ 0xac7ac01, "proc_create_data" },
	{ 0x9d8b2235, "security_sb_clone_mnt_opts" },
	{ 0x7b047004, "seq_lseek" },
	{ 0x481d51e0, "iput" },
	{ 0x7d6c5cd7, "finish_open" },
	{ 0x106cc4d6, "read_cache_page" },
	{ 0xc8b48874, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xead21b4f, "d_instantiate_unique" },
	{ 0x7a4ed3a3, "generic_permission" },
	{ 0x5e7da11a, "inode_dio_wait" },
	{ 0x7f555ca7, "do_sync_write" },
	{ 0xdb250fda, "pagevec_lookup" },
	{ 0x74ba7a53, "ihold" },
	{ 0x6418ac6b, "generic_file_splice_write" },
	{ 0x5128b00d, "unmap_mapping_range" },
	{ 0xa75312bc, "call_rcu_sched" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x191d86f7, "generic_error_remove_page" },
	{ 0x9518b623, "register_shrinker" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xac376bf7, "generic_readlink" },
	{ 0xf40981c4, "put_page" },
	{ 0x2e11d147, "d_make_root" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x5d022241, "bdi_destroy" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x7b54f9e1, "unregister_filesystem" },
	{ 0x969e8ff, "init_special_inode" },
	{ 0xcb2d1cf0, "security_sb_set_mnt_opts" },
	{ 0x95d24469, "xdr_inline_decode" },
	{ 0x28318305, "snprintf" },
	{ 0xb985cdf8, "seq_release" },
	{ 0x8e267642, "generic_file_splice_read" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x817d530d, "lookup_one_len" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xba2c5660, "mnt_set_expiry" },
	{ 0xf2a46507, "bdi_unregister" },
	{ 0xc6a2312e, "rpc_shutdown_client" },
	{ 0x392ade61, "ida_init" },
	{ 0xcfb76c0a, "idr_init" },
	{ 0xf4afdc3f, "rpc_proc_register" },
	{ 0x53f6ffbc, "wait_for_completion_timeout" },
	{ 0x98b6dac, "proc_dointvec_jiffies" },
	{ 0xcce8e9c4, "grab_cache_page_write_begin" },
	{ 0x77e2f33, "_copy_from_user" },
	{ 0x18467c5d, "__fscache_read_or_alloc_pages" },
	{ 0xe5d95985, "param_ops_ulong" },
	{ 0xa1b5e461, "__fscache_wait_on_invalidate" },
	{ 0x59e31c, "ida_destroy" },
	{ 0xfe96a5a2, "clear_inode" },
	{ 0xba0168da, "xdr_set_scratch_buffer" },
	{ 0x3a1dc27, "page_put_link" },
	{ 0x52fd2e46, "d_instantiate" },
	{ 0x2a6e6109, "__init_rwsem" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xed10168c, "try_module_get" },
	{ 0x2b5df586, "clear_nlink" },
	{ 0x9202e9d0, "__d_drop" },
	{ 0xfc168a05, "generic_fillattr" },
	{ 0xebfa51b7, "set_bdi_congested" },
	{ 0x782442dd, "filemap_fdatawrite" },
	{ 0xe914e41e, "strcpy" },
	{ 0x45c51abe, "__page_file_index" },
	{ 0x39065e65, "truncate_inode_pages" },
	{ 0x3acf0b0c, "posix_test_lock" },
	{ 0x5f2ae3ae, "rpc_put_task" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscache,lockd,sunrpc";

