/*
 * Zadanie 10: Rozbudowany moduł zarządzania procesami – integracja
 * 
 * Cel: Stwórz rozbudowany moduł zarządzania procesami integrujący
 *      techniki z poprzednich zadań.
 *
 * Kroki:
 * 1. Zaimplementuj listę procesów zabezpieczoną spinlockiem.
 * 2. Dodaj obsługę przerwań, która dodaje procesy do listy.
 * 3. Dodaj urządzenie znakowe do komunikacji z przestrzenią użytkownika.
 * 4. Wykorzystaj workqueue do monitorowania procesów o wysokim priorytecie.
 * 5. Użyj timera do usuwania zakończonych procesów.
 *
 * Podpowiedzi:
 * - Zainicjalizuj workqueue za pomocą `create_workqueue()`.
 * - Wykorzystaj `request_irq()` i `spin_lock_init()` do synchronizacji.
 * - Dodaj funkcje `read` i `write` do urządzenia znakowego.
 * - Użyj `mod_timer()` do okresowej aktywacji timera.
 */
