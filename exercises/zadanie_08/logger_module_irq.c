/*
 * Zadanie 8: Obsługa przerwań – dodawanie procesów po przerwaniu
 * 
 * Cel: Skonfiguruj obsługę przerwania w module jądra, która będzie dodawała
 *      proces do listy w momencie jego obsługi.
 *
 * Kroki:
 * 1. Zarejestruj obsługę przerwania.
 * 2. W funkcji obsługi przerwania dodaj aktualny proces do listy.
 * 3. Przy wyjściu modułu zwolnij przerwanie i usuń elementy listy.
 *
 * Podpowiedzi:
 * - Użyj `request_irq()` do rejestracji przerwania.
 * - Funkcja obsługi przerwania powinna być typu `irqreturn_t`.
 * - Zwolnij przerwanie przy wyjściu modułu za pomocą `free_irq()`.
 */
