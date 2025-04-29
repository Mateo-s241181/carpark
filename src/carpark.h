#ifndef CARPARK_H
#define CARPARK_H

#include <string>
#include <vector>

/// Ein Parkhaus soll eine Reihe von Parkdecks enthalten, die wiederum
/// aus einzelnen Parkplätzen bestehen.
struct CarPark {
    // TODO: Definieren Sie die Attribute dieser Klasse.
    //       Implementieren Sie die Methoden in der Datei `carpark.cpp`.

    // Genauere Anforderungen:
    // - Die einzelnen Parkplätze haben jeweils eine ID,
    //   wobei diese ein beliebiger String sein kann.
    // - Für jede ID soll gespeichert werden,
    //   ob der Platz frei oder besetzt ist.

    /// Konstruktor: Erwartet eine Liste von Listen von IDs.
    /// Dabei steht jede Liste für eines der Parkdecks.
    /// Initialisiert die internen Datenstrukturen, so dass all diese IDs existieren
    /// und die Plätze als frei gelten.
    CarPark(std::vector<std::vector<std::string>> const& ids);

    /// Erwartet die Nummer eines Parkdecks und eine ID.
    /// Liefert true, falls das Parkdeck einen Platz mit der ID hat.
    bool hasId(size_t deck_no, std::string const& id);

    /// Erwartet eine Parkplatz-ID und liefert true, falls dieser Platz besetzt ist.
    /// Liefert auch true, falls der Platz nicht existiert.
    bool isOccupied(std::string const& id);

    /// Liefert die Gesamt-Anzahl der freien Parkplätze im Parkhaus.
    size_t vacant();

    /// Liefert die Gesamt-Anzahl der besetzten Parkplätze im Parkhaus.
    size_t occupied();

    /// Liefert die Gesamt-Anzahl der Parkplätze im Parkhaus.
    size_t size();

    /// Liefert den Preis für einen Parkplatz.
    /// Der erste Parkplatz ist kostenlos,
    /// für jeden besetzten Platz steigt der Preis um 1.
    int parkingFee();
};

#endif
