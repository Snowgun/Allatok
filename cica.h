#ifndef CICA_H
#define CICA_H

#include <iostream>
#include <fstream>
using namespace std;
class Cica : public Allat<Eger>{
private:
        int purrness;
public:

   Cica(int lolm8, string n);
    void meow();
    int getPurrness();

    void eszik(Eger e);

};




#endif // CICA_H
