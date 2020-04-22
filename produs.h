#pragma once
#include <iostream>
 class produs
{   int pretpeunitate;
    public:
        produs();
        virtual ~produs();
        produs(const produs& aux);
        virtual void set_pretpeunitate(int pret);
        virtual int get_pretpeunitate();
};
