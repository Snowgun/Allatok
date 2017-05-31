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
    void setName(string n);

    void serialize(string filename);

    void setHungry(int sup);
    int gethunger();
    void eszik(C zsakmany);
};

#endif // ALLAT_H
