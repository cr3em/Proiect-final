#ifndef BILETE_H
#define BILETE_H
#include <vector>

enum TipScaun{liber = 0, intreg = 30, intreg3D = 32, redus = 20, redus3D = 22};

class Bilete
{
public:
    Bilete(TipScaun &);
    std::vector<unsigned short> getPret() const {return _pret;}
    void setPret(unsigned short);
private:
    std::vector<unsigned short> _pret;

};

#endif // BILETE_H
