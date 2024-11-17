/*
 * Zadanie 4: Workqueue – monitorowanie procesów
 * 
 * Cel: Utwórz moduł jądra, który będzie monitorować procesy o wysokim priorytecie (<100)
 *      przy użyciu workqueue i regularnie dodawać je do listy za pomoca worker-a.
 *
 * Kroki:
 * 1. Zdefiniuj strukturę zawierającą PID procesu oraz jego komende wraz z polem `list`
 *   typu `struct list_head`.
 * 2. Zdefiniuj funkcję workqueue, która doda do listy informacje o procesach
 *    o priorytecie powyżej 100.
 * 3. Uruchom workqueue z opóźnieniem i ustaw ją na okresowe wykonywanie.
 * 4. Uruchom system uzywajac skryptu run.sh a nastepnie zalacz moduł używając insmod.
 *    Po zakończeniu użyj rmmod aby wyładować moduł.
 *
 * Podpowiedzi:
 * - Do iteracji po procesach użyj `for_each_process` oraz ze struktury task_struct
 *   ktora nalezy podac przez wskaznik do powyzszej petli.
 * - PID(pid), komenda(comm) oraz priorytet(prio) procesu znajduja sie w strukturze task_struct.
 * - Skorzystaj z funkcji `list_add_tail()` do dodawania elementów do listy
 *   oraz `list_for_each_entry_safe()` do usuwania elementów.
 * - Użyj `INIT_DELAYED_WORK` aby dodac zadanie do globalnej kolejki wraz z struktura
 *   delayed_work.
 * - Zdefiniuj funkcję zadania za pomocą `DECLARE_DELAYED_WORK`.
 * - Użyj `for_each_process` do iteracji po procesach i `schedule_delayed_work()` z opoznieniem 5s
 *   uzywajac `msecs_to_jiffies`
 *   do okresowego wykonywania funkcji monitorującej.
 * - Użyj `cancel_delayed_work_sync` do anulowania pracy przy wyladowaniu modulu.
 * - Plik Makefile skopiuj i zedytuj pod potrzeby zadania z katalogu examples.
 * - Dyrektywy include potrzebne do zadania:
 *   - #include <linux/delay.h>
 *   - #include <linux/init.h>
 *   - #include <linux/kernel.h>
 *   - #include <linux/list.h>
 *   - #include <linux/module.h>
 *   - #include <linux/sched.h> 
 *   - #include <linux/sched/signal.h>
 *   - #include <linux/slab.h>
 *   - #include <linux/workqueue.h>
 */
