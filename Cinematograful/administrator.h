#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "rand.h"
#include "scaun.h"
#include <fstream>

class Administrator
{
public:
    Administrator();
    ~Administrator();
    void Exporta(std::vector<Rand>);
    void Importa(std::vector<Rand>);
private:
    Rand _scaune;
};

#endif // ADMINISTRATOR_H
