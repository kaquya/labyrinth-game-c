# Architektur

## Ziel des Programms

Das Programm ist ein textbasiertes Labyrinth-Spiel in der Programmiersprache C. Der Spieler bewegt sich in einem zufällig generierten Spielfeld und muss den Schatz finden.

## Aufbau

Das Programm wird zuerst in einer einzelnen Datei `main.c` umgesetzt. Trotzdem wird der Code modular aufgebaut, indem die einzelnen Aufgaben in eigene Funktionen getrennt werden.

## Geplante Funktionen

* `initializeLabyrinth()`
  Erstellt das leere Spielfeld.

* `printLabyrinth()`
  Gibt das aktuelle Spielfeld in der Konsole aus.

* `getRandomFreePosition()`
  Sucht eine zufällige freie Position im Spielfeld.

* `placeGameObjects()`
  Platziert Spieler, Schatz und Hindernisse.

* `isValidMove()`
  Prüft, ob eine Bewegung erlaubt ist.

* `movePlayer()`
  Führt die Bewegung des Spielers aus.

* `hasPlayerWon()`
  Prüft, ob der Spieler den Schatz erreicht hat.

## Begründung der Architektur

Die Spiellogik und die Ausgabe werden möglichst getrennt. Dadurch bleibt der Code übersichtlicher und einzelne Programmteile können einfacher getestet und angepasst werden.

Die Verwendung von mehreren Funktionen erfüllt ausserdem die Anforderung einer modularen Programmstruktur.
