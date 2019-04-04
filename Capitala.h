#ifndef Capitala_H
#define Capitala_H
#include "Oras.cpp"
class Capitala:public Oras{
private:
protected:
    char *numePrefect;
public:
    Capitala();
    Capitala(char *nume, long int l, int b, char *numeP);
    Capitala(const Capitala &C2);
    ~Capitala();
    friend std::istream& operator >> (std::istream &input,Capitala &a);
    friend std::ostream& operator << (std::ostream &output,Capitala &a);
    std::ostream& display(std::ostream &output);
};
#endif
