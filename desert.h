#pragma once
#include <masa.h>
#include <produs.h>
class desert: public produs
{   int unitate;
    public:
        desert();
        virtual ~desert();
        desert(const desert& aux);
        void comandainghetata(int i,int j,int cupe,masa m[]);
        void comandatort(int i,int j,masa m[]);
        void set_pretpeunitate_desert(int pret);
        int get_pretpeunitate_desert();
        int getunitate_desert();
};
