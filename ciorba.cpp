
#include "ciorba.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
ciorba::ciorba()
{
  this->unitate=1;
}

ciorba::~ciorba()
{
    //dtor
}
ciorba::ciorba(const ciorba& aux): produs(aux), unitate(aux.unitate){}

int ciorba::getunitate_ciorba(){return this->unitate;}
void ciorba::set_pretpeunitate_ciorba(int pret){
    this->set_pretpeunitate(pret);
}
int ciorba::get_pretpeunitate_ciorba()
{
    return this->get_pretpeunitate();
}
void ciorba::comanda_burta(int i,int j,masa m[])
{
    int x=(this->getunitate_ciorba())*(this->get_pretpeunitate_ciorba());//nota de plata a mesei
    int y=(this->getunitate_ciorba())*(this->get_pretpeunitate_ciorba());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Ciorba de burta\n");
}
void ciorba::comanda_legume(int i,int j,masa m[])
{
    int x=(this->getunitate_ciorba())*(this->get_pretpeunitate_ciorba());//nota de plata a mesei
    int y=(this->getunitate_ciorba())*(this->get_pretpeunitate_ciorba());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Ciorba de legume\n");
}
void ciorba::comanda_ciuperci(int i,int j,masa m[])
{
    int x=(this->getunitate_ciorba())*(this->get_pretpeunitate_ciorba());//nota de plata a mesei
    int y=(this->getunitate_ciorba())*(this->get_pretpeunitate_ciorba());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Apa plata\n");

}void ciorba::comanda_ardei(int i,int j,masa m[])
{
    int x=(this->getunitate_ciorba())*3;//nota de plata a mesei
    int y=(this->getunitate_ciorba())*3;//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Ardei (la ciorba)\n");
}
void ciorba::comanda_smantana(int i,int j,masa m[])
{
    int x=((this->getunitate_ciorba())*5);//nota de plata a mesei
    int y=((this->getunitate_ciorba())*5);//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Smantana(la ciorba)\n");
}
