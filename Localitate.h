#ifndef Localitate_H
#define Localitate_H
#include<iostream>
class Localitate{
private:
protected:
    char *denumire;
    int cod;
    long int nr_locuitori;
public:
    static int a;
    Localitate();
    Localitate(char *nume,long int l);
    Localitate(const Localitate &L2);
    Localitate(const Localitate* &L2);
    ~Localitate();
    friend std::istream& operator >> (std::istream &input,Localitate &a);
    friend std::ostream& operator << (std::ostream &output,Localitate &a);
    virtual std::ostream& display(std::ostream &output);
    Localitate& operator = (const Localitate &L2);
};
#endif
