#ifndef RAND_H
#define RAND_H
#include "scaun.h"
#include "bilete.h"
#include <vector>

class Rand
{
public:
    Rand();
    ~Rand();
    void Afiseaza();
    void SelectScaun(short, short, short);
    void ScaunOcupat(short, short);
    void ReturBilete(short _nrRand, short _nrLoc, short _nrBilete);
    void VerificaScaun(short &);

private:
    unsigned short _nrScaune = 20;
    std::vector<Scaun> _listaScaune;
};

#endif // RAND_H
