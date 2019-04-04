#include "Judet.h"
Judet::Judet()
{
    p=NULL;
    nrLoc=0;
}
Judet::Judet(int n)
{
    p=new Localitate[n];
    nrLoc=n;
}
Judet::Judet(const Judet &C2)
{
    nrLoc=C2.nrLoc;
    p=new Localitate[nrLoc];
    for(int i=0;i<nrLoc;i++)
        p[i]=C2.p[i];
}
Judet::~Judet()
{
    if(p!=NULL)
        delete[] p;
}
std::istream& operator >> (std::istream &input,Judet &a)
{
    input>>a.nrLoc;
    if(a.p!=NULL)
        delete[] a.p;
    a.p=new Localitate[a.nrLoc];
    for(int i=0;i<a.nrLoc;i++)
        input>>a.p[i];
}
std::ostream& operator << (std::ostream &output,Judet &a)
{
    output<<"Nr. Localitati din Judet: "<<a.nrLoc<<std::endl<<"Localitatile:"<<std::endl;
    for(int i=0;i<a.nrLoc;i++)
        output<<a.p[i];
    return output;
}
