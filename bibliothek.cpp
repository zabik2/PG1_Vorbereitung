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
    Buch BuchNeu;
    BuchNeu.ISBN = ISBNname;
    Bibliothek::BuchTitel.push_back(BuchNeu);
    for (int i = 0; i < Exemplare; i++){

        Exemplar ExemaplarAdded;
        ExemaplarAdded.ISBN = ISBNname;
        ExemaplarAdded.ID_Current = Exemplar::ID_Laufend;

        Bibliothek::Bücher.push_back(ExemaplarAdded);
        BuchNeu.Exemplarcounter++;

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

void Bibliothek::AddExemplar()
{
    string ISBNname;
    int Size = Bücher.size();
    bool Signed = false;

    cout << "Geben Sie die ISBN ein " << endl;
    cin >> ISBNname;

    if (Bibliothek::AktuellBücher + 1 < Bibliothek::MaxBücher){
    Bibliothek::AktuellBücher += 1;

    for (int i = 0; i < Size; i++){
        if (ISBNname == BuchTitel[i].ISBN){
            Exemplar ExemaplarAdded;
            ExemaplarAdded.ISBN = ISBNname;
            ExemaplarAdded.ID_Current = Exemplar::ID_Laufend;

            Bibliothek::Bücher.push_back(ExemaplarAdded);
            Signed = true;
            // Fehlt Exemplarcounter++
        }
    }

    if (Signed == false){

        Buch BuchNeu;
        BuchNeu.ISBN = ISBNname;
        Bibliothek::BuchTitel.push_back(BuchNeu);
        Exemplar ExemaplarAdded;
        ExemaplarAdded.ISBN = ISBNname;
        ExemaplarAdded.ID_Current = Exemplar::ID_Laufend;

        BuchNeu.Exemplarcounter++;

        Bibliothek::Bücher.push_back(ExemaplarAdded);
    }

        Exemplar::ID_Laufend++;
    }
    else
        cout << "Bibliothek bereits voll. Diese Anzahl an Exemplaren kann nicht hinzugefügt werden." << endl;
}

void Bibliothek::DeleteExemplar()
{
    int IDEingabe;
    int Size = Bücher.size();

    cout << "ID eingeben " << endl;
    cin >> IDEingabe;

    for (int i = 0; i < Size; i++){
        if (IDEingabe == Bücher.at(i).getID_Current()){
            Bücher.erase(Bücher.begin() + i);

        }
    }
}
