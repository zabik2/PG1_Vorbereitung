#include "bibliothek.h"

Bibliothek::Bibliothek()
{

}

int Exemplar::ID_Laufend = 1;

void Bibliothek::AddBuch()
{
    string ISBNname;
    int Exemplare;


    cout << "Geben Sie die ISBN ein " << endl;
    cin >> ISBNname;
    cout << "Geben Sie die Anzahl der Exemplare ein " << endl;
    cin >> Exemplare;
    if (Bibliothek::AktuellBücher + Exemplare < Bibliothek::MaxBücher){
    Bibliothek::AktuellBücher += Exemplare;
    for (int i = 0; i < Exemplare; i++){

        Exemplar ExemaplarAdded;
        ExemaplarAdded.ISBN = ISBNname;
        ExemaplarAdded.ID_Current = Exemplar::ID_Laufend;

        Bibliothek::Bücher.push_back(ExemaplarAdded);

        Exemplar::ID_Laufend++;


        }
    }
    else
        cout << "Bibliothek bereits voll. Diese Anzahl an Exemplaren kann nicht hinzugefügt werden." << endl;
}

void Bibliothek::Ausgeben()
{
    int Size = Bücher.size();
    for (int i = 0; i < Size; i++){
        cout << "Das Buch mit der ISBN " << Bücher[i].ISBN << " und ihr ID ";
        cout << Bücher[i].ID_Current << endl;
    }
}
