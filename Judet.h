#ifndef Judet_H
#define Judet_H
#include "Capitala.h"
class Judet{
private:
    Localitate *p;
    int nrLoc;
protected:
public:
    Judet();
    Judet(int n);
    Judet(const Judet &J2);
    ~Judet();
    friend std::istream& operator >> (std::istream &input,Judet &a);
    friend std::ostream& operator << (std::ostream &output,Judet &a);
    std::ostream& display(std::ostream &output);
};
#endif
