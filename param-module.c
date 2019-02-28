#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

static char* input = "default";

static int __init initfunction(void)
{
	pr_crit("Externally compiled driver says %s\n", input);
	return 0;
}

static void __exit exitfunction(void)
{
	pr_crit("Goodbye, I guess?\n");
}

module_init(initfunction);
module_exit(exitfunction);
module_param(input, charp, S_IRUGO);

MODULE_PARM_DESC(input, "This is what I'll say!");
MODULE_DESCRIPTION("My excellent param module");
MODULE_AUTHOR("Liam Ryan <liamryandev@gmail.com>");
MODULE_LICENSE("GPL");
