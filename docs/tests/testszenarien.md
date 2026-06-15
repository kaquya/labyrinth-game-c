# Testszenarien

## Test 1: Spielfeld wird angezeigt

**Beschreibung:**  
Das Programm wird gestartet.

**Eingabe:**  
Programmstart

**Erwartetes Ergebnis:**  
Ein 10x10 Labyrinth wird angezeigt.

**Tatsächliches Ergebnis:**  
Bestanden.

---

## Test 2: Spieler bewegt sich gültig

**Beschreibung:**  
Der Spieler bewegt sich auf ein freies Feld.

**Eingabe:**  
W, A, S oder D

**Erwartetes Ergebnis:**  
Der Spieler wird um ein Feld bewegt und das Spielfeld wird neu angezeigt.

**Tatsächliches Ergebnis:**  
Bestanden.

---

## Test 3: Bewegung gegen Hindernis

**Beschreibung:**  
Der Spieler versucht, auf ein Hindernis zu laufen.

**Eingabe:**  
Richtung zu einem Feld mit `O`

**Erwartetes Ergebnis:**  
Die Bewegung wird blockiert und eine Fehlermeldung erscheint.

**Tatsächliches Ergebnis:**  
Bestanden.

---

## Test 4: Bewegung ausserhalb des Spielfelds

**Beschreibung:**  
Der Spieler versucht, das Spielfeld zu verlassen.

**Eingabe:**  
Richtung über den Rand hinaus

**Erwartetes Ergebnis:**  
Die Bewegung wird blockiert und eine Fehlermeldung erscheint.

**Tatsächliches Ergebnis:**  
Bestanden.

---

## Test 5: Schatz wird gefunden

**Beschreibung:**  
Der Spieler bewegt sich auf das Schatzfeld.

**Eingabe:**  
Bewegung auf `T`

**Erwartetes Ergebnis:**  
Das Spiel endet mit einer Siegesmeldung.

**Tatsächliches Ergebnis:**  
Bestanden.