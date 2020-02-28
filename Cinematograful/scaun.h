#ifndef SCAUN_H
#define SCAUN_H
#include <iostream>

class Scaun
{
public:
    Scaun();
    // getter
    unsigned short getScaun() {return _nrLoc;}
    // setter
    void setScaun(unsigned short _set);

private:
    unsigned short _nrLoc = 0;
};

#endif // SCAUN_H
