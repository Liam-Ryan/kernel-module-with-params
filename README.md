### Simple linux module which accepts input parameter

This is an extremely simple "driver". 


To compile you must have linux-headers installed
```bash
sudo apt-get install linux-headers-$(uname -r)
```
Then run `make` from within the directory


Once compiled you can try it out with the following
```bash
sudo insmod param-module.ko input="Your message here"
dmesg
sudo rmmod param_module
dmesg
```
All going well you'll see the following messages
```
Externally compiled driver says Your message here
Goodbye, I guess?
```
You can also inspect the module file to see the info set in the macros. If you'd like to see how to build the module as part of the kernel check out https://github.com/Liam-Ryan/staging-kernel-work/commit/c95ceac88d1e4cf4baeb08c24d7bcfc4d27886aa
```
sudo modinfo ./param-module.ko 
filename:       /home/liam/dev/drivers/param-module/./param-module.ko
license:        GPL
author:         Liam Ryan <liamryandev@gmail.com>
description:    My excellent param module
srcversion:     8E2681EF6788EA7B8F48D37
depends:        
retpoline:      Y
name:           param_module
vermagic:       4.15.0-45-generic SMP mod_unload 
parm:           input:This is what I'll say! (charp)
