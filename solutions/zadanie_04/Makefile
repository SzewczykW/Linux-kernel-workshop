obj-m += zadanie_04.o

KERNEL_BUILD_DIR := $(PWD)/../../linux
ARCH := x86_64
MODULE_NAME := zadanie_04

OUT_DIR := $(PWD)/../output

all:
	make -C $(KERNEL_BUILD_DIR) M=$(PWD) ARCH=$(ARCH) modules
	cp $(MODULE_NAME).ko $(OUT_DIR)/

clean:
	make -C $(KERNEL_BUILD_DIR) M=$(PWD) clean
	rm -f $(OUT_DIR)/$(MODULE_NAME).ko
	rm -f *.o *.cmd *.ko *.mod.

.PHONY: all clean
