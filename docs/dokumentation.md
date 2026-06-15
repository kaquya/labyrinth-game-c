# Dokumentation Labyrinth-Spiel

## 1. Management Summary

In dieser Praxisarbeit wurde ein textbasiertes Labyrinth-Spiel in der Programmiersprache C entwickelt. Das Spiel läuft in der Konsole und verwendet ein zweidimensionales Spielfeld mit mindestens 10 x 10 Feldern.

Der Spieler wird mit `P`, der Schatz mit `T` und Hindernisse mit `O` dargestellt. Ziel des Spiels ist es, den Schatz im Labyrinth zu finden. Der Spieler bewegt sich mit den Tasten `W`, `A`, `S` und `D`. Ungültige Bewegungen, zum Beispiel gegen Hindernisse oder ausserhalb des Spielfelds, werden verhindert.

Der Fokus der Arbeit lag auf der Anwendung von Arrays, Funktionen, Programmsteuerung, Zufallszahlen, Benutzereingaben und einer einfachen modularen Programmstruktur.

## 2. Anforderungen und Aufgabenstellung

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
* ungültige Bewegungen führen zu keiner Positionsänderung
* Bewegung ausserhalb des Spielfelds ist nicht erlaubt
* Bewegung auf Hindernisse ist nicht erlaubt
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

Diese Struktur speichert Zeile und Spalte gemeinsam. Dadurch wird der Code lesbarer, da Positionen nicht als einzelne Variablen übergeben werden müssen.

Die geplante Programmstruktur besteht aus mehreren Funktionen:

* `initializeLabyrinth()` erstellt das leere Spielfeld.
* `printLabyrinth()` gibt das Spielfeld aus.
* `getRandomFreePosition()` sucht eine freie zufällige Position.
* `placeGameObjects()` platziert Spieler, Schatz und Hindernisse.
* `isValidMove()` prüft, ob eine Bewegung erlaubt ist.
* `movePlayer()` bewegt den Spieler.
* `hasPlayerWon()` prüft die Siegbedingung.

## 4. Implementierung

Die Entwicklung wurde bewusst in mehreren Schritten umgesetzt.

Zuerst wurde das Git-Repository erstellt. Danach wurden `README.md`, `.gitignore`, `LICENSE` und die Projektordner angelegt. Anschliessend wurde das Design dokumentiert, bevor mit der eigentlichen Implementierung begonnen wurde.

Als erster Programmschritt wurde das leere Spielfeld erstellt und in der Konsole ausgegeben. Danach wurden Spieler, Schatz und Hindernisse zufällig platziert. Dabei wurde darauf geachtet, dass sich die Objekte nicht überschneiden.

Im nächsten Schritt wurde die Bewegung des Spielers mit `W`, `A`, `S` und `D` umgesetzt. Danach wurde die Bewegungsprüfung ergänzt. Diese verhindert, dass der Spieler ausserhalb des Spielfelds oder auf ein Hindernis läuft.

Zum Schluss wurde die Siegbedingung implementiert. Sobald der Spieler die Position des Schatzes erreicht, wird eine Siegmeldung angezeigt und das Spiel beendet.

## 5. Test

Es wurden fünf Testszenarien definiert:

1. Spielfeld wird korrekt angezeigt
2. Spieler bewegt sich auf ein freies Feld
3. Bewegung auf ein Hindernis wird blockiert
4. Bewegung ausserhalb des Spielfelds wird blockiert
5. Schatz wird gefunden und das Spiel endet

Die Tests sind in folgendem Dokument beschrieben:

```txt
docs/tests/testszenarien.md
```
## 6. Lessons Learned

Ich habe gelernt, wie ein kleines C-Projekt strukturiert aufgebaut werden kann. Besonders wichtig waren dabei Arrays, Funktionen, Zufallszahlen und Benutzereingaben.

Ausserdem habe ich gelernt, wie Git-Branches genutzt werden können, um einzelne Entwicklungsschritte sauber voneinander zu trennen.

## 7. Anhang

### Projektstruktur

```txt
labyrinth-game-c
├── docs
│   ├── design
│   ├── screenshots
│   └── tests
├── src
│   └── main.c
├── .gitignore
├── LICENSE
└── README.md
```

### Branches

| Branch                         | Zweck                            |
| ------------------------------ | -------------------------------- |
| `feature/project-setup`        | Repository-Grundlagen            |
| `feature/project-structure`    | Ordnerstruktur                   |
| `feature/design-documentation` | Design und Planung               |
| `feature/game-board`           | Spielfeld erstellen und anzeigen |
| `feature/random-placement`     | Zufällige Platzierung            |
| `feature/player-movement`      | Spielerbewegung                  |
| `feature/win-condition`        | Siegbedingung                    |
| `feature/tests`                | Testszenarien                    |
| `feature/final-documentation`  | Dokumentation                    |

### Verwendete Werkzeuge

* Visual Studio Code
* Git
* GitHub
* GCC Compiler
* KI-Unterstützung
