#pragma once
#include <produs.h>
#include <masa.h>
class sticlevin: public produs
{
    int unitate;
    public:
        sticlevin();
        virtual ~sticlevin();
        sticlevin(const sticlevin& aux);
        void comandabordeux(int i,int j,masa m[]);
        void comandacastelbolovanu(int i,int j,masa m[]);
        void set_pretpeunitate_vsticla(int pret);
        int get_pretpeunitate_vsticla();
        int getunitate_vsticla();
};
