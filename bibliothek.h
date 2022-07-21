#ifndef BIBLIOTHEK_H
#define BIBLIOTHEK_H

#include "menu.h"
#include "exemplar.h"


class Bibliothek
{
    const int MaxBücher = 10;
    int AktuellBücher = 0;
    vector <Exemplar> Bücher;
    vector <Buch> BuchTitel;
public:
    Bibliothek();
    void AddBuch();
    void Ausgeben();
    void AddExemplar();
    void DeleteExemplar();


};

#endif // BIBLIOTHEK_H
