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
        std::cout << _listaScaune[i] << " ";
    }
    std::cout << std::endl;
}

void Rand::SelectScaun(short _nrBilete, short _nrLoc, short _tipBilet)
{
    for (int i = 0; i < _nrBilete; ++i)
    {
        if (_tipBilet == 1)
            _listaScaune[_nrLoc++].setScaun(1);
        else if (_tipBilet == 2)
            _listaScaune[_nrLoc++].setScaun(2);
        else if (_tipBilet == 3)
            _listaScaune[_nrLoc++].setScaun(3);
        else if (_tipBilet == 4)
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
            std::cout << "Pentru restul de " << _rest << "selectati alt rand\n";
            std::cin >> _rest;
        }
    }
}

void Rand::ReturBilete(short _returBani, short _nrLoc, short _nrBilete)
{
    Bilete _pret;
    for(unsigned short i = 0; i < _nrBilete; ++i) {
        if (_listaScaune[_nrLoc].getScaun() == 0)
        {
            std::cout << "Locul introdus este liber\n";
            break;
        }
        else if(_listaScaune[_nrLoc].getScaun() == 1) {
            _returBani = _returBani + _pret.getIntreg();
            _listaScaune[_nrLoc++].setScaun(0);
        }
        else if (_listaScaune[_nrLoc].getScaun() == 2) {
            _returBani = _returBani + _pret.getIntreg3d();
            _listaScaune[_nrLoc++].setScaun(0);
        }
        else if (_listaScaune[_nrLoc].getScaun() == 3) {
            _returBani = _returBani + _pret.getRedus();
            _listaScaune[_nrLoc++].setScaun(0);
        }
        else if (_listaScaune[_nrLoc].getScaun() == 4) {
            _returBani = _returBani + _pret.getRedus3d();
            _listaScaune[_nrLoc++].setScaun(0);
        }
    }
    std::cout << "Bani de returnat: " << _returBani << " lei" << std::endl;
    system("pause");
    system("cls");
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

std::ostream& operator <<(std::ostream & out, Rand& exporta)
{
    for (unsigned short i = 0; i < exporta._listaScaune.size(); ++i)
    {
        out << exporta._listaScaune[i] << " ";
    }
    out << std::endl;
    return out;
}

std::istream& operator >>(std::istream & in, Rand& importa)
{
    for (unsigned short i = 0; i < importa._listaScaune.size(); i++)
    {
        in >> importa._listaScaune[i];
    }
    return in;
}
