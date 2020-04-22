#pragma once
#include <iostream>
#include<string>
#include<cstring>

using namespace std;
struct client{
    int valoare_notadeplata;
    string comanda;//[200];

};
class masa
{   int nrclienti;
    int capacitate;
    bool eocupata;
    int notadeplata;
    client clienti[13];
    public:
        masa();
        virtual ~masa();
        masa(const masa& aux);
        void setcapacitate(int i);
        void seteocupata(bool x);
        void setnrclienti(int x);
        void setnotadeplata(int x);
        void setnotadeplata_client(int i,int x);
        void setcomanda(int i,string s);
        int getnrclienti();
        int getcapacitate();
        int geteocupata();
        int getnotadeplata_client(int i);
        string getcomanda_client(int i);
        int getnotadeplata();
       friend std::ostream& operator<<(std::ostream& ,  masa& );
        friend std::istream& operator>>(std::istream& ,  masa& );

};
