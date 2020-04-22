#include <produs.h>
#include <masa.h>
#pragma once
class garnitura: public produs
{int unitate;
    public:
        garnitura();
        virtual ~garnitura();
        garnitura(const garnitura& aux);
        void comanda_cartofiprajiti(int i,int j,masa m[]);
        void comanda_cartofipiure(int i,int j,masa m[]);
        void comanda_orezsarbesc(int i,int j,masa m[]);
        void set_pretpeunitate_garnitura(int pret);
        int get_pretpeunitate_garnitura();
        int getunitate_garnitura();
};
