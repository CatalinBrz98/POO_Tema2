#include "Capitala.h"
Capitala::Capitala() : Oras()
{
    numePrefect=NULL;
}
Capitala::Capitala(char *nume, long int l, int b, char *numeP) : Oras(nume,l,b)
{
    numePrefect=new char[strlen(numeP)+1];
    strcpy(numePrefect,numeP);
}
Capitala::Capitala(const Capitala &C2) : Oras(C2)
{
    numePrefect=new char[strlen(C2.numePrefect)];
    strcpy(numePrefect,C2.numePrefect);
}
Capitala::~Capitala()
{
    if(denumire!=NULL)
        delete[] denumire;
    if(numePrefect!=NULL)
        delete[] numePrefect;
}
std::istream& operator >> (std::istream &input,Capitala &a)
{
    char nume[100],numeP[100];
    long int l;
    int b;
    input>>nume>>l>>b>>numeP;
    if(a.denumire!=NULL)
        delete[] a.denumire;
    a.denumire=new char[strlen(nume)];
    strcpy(a.denumire,nume);
    if(a.numePrefect!=NULL)
        delete[] a.numePrefect;
    a.numePrefect=new char[strlen(numeP)];
    strcpy(a.numePrefect,numeP);
    a.cod=++(Localitate::a);
    a.nr_locuitori=l;
    a.nrBlocuri=b;
    return input;
}
std::ostream& operator << (std::ostream &output,Capitala &a)
{
    return a.display(output);
}
std::ostream& Capitala::display(std::ostream &output)
{
    if(denumire==NULL)
        return output;
    output<<"Nume: "<<denumire<<std::endl<<"Nr.Locuitori: "<<nr_locuitori<<std::endl<<"Nr.Blocuri: "<<nrBlocuri<<std::endl<<"Numele Prefectului: "<<numePrefect<<std::endl<<"Cod: "<<cod<<std::endl;
    return output;
}
