#include <cica.h>

#include <eger.h>

Cica::Cica(int lolm8, string n) {
    this->purrness = lolm8;
    //this->setName(n);
}

void Cica::meow(){
    cout << "Meow" << endl << "The catto is " << this->gethunger() << "% hungry." << endl;
}
int Cica::getPurrness(){
    cout << "Your catto has " << purrness <<" purry purness." << endl;
  return purrness;

  }
void Cica::eszik(Eger e){
    cout << "A macska,aki " << gethunger() << "% ehes,megevett egy egeret,aki " << e.gethunger() << "% ehes volt.\n";
}
