/*
 * Zadanie 7: Urządzenie znakowe – komunikacja z przestrzenią użytkownika
 * 
 * Cel: Utwórz urządzenie znakowe, które umożliwi komunikację z użytkownikiem,
 *      pozwalając na odczyt listy procesów i dodawanie nowych procesów do listy.
 *
 * Kroki:
 * 1. Zarejestruj urządzenie znakowe.
 * 2. Zaimplementuj funkcje `read` i `write` urządzenia.
 * 3. Przy odczycie zwróć informacje o wszystkich procesach na liście.
 * 4. Przy zapisie dodaj nowy proces do listy.
 *
 * Podpowiedzi:
 * - Użyj `register_chrdev()` do rejestracji urządzenia znakowego.
 * - Funkcja `read` powinna używać `copy_to_user()` do zwracania informacji użytkownikowi.
 * - Funkcja `write` może dodawać aktualny proces do listy.
 */
