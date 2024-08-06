#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init gpio_driver_init(void)
{
	printk("Init driver :))\n");
	return 0;
}

static void __exit gpio_drver_exit(void)
{
	printk("Exiting driver :((\n");
	return;
}

module_init(gpio_driver_init);
module_exit(gpio_driver_exit);

MODULE_DEXCRIPTION("GPIO Drivers for Raspberry PI");
MODULE_VERSION("1.0");
