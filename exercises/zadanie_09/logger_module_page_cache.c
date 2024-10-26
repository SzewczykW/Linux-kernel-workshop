/*
 * Zadanie 9: Praca z Page Cache – przechowywanie i odzyskiwanie danych procesów
 * 
 * Cel: Wykorzystaj Page Cache do przechowywania informacji o bieżącym procesie.
 *
 * Kroki:
 * 1. Zaalokuj stronę Page Cache.
 * 2. Zapisz PID i nazwę komendy bieżącego procesu w Page Cache.
 * 3. Przy wyjściu modułu zwolnij przydzieloną stronę.
 *
 * Podpowiedzi:
 * - Użyj `alloc_page()` do alokacji strony i `__free_page()` do zwalniania.
 * - Skorzystaj z `kmap()` i `kunmap()` do mapowania danych na stronę.
 */
