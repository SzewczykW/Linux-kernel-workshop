/*
 * Zadanie 3: Implementacja listy jednokierunkowej – lista procesów
 * 
 * Cel: Utwórz listę jednokierunkową przechowującą informacje o procesach.
 * 
 * Kroki:
 * 1. Zdefiniuj strukturę zawierającą PID procesu oraz jego komende wraz z polem `list`
 *   typu `struct list_head`.
 * 2. Przy inicjalizacji modułu dodaj 5 procesow do listy(obojetnie jakich).
 * 3. Przy wyjściu modułu usuń wszystkie elementy listy.
 * 4. Uruchom system uzywajac skryptu run.sh a nastepnie zalacz moduł używając insmod.
 *    Po zakończeniu użyj rmmod aby wyładować moduł.
 *
 * Podpowiedzi:
 * - Użyj `struct list_head` do definiowania listy jednokierunkowej.
 * - Do iteracji po procesach użyj `for_each_process` oraz ze struktury task_struct
 *   ktora nalezy podac przez wskaznik do powyzszej petli.
 * - PID oraz komenda znajduja sie w strukturze task_struct.
 * - Skorzystaj z funkcji `list_add_tail()` do dodawania elementów do listy
 *   oraz `list_for_each_entry_safe()` do usuwania elementów.
 * - Plik Makefile skopiuj i zedytuj pod potrzeby zadania z katalogu examples.
 * - Dyrektywy include potrzebne do zadania:
 *   - #include <linux/init.h>
 *   - #include <linux/kernel.h>
 *   - #include <linux/list.h>
 *   - #include <linux/module.h>
 *   - #include <linux/sched.h>
 *   - #include <linux/sched/signal.h>
 *   - #include <linux/slab.h>
 */
