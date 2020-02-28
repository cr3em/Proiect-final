#ifndef RAND_H
#define RAND_H
#include "scaun.h"
#include <vector>

class Rand
{
public:
    Rand();
    void Afiseaza();

private:
    unsigned short _nrScaune = 20;
    std::vector<Scaun> _listaScaune;
};

#endif // RAND_H
