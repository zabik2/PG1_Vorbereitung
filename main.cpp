#include "menu.h"
#include "bibliothek.h"
#include "buch.h"
#include "exemplar.h"




int main()
{
    char control;

    Bibliothek Bibliothek1;

    menu();
    cin >> control;

    while (control == 'b' or control == 'a' or control == 'e' or control == 'l' or control == 'k'){
        system ("cls");
        switch (control){
        case 'b':{
            Bibliothek1.AddBuch();
            break;
        }
        case 'a':{
            Bibliothek1.Ausgeben();
            break;
        }
        case 'e':{
            Bibliothek1.AddExemplar();
            break;
        }
        case 'l':{
            Bibliothek1.DeleteExemplar();
            break;
        }
        case 'k':{
            Bibliothek1.Ausleihen();
            break;
        }
        default:
            cout << "something went wrong" << endl;
            break;
        }
        menu();
        cin >> control;


    }





}
