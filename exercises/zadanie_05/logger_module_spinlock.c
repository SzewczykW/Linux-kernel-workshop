/*
 * Zadanie 5: Spinlock – zabezpieczenie listy procesów
 * 
 * Cel: Dodaj do modułu zabezpieczenie spinlockiem, aby zapobiec równoczesnemu
 *      dostępowi do listy procesów.
 *
 * Kroki:
 * 1. Zainicjalizuj spinlock.
 * 2. W funkcji inicjalizacyjnej dodaj nowy element do listy chronionej spinlockiem.
 * 3. W funkcji wyjściowej zabezpiecz usunięcie wszystkich elementów listy spinlockiem.
 *
 * Podpowiedzi:
 * - Użyj `spin_lock_init()` do inicjalizacji spinlocka.
 * - Zabezpiecz dostęp do listy za pomocą `spin_lock()` i `spin_unlock()`.
 * - Skorzystaj z `list_for_each_entry_safe()` do bezpiecznego usuwania elementów.
 */
