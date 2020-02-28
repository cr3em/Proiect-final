#include "rand.h"

Rand::Rand()
{
    for(int i = 0; i < _nrScaune; ++i) {
        Scaun _scaun;
        _listaScaune.push_back(_scaun);
    }
}

void Rand::Afiseaza()
{
    for (unsigned int i = 0; i < _listaScaune.size(); i++)
    {
        std::cout << &_listaScaune[i] << " ";
    }
}
