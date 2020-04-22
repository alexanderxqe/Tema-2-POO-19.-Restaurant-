
#include "produs.h"

produs::produs()
{
}

produs::~produs()
{
}
produs::produs(const produs& aux): pretpeunitate(aux.pretpeunitate){};
void produs::set_pretpeunitate(int pret)
{
    this->pretpeunitate=pret;
}
int produs::get_pretpeunitate()
{
    return this->pretpeunitate;
}
