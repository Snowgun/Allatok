#include <iostream>
#include "allatok.h"
using namespace std

Allatok::Allatok()
{
    void Allatok<class C>::setName(string n){
        name=n;

    }
    void Allatok<class C>::serialize(string filename){
        ofstream zaszlo(filename);
        zaszlo.is_open();
        zaszlo.close();
    }
    void Allatok<class C>::setHungry(int sup){
        hunger=sup;
    }
    int Allatok<class C>::gethunger(){
        return hunger;
    }
}
