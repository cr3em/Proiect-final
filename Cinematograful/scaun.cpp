#include "scaun.h"

Scaun::Scaun()
{

}

bool Scaun::Afisare()
{
    switch (_tip) {
    case liber: std::cout << "L "; return true; break;
    case intreg: std::cout << "PI "; return false; break;
    case intreg3D: std::cout << "PI3D ";return false; break;
    case redus: std::cout << "PR "; return false; break;
    case redus3D: std::cout<< "PR3D "; return false; break;
    }
}
