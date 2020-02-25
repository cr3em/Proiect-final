#include <iostream>
#include "salacinema.h"
#include "functii.h"
#include <vector>

using namespace std;

int main()
{
    SalaCinema _salaMare;

    unsigned short opt = 1;
    while (opt != 0) {
        Meniu();
        cin >> opt;
        while (opt > 4) {
            cout << "Optiune gresita, introduceti din nou\n";
            cin >> opt;
        }
        if(opt == 1) {
            short _bilete = 0, _nrRand = 0;

            while(/*verifica locuri libere != liber*/) {
                cout << "Ne pare rau. Nu mai sunt locuri libere\n";
                Meniu();
            }
        // sa se afiseze locurile din sala, aratand care sunt libere si care nu
            cout << "Introduceti numarul de bilete dorite\n";
            cin >> _bilete;
            while (_bilete > /*locuri libere*/) {
                cout << "Mai avem doar X locuri libere\n";  // X = numar concret de bilete
            }
            cout << "Introduceti randul dorit\n";
            cin >> _nrRand;
        }

        else if(opt == 2) {
            short nrRand = 0;

            cout << "Introduceti randul\n";
            while(nrRand < 0 || nrRand > 20) {
                cout << "Randul nu corespunde, introduceti din nou (0 - 20)\n";
                cin >> nrRand;
            }
            cout << "Introduceti numarul de bilete returnate\n";

        }


    }




    return 0;
}

