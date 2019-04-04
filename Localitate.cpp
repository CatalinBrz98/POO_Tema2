#include "Localitate.h"
#include<string.h>
int Localitate::a=0;
Localitate::Localitate()
{
    denumire=NULL;
    nr_locuitori=cod=0;
}
Localitate::Localitate(char *nume,long int l)
{
    denumire=new char[strlen(nume)];
    strcpy(denumire,nume);
    cod=++a;
    nr_locuitori=l;
}
Localitate::Localitate(const Localitate &L2)
{
    denumire=new char[strlen(L2.denumire)];
    strcpy(denumire,L2.denumire);
    cod=L2.cod;
    nr_locuitori=L2.nr_locuitori;
}
Localitate::Localitate(const Localitate* &L2)
{
    denumire=new char[strlen(L2->denumire)];
    strcpy(denumire,L2->denumire);
    cod=L2->cod;
    nr_locuitori=L2->nr_locuitori;
}
Localitate::~Localitate()
{
    if(denumire!=NULL)
        delete[] denumire;
}
std::istream& operator >> (std::istream &input,Localitate &a)
{
    char nume[100];
    long int l;
    input>>nume>>l;
    if(a.denumire!=NULL)
        delete[] a.denumire;
    a.denumire=new char[strlen(nume)];
    strcpy(a.denumire,nume);
    a.cod=++(Localitate::a);
    a.nr_locuitori=l;
    return input;
}
std::ostream& operator << (std::ostream &output,Localitate &a)
{
    return a.display(output);
}
std::ostream& Localitate::display(std::ostream &output)
{
    if(denumire==NULL)
        return output;
    output<<"Nume: "<<denumire<<std::endl<<"Nr.Locuitori: "<<nr_locuitori<<std::endl<<"Cod: "<<cod<<std::endl;
    return output;
}
Localitate& Localitate::operator = (const Localitate &L2)
{
    if(this!=&L2)
    {
        cod=L2.cod;
        nr_locuitori=L2.nr_locuitori;
        delete[] denumire;
        denumire=new char[strlen(L2.denumire)];
        strcpy(denumire,L2.denumire);
    }
    return *this;
}
