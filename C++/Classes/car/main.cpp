#include <iostream>
#include "car.h"

using namespace std;


int main(){
    carro Fiat(1999, 10000, 150000);

    cout<<"Fiat \n";
    cout<<"Ano: "<<Fiat.getAno()<< endl;
    cout<<"Valor: "<<Fiat.getValor()<< endl;


    system("pause");
};
