#include "vinvarsat.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
vinvarsat::vinvarsat()
{this->unitate=100; //100 ml;
}

vinvarsat::~vinvarsat()
{
}
vinvarsat::vinvarsat(const vinvarsat& aux): produs(aux), unitate(aux.unitate){}

int vinvarsat::getunitate_vvarsat(){return this->unitate;}
void vinvarsat::set_pretpeunitate_vvarsat(int pret){
    this->set_pretpeunitate(pret);
}
int vinvarsat::get_pretpeunitate_vvarsat()
{
    return this->get_pretpeunitate();
}
void vinvarsat::comandavinalb(int i,int j,int cantitate,masa m[])
{
    int x=cantitate/(this->getunitate_vvarsat())*(this->get_pretpeunitate_vvarsat());//nota de plata a mesei
    int y=(this->getunitate_vvarsat())*(this->get_pretpeunitate_vvarsat());//nota de plata individuala
   x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Vin varsat alb\n");
}
void vinvarsat::comandavinrosu(int i,int j,int cantitate,masa m[])
{
   int x=cantitate/(this->getunitate_vvarsat())*(this->get_pretpeunitate_vvarsat());//nota de plata a mesei
    int y=(this->getunitate_vvarsat())*(this->get_pretpeunitate_vvarsat());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Vin varsat rosu\n");
}
