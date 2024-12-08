#include "Animal.h"
    // Construtor da classe Animal
    Animal::Animal(string n) : nome(n) {}
    // Metodo para emitir som generico
    void Animal::som() {
    cout << nome << " este fazendo barulho" << endl;
    }
    // Metodo para exibir o nome do animal
    void Animal::mostraNome() {
    cout << "Este eh o " << nome << "." << endl;
}
