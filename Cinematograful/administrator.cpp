#include "administrator.h"

Administrator::Administrator()
{
    // ctor
}

Administrator::~Administrator()
{
    // dtor
}

void Administrator::Exporta(std::vector<Rand> _fisier)
{
    std::ofstream exporta("SalaCinema.txt");
    for (unsigned short i = 0; i < _fisier.size(); ++i)
    {
        exporta << _fisier[i];
    }
}

void Administrator::Importa(std::vector<Rand> _fisier)
{
    std::ifstream importa("SalaCinema.txt");
    for (unsigned short i = 0; i < _fisier.size(); ++i)
    {
        importa >> _fisier[i];
    }
}
