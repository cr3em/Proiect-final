#include "rand.h"

Rand::Rand()
{
    for(int i = 0; i < _nrScaune; ++i) {
        Scaun _scaun;
        _listaScaune.push_back(_scaun);
    }
}

Rand::~Rand()
{
    // dtor
}

void Rand::Afiseaza()
{
    for (unsigned int i = 0; i < _listaScaune.size(); ++i)
    {
        _listaScaune[i].Afiseaza();
    }
    std::cout << std::endl;
}

void Rand::SelectScaun(short _nrBilete, short _nrLoc, short _pret)
{
    for (int i = 0; i < _nrBilete; i++)
    {
        if (_pret == 1)
            _listaScaune[_nrLoc++].setScaun(1);
        else if (_pret == 2)
            _listaScaune[_nrLoc++].setScaun(2);
        else if (_pret == 3)
            _listaScaune[_nrLoc++].setScaun(3);
        else if (_pret == 4)
            _listaScaune[_nrLoc++].setScaun(4);
    }
    std::cout << std::endl;
}

void Rand::ScaunOcupat(short _nrBilete, short _nrLoc)
{
    for (int i = 0; i < _nrBilete; ++i)
    {
        if (_listaScaune[_nrLoc++].getScaun() != 0 && _nrBilete > _nrLoc)
        {
            int _rest = _nrBilete - _nrLoc;
            std::cout << "Pentru restul de " << _rest << "selectati alt rand";
            std::cin >> _rest;
        }
    }
}

void Rand::ReturBilete(short _returBani, short _nrLoc, short _nrBilete)
{
    short _temp = 1;
    Bilete _pret;

    for(unsigned short i = 0; i < _nrBilete; ++i) {
        if(_listaScaune[_nrLoc].getScaun() == 1) {
            _returBani = _temp * _pret.getIntreg();
            _listaScaune[_nrLoc++].setScaun(0);
            _temp++;
        }
        else if (_listaScaune[_nrLoc].getScaun() == 2) {
            _returBani = _temp * _pret.getIntreg3d();
            _listaScaune[_nrLoc++].setScaun(0);
            _temp++;
        }
        else if (_listaScaune[_nrLoc].getScaun() == 3) {
            _returBani = _temp * _pret.getRedus();
            _listaScaune[_nrLoc++].setScaun(0);
            _temp++;
        }
        else if (_listaScaune[_nrLoc].getScaun() == 4) {
            _returBani = _temp * _pret.getRedus3d();
            _listaScaune[_nrLoc++].setScaun(0);
            _temp++;
        }
    }
    std::cout << "Bani de returnat " << _returBani;
}

void Rand::VerificaScaun(short &x)
{
    for (unsigned int i = 0; i < _listaScaune.size(); ++i)
    {
        if (_listaScaune[i].getScaun() == 0)
        {
            x++;
        }
    }
}
