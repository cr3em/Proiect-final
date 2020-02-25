#ifndef SCAUN_H
#define SCAUN_H
#include <iostream>
#include "bilete.h"


class Scaun
{
public:
    Scaun();
    bool Afisare();

private:
    unsigned short _nrLoc;
    Bilete _tipBilet;
};

#endif // SCAUN_H
