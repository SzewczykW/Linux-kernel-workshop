/*
 * Zadanie 1: Inicjalizacja modułu z logowaniem środowiska jądra
 * 
 * Cel: Stwórz moduł jądra, który przy inicjalizacji wypisze kluczowe informacje
 *      o aktualnym środowisku, np. PID bieżącego procesu i nazwę komendy.
 *
 * Kroki:
 * 1. Zdefiniuj funkcję inicjalizacyjną modułu.
 * 2. Wypisz przy pomocy printk() wartości bieżącego PID i nazwy komendy procesu.
 * 3. Zdefiniuj funkcję wyjściową modułu, która wypisze wiadomość potwierdzającą
 *    poprawne zakończenie pracy modułu.
 *
 * Podpowiedzi:
 * - Użyj `printk()` do logowania informacji.
 * - W celu pobrania informacji o bieżącym procesie użyj `current->pid` oraz `current->comm`.
 */

