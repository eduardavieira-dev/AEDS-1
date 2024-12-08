#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"
// Classe derivada
class Cachorro : public Animal {
    public:
    // Construtor para a classe derivada
    Cachorro(string n);
    Cachorro();
    // Metodo sobrescrito para emitir som espec�fico
    void som() override;
    // Metodo exclusivo da classe Dog
    void buscar();
};

#endif //CACHORRO_H