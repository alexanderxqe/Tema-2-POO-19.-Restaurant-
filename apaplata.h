#include <produs.h>
#pragma once
#include <masa.h>
class apaplata: public produs
{
    int unitate; //o sticla
    public:
        apaplata();
        virtual ~apaplata();
        void comandaapa(int i, int j,masa m[]);
        void set_pretpeunitate_apa(int pret);
        int get_pretpeunitate_apa();
        int getunitate_apaplata();
        apaplata(const apaplata& aux);
};
