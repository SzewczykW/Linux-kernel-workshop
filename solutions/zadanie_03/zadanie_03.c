#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>
#include <linux/slab.h>

MODULE_LICENSE("Apache 2.0");
MODULE_AUTHOR("Wiktor Szewczyk");
MODULE_DESCRIPTION("Linked list exercise.");

struct task_info {
    int pid;
    char comm[TASK_COMM_LEN];
    struct list_head list;
};

LIST_HEAD(task_list);

static int __init mod_init(void) {
    printk(KERN_INFO "Zadanie_03: Initializing linked list of tasks.\n");

    struct task_struct *task_node;
    int count = 0;

    for_each_process(task_node) {
        if (count >= 5) break;
        struct task_info *new_task = kzalloc(sizeof(*new_task), GFP_KERNEL);
        if (new_task) {
            new_task->pid = task_node->pid;
            strncpy(new_task->comm, task_node->comm, TASK_COMM_LEN);
            list_add_tail(&new_task->list, &task_list);
            printk(KERN_INFO "Zadanie_03: Added task PID: %d, Command: %s\n", task_node->pid, task_node->comm);
            count++;
        }
    }

    return 0;
}

static void __exit mod_exit(void) {
    struct task_info *task, *tmp;
    list_for_each_entry_safe(task, tmp, &task_list, list) {
        printk(KERN_INFO "Zadanie_03: Removing task PID: %d, Command: %s\n", task->pid, task->comm);
        list_del(&task->list);
        kfree(task);
    }
}

module_init(mod_init);
module_exit(mod_exit);
