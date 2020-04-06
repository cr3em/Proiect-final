#ifndef SCAUN_H
#define SCAUN_H
#include <iostream>

class Scaun
{
public:
    Scaun();
    ~Scaun();
    unsigned short getScaun() {return _loc;}
    void setScaun(unsigned short _set);

    friend std::ostream& operator <<(std::ostream& out, Scaun& exporta);  // overload operators
    friend std::istream& operator >>(std::istream& in, Scaun& importa);

private:
    unsigned short _loc;

};

#endif // SCAUN_H
