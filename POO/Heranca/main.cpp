#include <iostream>
#include <string>
#include "Cachorro.h"
#include "Animal.h"
#include "Gato.h"

using namespace std;

int main() {
    // Criando um objeto da classe base
    Animal animalGenerico("Animal Generico");
    animalGenerico.mostraNome();
    animalGenerico.som();
    cout << endl;
    // Criando um objeto da classe derivada
    Cachorro meuCachorro("Buddy");
    meuCachorro.mostraNome();
    meuCachorro.som();
    meuCachorro.buscar();

    cout << endl;
    
    Gato meuGato("Garfield");
    meuGato.mostraNome();
    meuGato.som();

    return 0;

}
