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
        std::cout << "1. Modificati pretul intreg\n";
        std::cout << "2. Modificati pretul intreg cu ochelari 3D\n";
        std::cout << "3. Modificati pretul redus\n";
        std::cout << "4. Modificati pretul redus cu ochelari 3D\n";
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
        case 0: system("cls");
            break;
        }
    }
}

void Bilete::Exporta(std::ostream& _export)
{
    _export << "Pret intreg: " << _pretIntreg << " lei\n";
    _export << "Pret intreg 3D: " << _pretIntreg3d << " lei\n";
    _export << "Pret redus: " << _pretRedus << " lei\n";
    _export << "Pret redus 3D: " << _pretRedus3d << " lei\n";
}

void Bilete::Importa()
{
    _inFisier.open("ListaPreturi.txt");
    _inFisier >> _pretIntreg;
    _inFisier >> _pretIntreg3d;
    _inFisier >> _pretRedus;
    _inFisier >> _pretRedus3d;
}
