#include <iostream>
using namespace std;

class Conta{
    private:
        double saldo;


    public:
    //outra forma de escrever:
    //Conta (double s=0.0):saldo(s){}
    Conta(double s=0.0){
        saldo = s;
    }

    void deposito(double valor){
        if(valor>0){
            saldo += valor;
             cout << "Deposito de R$ " << valor << " realizado com sucesso!\n";
        } else {
            cout << "Valor de depósito inválido!\n";
        }
    }

    void saque(double valor){
        double taxa = valor*0.005;
        double valorTotal = valor+taxa;

        if(valorTotal <=saldo){
            saldo -= valorTotal;
            cout << "Saque de R$ " << valor << " realizado com sucesso! Taxa de R$ " << taxa << " aplicada.\n";
        } else {
            cout << "Saldo insuficiente para saque de R$ " << valor << "!\n";
        }

    }


    double getSaldo()const {
        return saldo;
    }
};

int main(){
    Conta c1(500.0);
    Conta c2(300.0);

    c1.deposito(200.0);
     cout << "Saldo atual da conta 1 de deposito: R$ " << c1.getSaldo() << "\n";
    c2.saque(100.0);
     cout << "Saldo atual da conta 2 de saque: R$ " << c2.getSaldo() << "\n";

    return 0;
}