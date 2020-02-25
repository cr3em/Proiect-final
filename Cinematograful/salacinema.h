#ifndef SALACINEMA_H
#define SALACINEMA_H
#include "rand.h"

class SalaCinema
{
public:
    SalaCinema();
    void AfisareSala();
private:
    std::vector<Rand> _listaRanduri[20];
    unsigned short _nrRand;
};

#endif // SALACINEMA_H
