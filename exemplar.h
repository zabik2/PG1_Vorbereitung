#ifndef EXEMPLAR_H
#define EXEMPLAR_H

#include "buch.h"

class Exemplar : public Buch
{

public:
    Exemplar();
    static int ID_Laufend;
    int ID_Current;
    int getID_Current() const;
};

#endif // EXEMPLAR_H
