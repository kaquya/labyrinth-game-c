# Datenstrukturen

## Spielfeld

Das Labyrinth wird als zweidimensionales Array gespeichert:

```c
char labyrinth[10][10];
```

Jedes Feld enthält ein Zeichen, das den Zustand dieses Feldes beschreibt.

## Zeichen im Spielfeld

| Zeichen | Bedeutung   |
| ------- | ----------- |
| `.`     | leeres Feld |
| `P`     | Spieler     |
| `T`     | Schatz      |
| `O`     | Hindernis   |

## Position

Für Spieler und Schatz wird eine eigene Struktur verwendet:

```c
typedef struct {
    int row;
    int col;
} Position;
```

## Begründung

Ein zweidimensionales Array eignet sich gut, weil das Labyrinth aus Zeilen und Spalten besteht. Dadurch kann jedes Feld direkt über seine Koordinaten angesprochen werden.

Die Struktur `Position` macht den Code lesbarer, weil Zeile und Spalte gemeinsam gespeichert werden. Dadurch müssen Positionen nicht als zwei einzelne Variablen weitergegeben werden.
