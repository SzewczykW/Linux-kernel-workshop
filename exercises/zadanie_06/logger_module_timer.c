/*
 * Zadanie 6: Timer – monitorowanie i oczyszczanie listy procesów
 * 
 * Cel: Zaimplementuj timer w module jądra, który regularnie sprawdza listę procesów
 *      i usuwa zakończone procesy.
 *
 * Kroki:
 * 1. Zainicjalizuj timer jądra.
 * 2. Zdefiniuj funkcję timera, która przeszukuje listę procesów i usuwa zakończone.
 * 3. Uruchom timer przy inicjalizacji i zatrzymaj go przy wyjściu modułu.
 *
 * Podpowiedzi:
 * - Użyj `timer_setup()` do inicjalizacji timera.
 * - Ustaw okresowe działanie timera za pomocą `mod_timer()`.
 * - W funkcji timera użyj `list_for_each_entry_safe()` do bezpiecznego usuwania elementów.
 */
