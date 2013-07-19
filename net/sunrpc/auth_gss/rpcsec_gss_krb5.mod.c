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
	{ 0x405c1144, "get_seconds" },
	{ 0xc897c382, "sg_init_table" },
	{ 0xc52ef5, "g_make_token_header" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x111f0c61, "write_bytes_to_xdr_buf" },
	{ 0x3a469d78, "malloc_sizes" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xda61a036, "gss_mech_register" },
	{ 0xf8b2ff6e, "g_verify_token_header" },
	{ 0x5038d31b, "xdr_buf_subsegment" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa735db59, "prandom_u32" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xede82a3e, "crypto_destroy_tfm" },
	{ 0x1b500ca5, "gss_mech_unregister" },
	{ 0x1a176dbd, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xb6244511, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c2a78ab, "read_bytes_from_xdr_buf" },
	{ 0x23caf8ff, "xdr_process_buf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb5dea7ef, "g_token_size" },
	{ 0x334fe5fe, "crypto_alloc_base" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=auth_rpcgss,sunrpc";

