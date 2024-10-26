/*
 * Zadanie 4: Workqueue – monitorowanie procesów
 * 
 * Cel: Utwórz moduł jądra, który będzie monitorować procesy o wysokim priorytecie
 *      przy użyciu workqueue i regularnie dodawać je do listy.
 *
 * Kroki:
 * 1. Stwórz strukturę przechowującą PID oraz listę.
 * 2. Zdefiniuj funkcję workqueue, która doda do listy informacje o procesach
 *    o priorytecie powyżej 100.
 * 3. Uruchom workqueue z opóźnieniem i ustaw ją na okresowe wykonywanie.
 *
 * Podpowiedzi:
 * - Użyj `create_workqueue()` do stworzenia workqueue.
 * - Zdefiniuj funkcję zadania za pomocą `DECLARE_DELAYED_WORK`.
 * - Użyj `for_each_process` do iteracji po procesach i `queue_delayed_work()`
 *   do okresowego wykonywania funkcji monitorującej.
 */
