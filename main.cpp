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

    while (control == 'b' or control == 'a'){
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
        default:
            cout << "something went wrong" << endl;
            break;
        }
        menu();
        cin >> control;


    }





}
