#ifndef SALACINEMA_H
#define SALACINEMA_H
#include "rand.h"
#include "bilete.h"

class SalaCinema
{
public:
    SalaCinema();
    ~SalaCinema();
    void Meniu();
    void VindeBilete();
    void ReturneazaBilete();
    void Afiseaza();
    void Iesire();  
private:
    unsigned short _nrRanduri = 20;
    std::vector<Rand> _listaRanduri;
    Bilete _bilet;
};

#endif // SALACINEMA_H
