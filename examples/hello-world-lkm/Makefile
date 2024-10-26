obj-m += hello-world.o

KERNEL_BUILD_DIR := $(PWD)/../../linux
ARCH := x86_64

OUT_DIR := $(PWD)/../output

all:
	make -C $(KERNEL_BUILD_DIR) M=$(PWD) ARCH=$(ARCH) modules
	cp hello-world.ko $(OUT_DIR)/

clean:
	make -C $(KERNEL_BUILD_DIR) M=$(PWD) clean
	rm -f $(OUT_DIR)/hello-world.ko
	rm -f *.o *.cmd *.ko *.mod.

.PHONY: all clean
