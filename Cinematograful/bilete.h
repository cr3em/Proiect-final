#ifndef BILETE_H
#define BILETE_H
#include <iostream>
#include <fstream>

class Bilete
{
public:
    Bilete();
    ~Bilete();

    unsigned short getIntreg() {return _pretIntreg;}
    unsigned short getIntreg3d() {return _pretIntreg3d;}
    unsigned short getRedus() {return _pretRedus;}
    unsigned short getRedus3d() {return _pretRedus3d;}

    void setIntreg(unsigned short _set);
    void setIntreg3d(unsigned short _set);
    void setRedus(unsigned short _set);
    void setRedus3d(unsigned short _set);

    void ModificaPret();

    void Exporta(std::ostream&);
    void Importa();
private:
    std::ifstream _inFisier;
    unsigned short _pretIntreg = 30;
    unsigned short _pretIntreg3d = 32;
    unsigned short _pretRedus = 20;
    unsigned short _pretRedus3d = 22;
};

#endif // BILETE_H
