#include "bilete.h"

Bilete::Bilete()
{
    // ctor
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

void ModificaPret() {
    system("cls");
    unsigned short opt = 0;
    std::cout << "1. Modificati pret intreg\n";
    std::cout << "2. Modificati pret intreg cu ochelari 3D\n";
    std::cout << "3. Modificati pret redus\n";
    std::cout << "4. Modificati pret redus cu ochelari 3D\n";
    std::cout << "0. Revenire la meniul anterior\n";

}
