#include "desert.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
desert::desert()
{
    this->unitate=1;
}

desert::~desert()
{
    //dtor
}
desert::desert(const desert& aux): produs(aux), unitate(aux.unitate){}

int desert::getunitate_desert(){return this->unitate;}
void desert::set_pretpeunitate_desert(int pret){
    this->set_pretpeunitate(pret);
}
int desert::get_pretpeunitate_desert()
{
    return this->get_pretpeunitate();
}
void desert::comandainghetata(int i,int j,int cupe,masa m[])
{
    int x=cupe*(this->getunitate_desert())*(this->get_pretpeunitate_desert());//nota de plata a mesei
    int y=cupe*(this->getunitate_desert())*(this->get_pretpeunitate_desert());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Inghetata\n");
}
void desert::comandatort(int i,int j,masa m[])
{
    int x=(this->getunitate_desert())*(this->get_pretpeunitate_desert());//nota de plata a mesei
    int y=(this->getunitate_desert())*(this->get_pretpeunitate_desert());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Tort Krantz\n");
}
