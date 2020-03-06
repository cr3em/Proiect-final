#include "scaun.h"

Scaun::Scaun() : _loc(0) {} // ctor

Scaun::~Scaun()
{
    // dtor
}

void Scaun::setScaun(unsigned short _set)
{
    _loc = _set;
}

void Scaun::Afiseaza()
{
    std::cout << _loc << " ";
}
