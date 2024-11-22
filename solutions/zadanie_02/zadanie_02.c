#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/slab.h>

MODULE_LICENSE("Apache 2.0");
MODULE_AUTHOR("Wiktor Szewczyk");
MODULE_DESCRIPTION("Memory management example");

static struct task_struct *task_mem = NULL;

static int __init mod_init(void) {
    printk(KERN_INFO "Zadanie_02: Loading memory management module.\n");

    task_mem = kzalloc(sizeof(struct task_struct), GFP_KERNEL);
    if (!task_mem) {
        printk(KERN_ERR "Zadanie_02: Memory allocation failed.\n");
        return -ENOMEM;
    }

    task_mem->pid = current->pid;
    snprintf(task_mem->comm, sizeof(task_mem->comm), "dummy_task");

    printk(KERN_INFO "Zadanie_02: Allocated memory for PID: %d, Command: %s\n", task_mem->pid, task_mem->comm);
    return 0;
}

static void __exit mod_exit(void) {
    if (task_mem) {
        kfree(task_mem);
        printk(KERN_INFO "Zadanie_02: Freed allocated memory.\n");
    }
}

module_init(mod_init);
module_exit(mod_exit);
