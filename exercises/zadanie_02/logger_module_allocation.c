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
 *
 * Podpowiedzi:
 * - Użyj `kmalloc()` do alokacji i `kfree()` do zwalniania pamięci.
 * - Skorzystaj z `GFP_KERNEL` jako flagi przy alokacji pamięci.
 */
