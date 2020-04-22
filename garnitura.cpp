#include "garnitura.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
    garnitura::garnitura()
{
 this->unitate=1;
}

    garnitura::~garnitura()
{
}
    garnitura::garnitura(const garnitura& aux): produs(aux), unitate(aux.unitate){}

int garnitura::getunitate_garnitura(){return this->unitate;}
void garnitura::set_pretpeunitate_garnitura(int pret){
    this->set_pretpeunitate(pret);
}
int garnitura::get_pretpeunitate_garnitura()
{
    return this->get_pretpeunitate();
}
void garnitura::comanda_cartofiprajiti(int i,int j,masa m[])
{
    int x=(this->getunitate_garnitura())*(this->get_pretpeunitate_garnitura());//nota de plata a mesei
    int y=(this->getunitate_garnitura())*(this->get_pretpeunitate_garnitura());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Garnitura - cartofi prajiti\n");
}
void garnitura::comanda_cartofipiure(int i,int j,masa m[])
{
    int x=(this->getunitate_garnitura())*(this->get_pretpeunitate_garnitura());//nota de plata a mesei
    int y=(this->getunitate_garnitura())*(this->get_pretpeunitate_garnitura());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Garnitura-  cartofi piure\n");
}
void garnitura::comanda_orezsarbesc(int i,int j,masa m[])
{
    int x=(this->getunitate_garnitura())*(this->get_pretpeunitate_garnitura());//nota de plata a mesei
    int y=(this->getunitate_garnitura())*(this->get_pretpeunitate_garnitura());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Garnitura - orez sarbesc\n");
}
