#include "functii.h"
#include "scaun.h"

void Meniu() {
    system("cls");
    std::cout << "***Bine a-ti venit la cinematograf***\n";
    std::cout << "***Alegeti din optiunile de mai jos:***\n" << std::endl;
    std::cout << "1. Vinde bilete\n";
    std::cout << "2. Returneaza bilete\n";
    std::cout << "3. Afiseaza situatie locuri libere\n";
    std::cout << "4. Modifica preturile\n";
    std::cout << "0. Iesire\n";
}

void ModificaPret() {
    system("cls");
    unsigned short opt = 0;
    std::cout << "1. Modificati pret intreg\n";
    std::cout << "2. Modificati pret intreg cu ochelari 3D\n";
    std::cout << "3. Modificati pret redus\n";
    std::cout << "4. Modificati pret redus cu ochelari 3D\n";
    std::cout << "0. Revenire la meniul anterior\n";
    switch (opt) {
    case 0: Meniu(); break;
    case 1: Bilete::setPret(intreg);
    case 2:
    case 3:
    case 4:
    }
}
