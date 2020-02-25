#include "bilete.h"

Bilete::Bilete(TipScaun &_tip)
{
    _pret = _tip;
}

void Bilete::setPret(unsigned short _nouPret)
{
    _pret = _nouPret;
}
