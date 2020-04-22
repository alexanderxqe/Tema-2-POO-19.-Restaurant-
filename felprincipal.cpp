#include "felprincipal.h"
#include <produs.h>
#include <iostream>
#include <cstring>
#include<masa.h>
using namespace std;
felprincipal::felprincipal()
{
   this->unitate=1;
}

felprincipal::~felprincipal()
{
    //dtor
}
felprincipal::felprincipal(const felprincipal& aux): produs(aux), unitate(aux.unitate){}

int felprincipal::getunitate_felprincipal(){return this->unitate;}
void felprincipal::set_pretpeunitate_felprincipal(int pret){
    this->set_pretpeunitate(pret);
}
int felprincipal::get_pretpeunitate_felprincipal()
{
    return this->get_pretpeunitate();
}
void felprincipal::comandatocanapui(int i,int j,masa m[])
{
    int x=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata a mesei
    int y=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Tocana de pui\n");
}
void felprincipal::comandafrigarui(int i,int j,masa m[])
{
   int x=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata a mesei
   int y=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata individuala
   x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Frigarui de pui\n");
}
void felprincipal::comandachateaubriand_rare(int i,int j,masa m[])
{
    int x=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata a mesei
    int y=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Fel principal -Chateaubriand rare\n");
}
void felprincipal::comandachateaubriand_welldone(int i,int j,masa m[])
{
    int x=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata a mesei
    int y=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Fel principal -Chateaubriand well done\n");
}
void felprincipal::comandachateaubriand_mediumrare(int i,int j,masa m[])
{
   int x=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata a mesei
    int y=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata individuala
   x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Fel principal -Chateaubriand medium rare\n");
}
void felprincipal::comandafile(int i,int j,masa m[])
{
    int x=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata a mesei
    int y=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata individuala
  x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Fel principal -File vita\n");
}
void felprincipal::comandastronganoff(int i,int j,masa m[])
{
    int x=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata a mesei
   int y=(this->getunitate_felprincipal())*(this->get_pretpeunitate_felprincipal());//nota de plata individuala
    x+=m[i].getnotadeplata_client(j);
    y+=m[i].getnotadeplata();
    m[i].setnotadeplata_client(i,x);
    m[i].setnotadeplata(y);
    m[i].setcomanda(j,"-Fel principal -stronganoff\n");
}

