/*
 * datahunter.c			This module implements a wireless ethernet adapter for the
 * 									Data Hunter Mini-G Wifi Serial Device.
 *
 * Version:					datahunter.c		0.0.1		2/1/11
 *
 * Authors:					Jeff Parent <jeff.parent@gmail.com>
 */

#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

static int __init datahunter_init(void)
{
	printk(KERN_ALERT "Data Hunter Mini-G loaded\n");
	return 0;
}

static void __exit datahunter_exit(void)
{
	printk(KERN_ALERT "Data Hunter Mini-G unloaded\n");
}

module_init(datahunter_init);
module_exit(datahunter_exit);
