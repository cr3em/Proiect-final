#ifndef SALACINEMA_H
#define SALACINEMA_H
#include "rand.h"

class SalaCinema
{
public:
    SalaCinema();


private:
    unsigned short _nrRanduri = 20;
    std::vector<Rand> _listaRanduri;
};

#endif // SALACINEMA_H
