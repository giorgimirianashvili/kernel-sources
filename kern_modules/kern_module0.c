#include <linux/module.h>
#include <linux/kernel.h>

static int init_module(){ // main function
	printk(KERN_INFO "Edit text\n"); // use this for a simple kernel log
	printk(KERN_ALERT "Edit text\n"); // use this for kernel alerts
	return 0;
}
static void init_module_exit(void){ // exit function
	printk(KERN_ALERT "Edit text\n"); // use this for kernel alert exit
}

module_init(init_module);
module_exit(init_module_exit);
