#include "apaplata.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
apaplata::apaplata(){
this->unitate=1;  // clientul comanda o sticla
}
apaplata::~apaplata(){}
apaplata::apaplata(const apaplata& aux): produs(aux), unitate(aux.unitate){}

int apaplata::getunitate_apaplata(){return this->unitate;}
void apaplata::set_pretpeunitate_apa(int pret)
{
   this->set_pretpeunitate(pret);
}
int apaplata::get_pretpeunitate_apa()
{
    return this->get_pretpeunitate();
}
void apaplata::comandaapa(int i,int j,masa m[])
{
    int x=(this->getunitate_apaplata())*(this->get_pretpeunitate_apa());//nota de plata a mesei
    int y=(this->getunitate_apaplata())*(this->get_pretpeunitate_apa());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Apa plata\n");
}
