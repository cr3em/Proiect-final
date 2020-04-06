#include "salacinema.h"

SalaCinema::SalaCinema()
{
    for(int i = 0; i < _nrRanduri; ++i) {
        Rand _rand;
        _listaRanduri.push_back(_rand);
    }
    std::cout << std::endl;
}

SalaCinema::~SalaCinema()
{
    // dtor
}

void SalaCinema::Meniu()
{
    _salaCinema.Importa(_listaRanduri);
    _bilet.Importa();

    system("cls");
    unsigned short opt = 1;
    while (opt != 0) {
        std::cout << "***Bine a-ti venit la cinematograf***\n";
        std::cout << "**Alegeti din optiunile de mai jos:**\n\n";
        std::cout << "1. Vinde bilete\n";
        std::cout << "2. Returneaza bilete\n";
        std::cout << "3. Afiseaza situatie locuri libere\n";
        std::cout << "4. Modifica preturile\n";
        std::cout << "5. Afiseaza preturile\n";
        std::cout << "0. Iesire\n";
        std::cin >> opt;
        if(opt < 0 || opt > 5) {
            std::cout << "Optiune incorecta, alegeti din nou\n";
            std::cin >> opt;
        }
        else
            switch (opt) {
            case 1: VindeBilete(); break;
            case 2: ReturneazaBilete(); break;
            case 3: Afiseaza(); break;
            case 4: _bilet.ModificaPret(); break;
            case 5: AfiseazaPret(); break;
            case 0: Iesire(); break;
            }
    }
}

void SalaCinema::VindeBilete()
{
    system("cls");
    short opt = 1;
    while (opt != 0) {
        short _locDisponibil = 0;
        for (unsigned int i = 0; i < _listaRanduri.size(); ++i)
        {
            _listaRanduri[i].VerificaScaun(_locDisponibil);
        }
        if (_locDisponibil == 0)
        {
            std::cout << "Ne pare rau, nu mai avem locuri disponibile\n";
            opt = 0;
        }
        std::cout << std::endl;
        Afiseaza();

        short _nrBilete;
        std::cout << "Introduceti numarul de bilete dorite: ";
        std::cin >> _nrBilete;

        if(_nrBilete > _locDisponibil) {
            char _raspuns;
            std::cout << "Mai avem doar " << _locDisponibil << " locuri libere\n";
            std::cout << "Continuati? (d/n)\n";
            std::cin >> _raspuns;
            system("cls");
            if(_raspuns == 'd')
                continue;
            else
                break;
        }

        system("cls");
        short selRand, _selLoc;
        std::cout << "Introduceti randul dorit: ";
        std::cin >> selRand;

        system("CLS");
        std::cout << "Introduceti locul dorit: ";
        std::cin >> _selLoc;

        _listaRanduri[selRand-1].ScaunOcupat(_nrBilete, _selLoc-1);

        system("cls");
        std::cout << "Precizati categoria biletelor\n";
        std::cout << "1) Pret intreg " << _bilet.getIntreg() << " lei\n";
        std::cout << "2) Pret intreg cu ochelari 3d " << _bilet.getIntreg3d() << " lei\n";
        std::cout << "3) Pret redus " << _bilet.getRedus() << " lei\n";
        std::cout << "4) Pret redus cu ocheari 3d " << _bilet.getRedus3d() << " lei\n";
        std::cout << "0). Revenire la meniul anterior.\n";
        std::cout << std::endl;
        std::cout << "Introduceti optiunea dorita\n";
        short _optPret = 0, _totalPlata = 0;
        std::cin >> _optPret;

        switch (_optPret) {
        case 1:
            system("CLS");
            _totalPlata = _nrBilete * _bilet.getIntreg();
            std::cout << "Total de plata: " << _totalPlata << " lei" << std::endl;
            break;
        case 2:
            system("CLS");
            _totalPlata = _nrBilete * _bilet.getIntreg3d();
            std::cout << "Total de plata: " << _totalPlata << " lei" << std::endl;
            break;
        case 3:
            system("CLS");
            _totalPlata = _nrBilete * _bilet.getRedus();
            std::cout << "Total de plata: " << _totalPlata << " lei" << std::endl;
            break;
        case 4:
            system("CLS");
            _totalPlata = _nrBilete * _bilet.getRedus3d();
            std::cout << "Total de plata: " << _totalPlata << " lei" << std::endl;
            break;
        case 0:
            break;
        }
        system("pause");
        system("cls");
        _listaRanduri[selRand-1].SelectScaun(_nrBilete, _selLoc-1, _optPret);
        _salaCinema.Exporta(_listaRanduri);
        opt = 0;
    }
}

void SalaCinema::ReturneazaBilete()
{
    system("cls");

    short _nrRand, _nrLoc, _nrBilete, _returBani = 0;

    std::cout << "Introduceti randul: ";
    std::cin >> _nrRand;

    while (_nrRand < 0 || _nrRand > 19) {
        std::cout << "Rand incorect, introduceti din nou: ";
        std::cin >> _nrRand;
    }
    system("cls");
    std::cout << "Introduceti numarul de bilete returnate: ";
    std::cin >> _nrBilete;
    system("cls");
    std::cout << "Introduceti numarul primului loc: ";
    std::cin >> _nrLoc;
    system("cls");

    _listaRanduri[_nrRand-1].ReturBilete( _returBani, _nrLoc-1, _nrBilete);

    _salaCinema.Exporta(_listaRanduri);
}

void SalaCinema::Afiseaza()
{
    system("cls");
    std::ifstream _afiseazaSala;
    _afiseazaSala.open("SalaCinema.txt");

    std::cout << "\t\t*** Ecran ***\n\n";
    for(unsigned short i = 0; i < _listaRanduri.size(); ++i)
    {
        _afiseazaSala >> _listaRanduri[i];
        std::cout  << "Rand " << i+1 << ") " << _listaRanduri[i];
    }
    _afiseazaSala.close();

    short _situatieLocuri = 0;
    for(unsigned short i = 0; i < _listaRanduri.size(); ++i)
    {
        _listaRanduri[i].VerificaScaun(_situatieLocuri);
    }
    std::cout << std::endl;
    std::cout << "Mai avem " << _situatieLocuri << " locuri libere\n\n";

    system("pause");
    system("cls");
}

void SalaCinema::AfiseazaPret()
{
    system("cls");
    std::cout << "Pret intreg " << _bilet.getIntreg() << " lei" << std::endl;
    std::cout << "Pret intreg 3D " << _bilet.getIntreg3d() << " lei" << std::endl;
    std::cout << "Pret redus " << _bilet.getRedus() << " lei" << std::endl;
    std::cout << "Pret redus 3D " << _bilet.getRedus3d() << " lei" << std::endl;
    system("pause");
    system("cls");
}
void SalaCinema::Iesire()
{
    system("cls");
    std::ofstream _out("ListaPreturi.txt");
    _bilet.Exporta(_out);
}

