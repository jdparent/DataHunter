# Data Hunter Mini-G Wifi Module
ifneq ($(KERNELRELEASE),)
	obj-m := datahunter.o
else
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif
