#ifndef SCAUN_H
#define SCAUN_H
#include <iostream>

class Scaun
{
public:
    Scaun();
    ~Scaun();
    // getter
    unsigned short getScaun() {return _loc;}
    // setter
    void setScaun(unsigned short _set);
    void Afiseaza();

private:
    unsigned short _loc;

};

#endif // SCAUN_H
