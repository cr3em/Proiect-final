#ifndef SALACINEMA_H
#define SALACINEMA_H
#include "rand.h"
#include "administrator.h"

class SalaCinema
{
public:
    SalaCinema();
    ~SalaCinema();
    void Meniu();
    void VindeBilete();
    void ReturneazaBilete();
    void Afiseaza();
    void AfiseazaPret();
    void Iesire();
private:
    unsigned short _nrRanduri = 20;
    std::vector<Rand> _listaRanduri;
    Bilete _bilet;
    Rand _rand;
    Scaun _scaun;
    Administrator _salaCinema;
};

#endif // SALACINEMA_H
