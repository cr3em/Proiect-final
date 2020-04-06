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
    void ReturBilete(short, short, short);
    void VerificaScaun(short &);

    friend std::ostream& operator <<(std::ostream& out, Rand& exporta);  // overload operators
    friend std::istream& operator >>(std::istream& in, Rand& importa);

private:
    unsigned short _nrScaune = 20;
    std::vector<Scaun> _listaScaune;
};

#endif // RAND_H
