#ifndef ALLAT_H
#define ALLAT_H
#include <iostream>
#include <fstream>
using namespace std;

template<class C>
class Allat
{
private:
    int hunger;
    string name;

public:

    void setName(string n) { name = n; }

    //void serialize(string filename);

    void setHungry(int sup) { hunger = sup; }
    int gethunger() { return hunger; }
    void eszik(C zsakmany);
};

#endif // ALLAT_H
