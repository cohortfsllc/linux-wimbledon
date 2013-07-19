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
	{ 0x77aa25db, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x29741066, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x6f53ca99, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x628121e9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x7bf00d70, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x370c0d08, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_mr) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xc5b4e37c, __VMLINUX_SYMBOL_STR(svc_xprt_enqueue) },
	{ 0xcd3c2374, __VMLINUX_SYMBOL_STR(svc_reg_xprt_class) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa3a695a, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0xcef8ef68, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0xcad94d09, __VMLINUX_SYMBOL_STR(ib_free_fast_reg_page_list) },
	{ 0x7bc69a29, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0xbe799cfb, __VMLINUX_SYMBOL_STR(svc_unreg_xprt_class) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x751f1c97, __VMLINUX_SYMBOL_STR(svc_xprt_init) },
	{ 0x4bd842e1, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x755f4bd0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x64df587f, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0x6175c8f9, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x77173bb, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x88249399, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf5846f64, __VMLINUX_SYMBOL_STR(svc_xprt_copy_addrs) },
	{ 0x51901b6a, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x383d8303, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0x9ff71ad7, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x1be4f7bd, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0xa02f84d1, __VMLINUX_SYMBOL_STR(svc_xprt_put) },
	{ 0xfe249f31, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x3f88efb5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xac3d20e2, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa91295f, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x96ce6c46, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0xa315f0c2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x90887ceb, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x86aafbc9, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xdb8643bb, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xe28c2f4b, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_page_list) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5e5e448, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7e20f523, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,sunrpc,rdma_cm";

