obj-m += ll-gpio-driver.o

KernelDIR = /lib/modules/$(shell uname -r)/build

all:
	make -C $(KernelDIR) M=$(shell pwd) modules

clean:
	make -C $(KernelDIR) M=$(shell pwd) clean
