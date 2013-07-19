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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xad8e03f9, "xprt_lookup_rqst" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xf7444936, "ib_dealloc_pd" },
	{ 0x82a01be8, "ib_alloc_fast_reg_mr" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0xfa6401ac, "ib_dealloc_mw" },
	{ 0xc51a8357, "xprt_register_transport" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x789bdca3, "seq_printf" },
	{ 0x6995fef1, "ib_free_fast_reg_page_list" },
	{ 0x3d5844b3, "strnicmp" },
	{ 0x623b2c2d, "xprt_free" },
	{ 0xc2da58b5, "rdma_destroy_id" },
	{ 0x593a99b, "init_timer_key" },
	{ 0xd4711236, "cancel_delayed_work_sync" },
	{ 0xd79a6e1b, "ib_alloc_mw" },
	{ 0xd890773a, "xprt_alloc" },
	{ 0x8eac50f6, "rpcb_getport_async" },
	{ 0x9227d69a, "xprt_wake_pending_tasks" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0xac3a2ead, "ib_modify_qp" },
	{ 0x1c68b30c, "rdma_connect" },
	{ 0x3acc1567, "rpc_exit" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0x1e491a04, "ib_unmap_fmr" },
	{ 0x8ab3ea7b, "ib_alloc_pd" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x49fc20e5, "current_task" },
	{ 0x7513a88f, "ib_get_dma_mr" },
	{ 0x9133d907, "ib_query_device" },
	{ 0x27e1a049, "printk" },
	{ 0x434bedbc, "rdma_destroy_qp" },
	{ 0x17f30925, "xprt_unregister_transport" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x858f4b0f, "xprt_release_xprt_cong" },
	{ 0x2e3e8e78, "rdma_create_id" },
	{ 0x8a838f1, "ib_destroy_cq" },
	{ 0xa6d332af, "rdma_create_qp" },
	{ 0xdabdd37c, "module_put" },
	{ 0xa51c8e7c, "rdma_resolve_route" },
	{ 0x6d7882f, "ib_dealloc_fmr" },
	{ 0x82b6f93, "xprt_alloc_slot" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f822217, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x128b1e89, "flush_delayed_work" },
	{ 0x263122f8, "wait_for_completion_interruptible_timeout" },
	{ 0xf1a0f059, "rdma_disconnect" },
	{ 0xbf0cd612, "ib_alloc_fmr" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x3ed83a7e, "ib_query_qp" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x93b46b79, "ib_dereg_mr" },
	{ 0xac07768d, "xprt_complete_rqst" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x1f2a9970, "rpc_ntop" },
	{ 0xa5103aa7, "xprt_set_retrans_timeout_def" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0xcdfafa3a, "xprt_reserve_xprt_cong" },
	{ 0x49f2fb87, "ib_reg_phys_mr" },
	{ 0xc5054d6b, "rdma_resolve_addr" },
	{ 0x3dba21ba, "ib_alloc_fast_reg_page_list" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0xe00f8faa, "ib_create_cq" },
	{ 0xe20a4090, "xprt_disconnect_done" },
	{ 0x4b06d2e7, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6251426b, "xprt_release_rqst_cong" },
	{ 0x540c5fed, "dma_ops" },
	{ 0xed10168c, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc,ib_core,rdma_cm";

