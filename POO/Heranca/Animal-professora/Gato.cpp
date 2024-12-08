#include "Gato.h"

Gato::Gato(string n) : Animal(n){}

void Gato::som(){
    cout << nome << " diz: Miau!Miau!" << endl;
}
