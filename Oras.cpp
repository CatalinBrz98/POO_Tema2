#include "Oras.h"
Oras::Oras() : Localitate()
{
    nrBlocuri=0;
}
Oras::Oras(char *nume, long int l, int b) : Localitate(nume,l)
{
    nrBlocuri=b;
}
Oras::Oras(const Oras &O2) : Localitate(O2)
{
    nrBlocuri=O2.nrBlocuri;
}
Oras::~Oras()
{
    if(denumire!=NULL)
        delete[] denumire;
}
std::istream& operator >> (std::istream &input,Oras &a)
{
    char nume[100];
    long int l;
    int b;
    input>>nume>>l>>b;
    if(a.denumire!=NULL)
        delete[] a.denumire;
    a.denumire=new char[strlen(nume)];
    strcpy(a.denumire,nume);
    a.cod=++(Localitate::a);
    a.nr_locuitori=l;
    a.nrBlocuri=b;
    return input;
}
std::ostream& operator << (std::ostream &output,Oras &a)
{
    return a.display(output);
}
std::ostream& Oras::display(std::ostream &output)
{
    if(denumire==NULL)
        return output;
    output<<"Nume: "<<denumire<<std::endl<<"Nr.Locuitori: "<<nr_locuitori<<std::endl<<"Nr.Blocuri: "<<nrBlocuri<<std::endl<<"Cod: "<<cod<<std::endl;
    return output;
}
