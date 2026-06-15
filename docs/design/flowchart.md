# Flowchart / Programmablauf

## Ablauf des Spiels

```txt
Start
  |
  v
Zufallsgenerator initialisieren
  |
  v
Leeres Labyrinth erstellen
  |
  v
Spieler zufällig platzieren
  |
  v
Schatz zufällig platzieren
  |
  v
Hindernisse zufällig platzieren
  |
  v
Labyrinth anzeigen
  |
  v
Eingabe lesen
  |
  v
Ist Eingabe Q?
  |--- Ja ---> Spiel beenden
  |
  Nein
  |
  v
Bewegung prüfen
  |
  v
Ist Bewegung gültig?
  |--- Nein ---> Fehlermeldung anzeigen
  |
  Ja
  |
  v
Spieler bewegen
  |
  v
Hat Spieler Schatz gefunden?
  |--- Ja ---> Siegmeldung anzeigen und Spiel beenden
  |
  Nein
  |
  v
Labyrinth erneut anzeigen
  |
  v
Zurück zur Eingabe
```

## Erklärung

Der Ablauf beginnt mit der Initialisierung des Spiels. Danach wird das Spielfeld erstellt und mit Spieler, Schatz und Hindernissen gefüllt.

Während das Spiel läuft, wird nach jeder Eingabe geprüft, ob die Bewegung gültig ist. Ungültige Bewegungen führen zu keiner Positionsänderung. Nach jeder gültigen Bewegung wird geprüft, ob der Spieler den Schatz gefunden hat.
