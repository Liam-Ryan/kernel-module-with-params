###Simple linux module which accepts input parameter

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
