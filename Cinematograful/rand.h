#ifndef RAND_H
#define RAND_H
#include "scaun.h"

class Rand
{
public:
    Rand();
    bool AfisareRand();
private:
    std::vector<Scaun> _listaScaune[20];
};

#endif // RAND_H
