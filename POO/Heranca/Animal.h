#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;
// Classe base
class Animal {
    protected:
    string nome;
    public:
    // Construtor
    Animal(string n);
    // Metodo para emitir som (polimorfico)
    virtual void som();
    // Metodo para exibir o nome
    void mostraNome();
};

#endif // ANIMAL_H