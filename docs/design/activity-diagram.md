# UML-Aktivitätsdiagramm

```mermaid
flowchart TD
    A([Start]) --> B[Zufallsgenerator initialisieren]
    B --> C[Leeres 10x10 Labyrinth erstellen]
    C --> D[Spieler zufällig platzieren]
    D --> E[Schatz zufällig platzieren]
    E --> F[Hindernisse zufällig platzieren]
    F --> G[Labyrinth anzeigen]
    G --> H[Benutzereingabe lesen]

    H --> I{Eingabe = Q?}
    I -->|Ja| J[Spiel beenden]
    J --> K([Ende])

    I -->|Nein| L{Eingabe W/A/S/D?}
    L -->|Nein| M[Ungültige Eingabe anzeigen]
    M --> G

    L -->|Ja| N[Neue Spielerposition berechnen]
    N --> O{Bewegung gültig?}

    O -->|Nein| P[Ungültige Bewegung anzeigen]
    P --> G

    O -->|Ja| Q[Spieler bewegen]
    Q --> R{Schatz gefunden?}

    R -->|Ja| S[Siegmeldung anzeigen]
    S --> K

    R -->|Nein| G
```

Erklärung

Das Aktivitätsdiagramm zeigt den Ablauf des Labyrinth-Spiels. Zuerst wird das Spielfeld vorbereitet, danach werden Spieler, Schatz und Hindernisse zufällig platziert.

Anschliessend beginnt die Spielschleife. In dieser Schleife wird das Labyrinth angezeigt und eine Eingabe des Spielers gelesen. Gibt der Spieler Q ein, wird das Spiel beendet. Bei W, A, S oder D wird eine neue Position berechnet.

Vor der Bewegung wird geprüft, ob die neue Position gültig ist. Bewegungen ausserhalb des Spielfelds oder auf Hindernisse werden abgelehnt. Nach einer gültigen Bewegung wird geprüft, ob der Spieler den Schatz erreicht hat. Falls ja, endet das Spiel mit einer Siegmeldung.