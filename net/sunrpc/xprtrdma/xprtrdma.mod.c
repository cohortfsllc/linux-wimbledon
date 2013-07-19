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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xab359ee0, __VMLINUX_SYMBOL_STR(xprt_lookup_rqst) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x7bf00d70, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x370c0d08, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_mr) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x696be91e, __VMLINUX_SYMBOL_STR(ib_dealloc_mw) },
	{ 0x412a6c25, __VMLINUX_SYMBOL_STR(xprt_register_transport) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5f2ea640, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xcad94d09, __VMLINUX_SYMBOL_STR(ib_free_fast_reg_page_list) },
	{ 0x3d5844b3, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x57d0572b, __VMLINUX_SYMBOL_STR(xprt_free) },
	{ 0x7bc69a29, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xab7a0b98, __VMLINUX_SYMBOL_STR(ib_alloc_mw) },
	{ 0x3907bfd3, __VMLINUX_SYMBOL_STR(xprt_alloc) },
	{ 0xf3b7c64b, __VMLINUX_SYMBOL_STR(rpcb_getport_async) },
	{ 0x608f47ba, __VMLINUX_SYMBOL_STR(xprt_wake_pending_tasks) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcdb3abfb, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0x5e68a741, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x4cce4f94, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1e491a04, __VMLINUX_SYMBOL_STR(ib_unmap_fmr) },
	{ 0x4bd842e1, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x755f4bd0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x64df587f, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0x6175c8f9, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x41b0a149, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfe572425, __VMLINUX_SYMBOL_STR(xprt_unregister_transport) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd327ce98, __VMLINUX_SYMBOL_STR(xprt_release_xprt_cong) },
	{ 0x383d8303, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0x9ff71ad7, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x1be4f7bd, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x841997e7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x68b20f96, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0xdc457138, __VMLINUX_SYMBOL_STR(ib_dealloc_fmr) },
	{ 0x2eec70c8, __VMLINUX_SYMBOL_STR(xprt_alloc_slot) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x263122f8, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xa91295f, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xfc1c73e2, __VMLINUX_SYMBOL_STR(ib_alloc_fmr) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2c3b2c04, __VMLINUX_SYMBOL_STR(ib_query_qp) },
	{ 0x86aafbc9, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x53e5b855, __VMLINUX_SYMBOL_STR(xprt_complete_rqst) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x184a11bc, __VMLINUX_SYMBOL_STR(xprt_set_retrans_timeout_def) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xfac8a1b3, __VMLINUX_SYMBOL_STR(xprt_reserve_xprt_cong) },
	{ 0x94b4eb9d, __VMLINUX_SYMBOL_STR(ib_reg_phys_mr) },
	{ 0xc73b5ef, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0xe28c2f4b, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_page_list) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5e5e448, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xc3f4663e, __VMLINUX_SYMBOL_STR(xprt_disconnect_done) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd119669b, __VMLINUX_SYMBOL_STR(xprt_release_rqst_cong) },
	{ 0x7e20f523, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xcc739fca, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc,ib_core,rdma_cm";

