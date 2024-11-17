/*
 * Zadanie 2: Zarządzanie pamięcią – alokacja i zwalnianie zasobów
 * 
 * Cel: Zaimplementuj alokację pamięci dynamicznej w module jądra dla struktury
 *      `task_struct`, zainicjalizuj wybrane pola i zwolnij pamięć przy wyjściu.
 *
 * Kroki:
 * 1. W funkcji inicjalizacyjnej zaalokuj pamięć dla `struct task_struct`.
 * 2. Wypełnij strukturę wybranymi informacjami, np. PID i nazwą komendy.
 * 3. W funkcji wyjściowej modułu zwolnij przydzieloną pamięć.
 * 4. Uruchom system uzywajac skryptu run.sh a nastepnie zalacz moduł używając insmod.
 *    Po zakończeniu użyj rmmod aby wyładować moduł.
 *
 * Podpowiedzi:
 * - Użyj `kzalloc()` do alokacji i `kfree()` do zwalniania pamięci.
 * - Skorzystaj z `GFP_KERNEL` jako flagi przy alokacji pamięci.
 * - strukture task_struct jest zdefiniowana w Linuxie do reprezentowania procesow,
 *   takich jak ten. Potrzebnymi nam polami beda:
 *   - pid
 *   - comm
 * - W celu pobrania informacji o bieżącym procesie użyj `current->pid` w celu pobranie
 *   PID obecnego procesu oraz `current->comm` w celu pobrania komendy.
 * - Plik Makefile skopiuj i zedytuj pod potrzeby zadania z katalogu examples.
 * - Dyrektywy include potrzebne do zadania:
 *   - #include <linux/init.h>
 *   - #include <linux/kernel.h>
 *   - #include <linux/module.h>
 *   - #include <linux/slab.h>
 */
