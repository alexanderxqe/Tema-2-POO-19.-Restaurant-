#include "bere.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
bere::bere()
{
   this->unitate=1;//o sticla
}

bere::~bere()
{
    //dtor
}
bere::bere(const bere& aux): produs(aux), unitate(aux.unitate){}
int bere::getunitate_bere(){return this->unitate;}
void bere::set_pretpeunitate_bere(int pret){
    this->set_pretpeunitate(pret);
}
int bere::get_pretpeunitate_bere()
{
    return this->get_pretpeunitate();
}
void bere::comandacualcool(int i,int j,masa m[])
{
    int x=(this->getunitate_bere())*(this->get_pretpeunitate_bere());//nota de plata a mesei
    int y=(this->getunitate_bere())*(this->get_pretpeunitate_bere());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Bere cu alcool\n");
}
void bere::comandafaraalcool(int i,int j,masa m[])
{
   int x=(this->getunitate_bere())*(this->get_pretpeunitate_bere());//nota de plata a mesei
   int y=(this->getunitate_bere())*(this->get_pretpeunitate_bere());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Bere fara alcool\n");
}
