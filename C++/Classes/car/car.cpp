#include<iostream>
#include "car.h"

using namespace std;

    carro::carro(int a = 0 , float v = -1, float k = -1){
        ano = a;
        valor = v;
        km = k;

    };
    
    int carro::getAno(){
        return ano;
    };
    int carro::getValor(){
        return valor;
    };
    