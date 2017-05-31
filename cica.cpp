#include "cica.h"

void Cica::meow(){
    cout << "Meow" << endl << "The catto is " << gethunger() << "% hungry." << endl;
}
int Cica::getPurrness(){
    cout << "Your catto has " << purrness <<" purry purness." << endl;
  return purrness;

  }
void Cica::eszik(Eger e){
    cout << "A macska,aki " << gethunger() << "% ehes,megevett egy egeret,aki " << e.gethunger() << "% ehes volt.\n";
}
