#ifndef CICA_H
#define CICA_H

#include <iostream>
#include <fstream>

#include <allat.h>
#include <eger.h>

using namespace std;


class Cica : public Allat<Eger>{
private:
        int purrness;
public:

   Cica(int lolm8, string n,pair<int,int> coord);
   pair<int,int> coord= coord;
   void setName(string n);
    void meow();
    int getPurrness();

    void eszik(Eger e);

};




#endif // CICA_H
