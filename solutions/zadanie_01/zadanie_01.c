#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("Apache 2.0");
MODULE_AUTHOR("Wiktor Szewczyk");
MODULE_DESCRIPTION("Module initialization with logging environment info");

static int __init mod_init(void) {
    printk(KERN_INFO "Zadanie_01: Module loaded. Initializing log environment.\n");
    printk(KERN_INFO "Zadanie_01: Current PID: %d\n", current->pid);
    printk(KERN_INFO "Zadanie_01: Current Command: %s\n", current->comm);
    return 0;
}

static void __exit mod_exit(void) {
    printk(KERN_INFO "Zadanie_01: Module unloaded. Resources released.\n");
}

module_init(mod_init);
module_exit(mod_exit);
