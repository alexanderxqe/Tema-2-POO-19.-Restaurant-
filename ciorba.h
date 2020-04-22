#include <masa.h>
#pragma once
#include <produs.h>


class ciorba: public produs
{ int unitate; //1 farfurie ciorba // 1 ardei // o cupa smantana
    public:
        ciorba();
        virtual ~ciorba();
        ciorba(const ciorba& aux);
        void comanda_burta(int i,int j,masa m[]);
        void comanda_legume(int i,int j,masa m[]);
        void comanda_ciuperci(int i,int j,masa m[]);
        void comanda_ardei(int i,int j, masa m[]);
        void comanda_smantana(int i,int j,masa m[]);
        void set_pretpeunitate_ciorba(int pret);
        int getunitate_ciorba();
        int get_pretpeunitate_ciorba();
};

