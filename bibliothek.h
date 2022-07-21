#ifndef BIBLIOTHEK_H
#define BIBLIOTHEK_H

#include "menu.h"
#include "exemplar.h"


class Bibliothek
{
    const int MaxBücher = 10;
    int AktuellBücher;
    vector <Exemplar> Bücher;
public:
    Bibliothek();
    void AddBuch();
    void Ausgeben();


};

#endif // BIBLIOTHEK_H
