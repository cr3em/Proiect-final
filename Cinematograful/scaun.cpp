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

std::ostream& operator <<(std::ostream& out, Scaun& exporta)
{
    out << exporta._loc;
    return out;
}

std::istream& operator >>(std::istream& in, Scaun& importa)
{
    in >> importa._loc;
    return in;
}
