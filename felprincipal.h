#include <produs.h>
#include <masa.h>
#pragma once
class felprincipal: public produs
{   bool unitate;
    public:
        felprincipal();
        virtual ~felprincipal();
        felprincipal(const felprincipal& aux);
        void comandafrigarui(int i,int j,masa m[]);
        void comandatocanapui(int i,int j,masa m[]);
        void comandastronganoff(int i,int j,masa m[]);
        void comandafile(int i,int j,masa m[]);
        void comandachateaubriand_rare(int i,int j,masa m[]);
        void comandachateaubriand_mediumrare(int i,int j,masa m[]);
        void comandachateaubriand_welldone(int i,int j,masa m[]);
        void set_pretpeunitate_felprincipal(int pret);
        int get_pretpeunitate_felprincipal();
        int getunitate_felprincipal();

};
