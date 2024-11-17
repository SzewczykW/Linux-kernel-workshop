/*
 * Zadanie 1: Inicjalizacja modułu z logowaniem środowiska jądra
 * 
 * Cel: Stwórz moduł jądra, który przy inicjalizacji wypisze PID bieżącego procesu oraz
 * nazwę komendy.
 *
 * Kroki:
 * 1. Zdefiniuj funkcję inicjalizacyjną modułu.
 * 2. Wypisz przy pomocy printk() wartości bieżącego PID i nazwy komendy procesu.
 * 3. Zdefiniuj funkcję wyjściową modułu, która wypisze wiadomość potwierdzającą
 *    poprawne zakończenie pracy modułu.
 * 4. Uruchom system uzywajac skryptu run.sh a nastepnie zalacz moduł używając insmod.
 *    Po zakończeniu użyj rmmod aby wyładować moduł.
 *
 * Podpowiedzi:
 * - Użyj `printk()` do logowania informacji.
 * - W celu pobrania informacji o bieżącym procesie użyj `current->pid` w celu pobranie
 *   PID obecnego procesu oraz `current->comm` w celu pobrania komendy.
 * - Plik Makefile skopiuj i zedytuj pod potrzeby zadania z katalogu examples.
 * - Dyrektywy include potrzebne do zadania:
 *   - #include <linux/init.h>
 *   - #include <linux/kernel.h>
 *   - #include <linux/module.h>
 */

