/*
 * Zadanie 3: Implementacja listy jednokierunkowej – lista procesów
 * 
 * Cel: Utwórz listę jednokierunkową przechowującą informacje o procesach.
 * 
 * Kroki:
 * 1. Zdefiniuj strukturę zawierającą PID procesu oraz pole `list` z `struct list_head`.
 * 2. Przy inicjalizacji modułu dodaj do listy informacje o kilku procesach.
 * 3. Przy wyjściu modułu usuń wszystkie elementy listy.
 *
 * Podpowiedzi:
 * - Użyj `struct list_head` do definiowania listy jednokierunkowej.
 * - Do iteracji po procesach możesz użyć `for_each_process`.
 * - Skorzystaj z funkcji `list_add_tail()` do dodawania elementów do listy
 *   oraz `list_for_each_entry_safe()` do usuwania elementów.
 */
