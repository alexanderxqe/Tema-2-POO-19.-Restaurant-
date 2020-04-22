#include <produs.h>
#include <masa.h>
#pragma once
class bere: public produs
{   int unitate;
    public:
        bere();
        virtual ~bere();
        bere(const bere& aux);
        void comandacualcool(int i,int j,masa m[]);
        void comandafaraalcool(int i,int j,masa m[]);
        void set_pretpeunitate_bere(int pret);
        int get_pretpeunitate_bere();
        int getunitate_bere();
};
