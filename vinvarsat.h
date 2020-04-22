#pragma once
#include <produs.h>
#include <masa.h>

class vinvarsat: public produs
{   int unitate;
    public:
        vinvarsat();
        virtual ~vinvarsat();
        vinvarsat(const vinvarsat& aux);
        void comandavinrosu(int i,int j,int cantitate,masa m[]);
        void comandavinalb(int i,int j,int cantitate,masa m[]);
        void set_pretpeunitate_vvarsat(int pret);
        int get_pretpeunitate_vvarsat();
        int getunitate_vvarsat();
};
