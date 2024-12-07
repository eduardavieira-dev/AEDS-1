#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato: public Animal{
    public:

    Gato(string n);
    Gato();

    void som() override;

};

#endif //GATO_H