#include "allat.h"



void Allat<class C>::setName(string n){
    name=n;

}
void Allat<class C>::serialize(string filename){
    ofstream zaszlo(filename);
    zaszlo.is_open();
    zaszlo.close();
}
void Allat<class C>::setHungry(int sup){
    hunger=sup;
}
int Allat<class C>::gethunger(){
    return hunger;
}
