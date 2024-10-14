#!/usr/bin/env sh

qemu-system-x86_64 \
  -kernel ../linux/arch/x86_64/boot/bzImage \
  -nographic \
  -drive format=raw,file=../buildroot/output/images/rootfs.ext4,if=virtio \
  -append "root=/dev/vda console=ttyS0 nokaslr other-paras-here-if-needed" \
  -m 4G \
  -smp $(nproc) \
  -net nic,model=virtio \
  -net user,hostfwd=tcp::10022-:22
