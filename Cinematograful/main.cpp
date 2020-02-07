#include <iostream>

using namespace std;

void Meniu() {
    system("cls");
    cout << "1. Vinde bilete\n";
    cout << "2. Returneaza bilete\n";
    cout << "3. Afiseaza situatie locuri libere\n";
    cout << "4. Modifica preturile\n";
    cout << "0. Iesire\n";
}



int main()
{
    unsigned short opt = 1;
    while (opt != 0) {
        while (opt > 4) {
            cout << "Optiune gresita, introduceti din nou\n";
            cin >> opt;
        }


    }


    return 0;
}
