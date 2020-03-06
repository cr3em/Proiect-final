#include "bilete.h"

Bilete::Bilete()
{
    // ctor
}

Bilete::~Bilete()
{
    // dtor
}

void Bilete::setIntreg(unsigned short _set)
{
    _pretIntreg = _set;
}
void Bilete::setIntreg3d(unsigned short _set)
{
    _pretRedus3d = _set;
}
void Bilete::setRedus(unsigned short _set)
{
    _pretRedus  = _set;
}
void Bilete::setRedus3d(unsigned short _set)
{
    _pretRedus3d = _set;
}

void Bilete::ModificaPret() {
    system("cls");
    unsigned short opt = 1, _pretNou = 0;
    while(opt) {
        std::cout << "1. Modificati pret intreg\n";
        std::cout << "2. Modificati pret intreg cu ochelari 3D\n";
        std::cout << "3. Modificati pret redus\n";
        std::cout << "4. Modificati pret redus cu ochelari 3D\n";
        std::cout << "0. Revenire la meniul anterior\n";
        std::cin >> opt;
        while(opt < 0 || opt > 4) {
            std::cout << "Optiune incorecta, alegeti din nou\n";
            std::cin >> opt;
        }
        switch (opt) {
        case 1: std::cout << "Introduceti noua valoare pentru " << getIntreg() << " \n";
            std::cin >> _pretNou;
            while(_pretNou > 0) {
                setIntreg(_pretNou);
                break;
            }
            system("cls");
            break;
        case 2: std::cout << "Introduceti noua valoare pentru " << getIntreg3d() << " \n";
            std::cin >> _pretNou;
            while(_pretNou > 0){
                setIntreg3d(_pretNou);
                break;
            }
            system("cls");
            break;
        case 3: std::cout << "Introduceti noua valoare pentru  " << getRedus() << " \n";
            std::cin >> _pretNou;
            while(_pretNou > 0) {
                setRedus(_pretNou);
                break;
            }
            system("cls");
            break;
        case 4: std::cout << "Introduceti noua valoare pentru " << getRedus3d() << " \n";
            std::cin >> _pretNou;
            while(_pretNou > 0) {
                setRedus3d(_pretNou);
                break;
            }
            system("cls");
            break;
        case 0: system("cls"); break;
        }
    }
}
