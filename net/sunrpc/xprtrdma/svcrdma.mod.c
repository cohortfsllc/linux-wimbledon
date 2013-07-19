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
	{ 0xd0298b8b, "proc_dointvec_minmax" },
	{ 0xfa80c608, "alloc_pages_current" },
	{ 0x700d4d3e, "kmem_cache_destroy" },
	{ 0x628121e9, "register_sysctl_table" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xf7444936, "ib_dealloc_pd" },
	{ 0x82a01be8, "ib_alloc_fast_reg_mr" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x3a469d78, "malloc_sizes" },
	{ 0x6b77b0d9, "svc_xprt_enqueue" },
	{ 0x7a0fba8a, "svc_reg_xprt_class" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x139c2a0c, "ib_destroy_qp" },
	{ 0xbe8f3d67, "rdma_accept" },
	{ 0x1bfee7ad, "queue_work" },
	{ 0x6995fef1, "ib_free_fast_reg_page_list" },
	{ 0xc2da58b5, "rdma_destroy_id" },
	{ 0xabc4aade, "svc_unreg_xprt_class" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0x71de9b3f, "_copy_to_user" },
	{ 0x28dd4767, "svc_xprt_init" },
	{ 0x8ab3ea7b, "ib_alloc_pd" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x49fc20e5, "current_task" },
	{ 0x7513a88f, "ib_get_dma_mr" },
	{ 0x9133d907, "ib_query_device" },
	{ 0x27e1a049, "printk" },
	{ 0xcb252e9c, "rdma_listen" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf2b8a6cb, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x887b4096, "svc_xprt_copy_addrs" },
	{ 0x48f497a5, "init_net" },
	{ 0x2e3e8e78, "rdma_create_id" },
	{ 0x8a838f1, "ib_destroy_cq" },
	{ 0xa6d332af, "rdma_create_qp" },
	{ 0x7d6d38b7, "svc_xprt_put" },
	{ 0xfeb64c68, "rdma_bind_addr" },
	{ 0x84e82bd4, "kmem_cache_alloc" },
	{ 0xac3d20e2, "unregister_sysctl_table" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0xf1a0f059, "rdma_disconnect" },
	{ 0x96ce6c46, "rdma_node_get_transport" },
	{ 0x1a176dbd, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x4eebb802, "kmem_cache_create" },
	{ 0x93b46b79, "ib_dereg_mr" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0xf40981c4, "put_page" },
	{ 0x3dba21ba, "ib_alloc_fast_reg_page_list" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0xe00f8faa, "ib_create_cq" },
	{ 0x28318305, "snprintf" },
	{ 0x540c5fed, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,sunrpc,rdma_cm";

