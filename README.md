# Labyrinth Game C

Praxisarbeit Programmiertechnik A & B

## Beschreibung

Dieses Projekt ist ein textbasiertes Konsolenspiel in der Programmiersprache C.

Der Spieler bewegt sich durch ein zufällig generiertes Labyrinth und sucht einen Schatz. Das Spielfeld wird in der Konsole dargestellt.

## Spielzeichen

| Zeichen | Bedeutung   |
| ------- | ----------- |
| P       | Spieler     |
| T       | Schatz      |
| O       | Hindernis   |
| .       | Leeres Feld |

## Steuerung

| Taste | Aktion              |
| ----- | ------------------- |
| W     | Nach oben bewegen   |
| A     | Nach links bewegen  |
| S     | Nach unten bewegen  |
| D     | Nach rechts bewegen |
| Q     | Spiel beenden       |

## Kompilieren

```
gcc src/main.c -o labyrinth
```

## Starten

Windows:

```
.\labyrinth.exe
```

Linux:

```
./labyrinth
```

## Projektstruktur

```
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

## Verwendete Technologien

* C
* GCC
* Git
* GitHub

## Autor

Lukas Zumwald
