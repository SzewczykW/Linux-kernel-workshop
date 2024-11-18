```c
/*
 * Zadanie 2: Konfiguracja, kompilacja i debugowanie jądra
 * 
 * Cel: Skonfiguruj jądro z opcjami debugowania, skompiluj je i uruchom w środowisku
 * QEMU z opcjami debugowania KGDB, a następnie podłącz debugger gdb.
 *
 * Kroki:
 * 1. Konfiguracja kernela:
 *    a) Otwórz w folderze zawierające jądro narzędzie konfiguracji jądra: make menuconfig.
 *    b) Ustaw CONFIG_DEBUG_KERNEL=y
 *       - Lokalizacja:
 *         -> Kernel hacking
 *            -> Kernel debugging (DEBUG_KERNEL [=y])
 *    c) Ustaw CONFIG_DEBUG_INFO=y
 *       - Lokalizacja:
 *         -> Kernel hacking
 *            -> Compile-time checks and compiler options
 *               -> Generate BTF type information (DEBUG_INFO_BTF [=n])
 *    d) Zapisz zmiany i zakończ konfigurację.
 * 
 * 2. Kompilacja kernela:
 *    a) Uruchom kompilację jądra:
 *       make -j$(nproc)
 *
 * 3. Edycja pliku run.sh:
 *    a) W pliku run.sh dodaj opcje uruchamiania:
 *       -append "kgdbwait nokaslr kgdboc=ttyS0,115200" // kgdbwait - czeka na podłączenie debuggera,  kgdboc - konfiguracja KGDB
 *       -serial tcp::1234,server,nowait // wystawienie na porcie 1234 interfejsu szeregowego
 * 
 * 4. Debugowanie kernela:
 *    a) W nowym terminalu uruchom QEMU które będzie czekać na pod
 *    b) Uruchom gdb z wkompilowanym jądrem:
 *       gdb ./vmlinux
 *    c) Połącz gdb z maszyną wirtualną:
 *       (gdb) target remote localhost:1234
 *    d) Alternatywnie uruchom gdb z gotowymi opcjami:
 *       gdb -ex 'file vmlinux' -ex 'target remote localhost:1234'
 */