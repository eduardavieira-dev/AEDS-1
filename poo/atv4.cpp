#include <iostream>
#include<string.h>
/*
A04. Crie uma classe para representar uma conta corrente, com m�todos para depositar uma
quantia, sacar uma quantia e obter o saldo. Para cada saque ser� debitada tamb�m uma taxa de
opera��o equivalente � 0.5% do valor sacado. Crie, em seguida, uma subclasse (herdada) da classe
anterior para representar uma conta corrente de um cliente especial. Clientes especiais pagam
taxas de opera��o de apenas 0.1% do valor sacado.
Utilize os conceitos de classe, atributos, m�todos, encapsulamento (get/set), m�todo construtor e
heran�a. Crie um main com menu, que ap�s o usu�rio definir o tipo de conta (comum ou especial),
permitir� ao usu�rio depositar, sacar e mostrar saldo da cota instanciada.


*/
using namespace std;

class Conta {
private:
    float preco;

public:

    void depositar(){

    }

    void sacar(){


    }

    void saldo(){

    }
};


int main(){

    int num;

    cout << "Informe o que deseja fazer:";
    cout << "1- Depositar";
    cout << "2- Sacar";
    cout << "2- Obter Saldo";
    cin>>num;

    switch(num){
        case 1:


        case 2:


        case 3:


        default:
        cout << "Invalido";


    }


    return 0;

};
