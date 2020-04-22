#include "sticlevin.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
sticlevin::sticlevin()
{
   this->unitate=1; // o sticla
}

sticlevin::~sticlevin()
{
}
sticlevin::sticlevin(const sticlevin& aux): produs(aux), unitate(aux.unitate){}
int sticlevin::getunitate_vsticla(){return this->unitate;}
void sticlevin::set_pretpeunitate_vsticla(int pret){
    this->set_pretpeunitate(pret);
}
int sticlevin::get_pretpeunitate_vsticla()
{
    return this->get_pretpeunitate();
}
void sticlevin::comandabordeux(int i,int j,masa m[])
{
    int x=(this->getunitate_vsticla())*(this->get_pretpeunitate_vsticla());//nota de plata a mesei
    int y=(this->getunitate_vsticla())*(this->get_pretpeunitate_vsticla());//nota de plata individuala
   x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Bautura - vin la sticla Bordeux\n");
}
void sticlevin::comandacastelbolovanu(int i,int j,masa m[])
{
    int x=(this->getunitate_vsticla())*(this->get_pretpeunitate_vsticla());//nota de plata a mesei
    int y=(this->getunitate_vsticla())*(this->get_pretpeunitate_vsticla());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Vin la sticla - Castel Bolovanu\n");
}
