#include "masa.h"
#include <iostream>
#include <cstring>
#include <DateGresite.h>
#include <string>
using namespace std;
masa::masa()
{   this->nrclienti=0;
    this->eocupata=false;
    this->notadeplata=0;
    for(int i=1;i<=13;i++)
    {
       this->clienti[i].valoare_notadeplata =0;
       this->clienti[i].comanda[0]='\0';
    }
}

masa::~masa(){}
masa::masa(const masa& aux):nrclienti(aux.nrclienti),capacitate(aux.capacitate),eocupata(aux.eocupata){
for(int i=1;i<=aux.nrclienti;i++)
    {
        clienti[i].valoare_notadeplata=aux.clienti[i].valoare_notadeplata;
        clienti[i].comanda=aux.clienti[i].comanda;
    }
}
void masa::setcapacitate(int i){ this->capacitate = i;}
void masa::setnrclienti(int x){this->nrclienti= x;}
void masa::setnotadeplata(int x){this->notadeplata=x;}
void masa::seteocupata(bool x){this->eocupata= x;}
void masa::setnotadeplata_client(int i,int x){this->clienti[i].valoare_notadeplata=x;}
void masa::setcomanda(int i,string s){this->clienti[i].comanda+=s;}
int  masa::getnrclienti(){return this->nrclienti;}
int  masa::getcapacitate(){return this->capacitate;}
int  masa::geteocupata(){return this->eocupata;}
int  masa::getnotadeplata_client(int i){return this->clienti[i].valoare_notadeplata;}
string masa::getcomanda_client(int i){
    string a;
    a=this->clienti[i].comanda;
    return a;
}
int masa::getnotadeplata(){return this->notadeplata;}
std::ostream& operator<<(std::ostream& os,  masa& m)
{
    os<<"Masa are "<<m.capacitate<<" locuri \n";
    os<<"La masa sunt in momentul actual "<<m.nrclienti<<" clienti\n";
    if(m.eocupata==0)os<<"Masa nu e ocupata\n";
    else os<<"Masa e ocupata\n_______________________________________________\n";
    for(int i=1;i<=m.nrclienti;i++)
    {
        os<<"Clientul numarul "<<i<<" a comandat urmatoarele: "<<m.clienti[i].comanda<<"\n";
        os<<"El are de achitat suma de "<<m.clienti[i].valoare_notadeplata<<" RON\n";
        os<<"_______________________________________________\n";
    }
return os;
}
std::istream& operator>>(std::istream& is, masa&m)
{
    is>>m.capacitate;
    is>>m.nrclienti;
    is>>m.eocupata;
    if(m.eocupata==0&&m.nrclienti!=0)throw(DateGresite());
    for(int i=1;i<=m.nrclienti;i++)
    {
        is>>m.clienti[i].valoare_notadeplata;
        is>>m.clienti[i].comanda;
    }
    return is;
}
