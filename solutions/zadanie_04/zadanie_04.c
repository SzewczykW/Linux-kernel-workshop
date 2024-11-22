#include <linux/delay.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/sched.h> 
#include <linux/sched/signal.h>
#include <linux/slab.h>
#include <linux/workqueue.h>

MODULE_LICENSE("Apache 2.0");
MODULE_AUTHOR("Wiktor Szewczyk");
MODULE_DESCRIPTION("Module using global workqueue to collect tasks with priority higher than 100");

struct task_info {
    int pid;
    char comm[TASK_COMM_LEN];
    struct list_head list;
};

LIST_HEAD(task_list);

static struct delayed_work task_work;

static void add_task(struct task_struct *task) {
    struct task_info *task_node;

    if (task->prio < 100) {
        return;
    }

    list_for_each_entry(task_node, &task_list, list) {
        if (task_node->pid == task->pid) {
            return;
        }
    }

    task_node = kzalloc(sizeof(*task_node), GFP_KERNEL);
    if (!task_node) {
        printk(KERN_ERR "Zadanie_04: Memory allocation failed.\n");
        return;
    }
    task_node->pid = task->pid;
    strncpy(task_node->comm, task->comm, TASK_COMM_LEN);
    list_add_tail(&task_node->list, &task_list);
    printk(KERN_NOTICE "Added process PID: %d, Command: %s\n", task->pid, task->comm);
}

static void collect_high_priority_tasks(struct work_struct *work) {
    struct task_struct *task;

    printk(KERN_INFO "Zadanie_04: Collecting tasks with priority higher than 100.\n");

    for_each_process(task) {
        add_task(task);
    }

    schedule_delayed_work(&task_work, msecs_to_jiffies(5000));
}

static int __init mod_init(void) {
    printk(KERN_INFO "Zadanie_04: Initializing module with global workqueue.\n");

    INIT_DELAYED_WORK(&task_work, collect_high_priority_tasks);
    schedule_delayed_work(&task_work, msecs_to_jiffies(5000));

    return 0;
}

static void __exit mod_exit(void) {
    struct task_info *task, *tmp;

    cancel_delayed_work_sync(&task_work);

    list_for_each_entry_safe(task, tmp, &task_list, list) {
        printk(KERN_INFO "Zadanie_04: Removing task PID: %d, Command: %s\n", task->pid, task->comm);
        list_del(&task->list);
        kfree(task);
    }

    printk(KERN_INFO "Zadanie_04: Module with global workqueue unloaded.\n");
}

module_init(mod_init);
module_exit(mod_exit);
