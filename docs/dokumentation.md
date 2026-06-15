# Dokumentation Labyrinth-Spiel

## 1. Management Summary

In dieser Praxisarbeit wurde ein textbasiertes Labyrinth-Spiel in der Programmiersprache C entwickelt. Das Spiel wird in der Konsole gespielt. Der Spieler wird mit `P`, der Schatz mit `T` und Hindernisse mit `O` dargestellt.

Das Ziel des Spiels ist es, den Schatz im Labyrinth zu finden. Dafür bewegt sich der Spieler mit den Tasten `W`, `A`, `S` und `D` durch ein zufällig generiertes Spielfeld. Bewegungen ausserhalb des Spielfelds oder auf Hindernisse werden verhindert.

Der Fokus der Arbeit lag auf der Anwendung von 2D-Arrays, Funktionen, Programmsteuerung, Benutzereingaben und einfacher Spiellogik.

## 2. Anforderungen

Das Spiel erfüllt folgende Anforderungen:

* Konsolenspiel in C
* Spielfeld mit mindestens 10 x 10 Feldern
* Darstellung des Spielers mit `P`
* Darstellung des Schatzes mit `T`
* Darstellung der Hindernisse mit `O`
* zufällige Platzierung von Spieler, Schatz und Hindernissen
* keine Überlappung von Spieler, Schatz und Hindernissen
* mindestens 10 % Hindernisse
* Bewegung mit `W`, `A`, `S`, `D`
* Blockierung ungültiger Bewegungen
* Siegmeldung beim Finden des Schatzes
* mindestens 5 Testszenarien

## 3. Design

Das Spielfeld wurde als zweidimensionales Array umgesetzt:

```c
char labyrinth[10][10];
```

Diese Entscheidung wurde getroffen, weil ein Labyrinth aus Zeilen und Spalten besteht. Dadurch kann jedes Feld direkt über seine Koordinaten angesprochen werden.

Für Positionen wurde eine eigene Struktur verwendet:

```c
typedef struct {
    int row;
    int col;
} Position;
```

Dadurch werden Zeile und Spalte gemeinsam gespeichert. Das macht den Code lesbarer und vereinfacht die Übergabe von Positionen an Funktionen.

## 4. Implementierung

Die Entwicklung wurde in mehreren Schritten umgesetzt.

Zuerst wurde das Git-Repository erstellt und eine saubere Projektstruktur vorbereitet. Danach wurde das Design dokumentiert, bevor mit dem eigentlichen Code begonnen wurde.

Anschliessend wurde das leere Spielfeld erstellt und in der Konsole ausgegeben. Danach wurden Spieler, Schatz und Hindernisse zufällig platziert.

Im nächsten Schritt wurde die Spielerbewegung mit `W`, `A`, `S` und `D` implementiert. Danach wurde geprüft, ob Bewegungen gültig sind. Bewegungen ausserhalb des Spielfelds oder auf Hindernisse werden blockiert.

Zum Schluss wurde die Siegbedingung ergänzt. Das Spiel endet, sobald der Spieler den Schatz erreicht.

## 5. Tests

Es wurden fünf Testszenarien definiert:

1. Spielfeld wird korrekt angezeigt
2. Spieler bewegt sich auf ein freies Feld
3. Bewegung auf Hindernis wird blockiert
4. Bewegung ausserhalb des Spielfelds wird blockiert
5. Schatz wird gefunden und das Spiel endet

Die Tests sind in `docs/tests/testszenarien.md` dokumentiert.

## 6. KI-Reflexion

KI wurde zur Unterstützung bei der Strukturierung des Projekts, beim Formulieren der Dokumentation und beim Erstellen von Codevorschlägen verwendet.

Der Code wurde nicht blind übernommen. Die Vorschläge wurden schrittweise geprüft, angepasst und in einzelne Git-Branches aufgeteilt.

Beispiel-Prompts:

1. „Hilf mir, eine Projektstruktur für ein C-Labyrinth-Spiel zu erstellen.“
2. „Schreibe mir eine Funktion, um ein 10x10 Labyrinth in C auszugeben.“

Übernommen wurden vor allem Strukturvorschläge und Grundideen für Funktionen. Angepasst wurden Benennungen, Kommentare und die Reihenfolge der Entwicklung.

## 7. Lessons Learned

Ich habe gelernt, wie ein kleines C-Projekt strukturiert aufgebaut werden kann. Besonders wichtig waren dabei Funktionen, Arrays, Zufallszahlen und Benutzereingaben.

Ausserdem habe ich gelernt, wie Git-Branches genutzt werden können, um einzelne Entwicklungsschritte sauber voneinander zu trennen.
