#ifndef Oras_h
#define Oras_h
#include "Localitate.cpp"
class Oras:public Localitate{
private:
protected:
    int nrBlocuri;
public:
    Oras();
    Oras(char *nume, long int l, int b);
    Oras(const Oras &O2);
    ~Oras();
    friend std::istream& operator >> (std::istream &input,Oras &a);
    friend std::ostream& operator << (std::ostream &output,Oras &a);
    std::ostream& display(std::ostream &output);
};
#endif
