#include <iostream>
#include<string.h>


using namespace std;

class Eletrodomestico {
private:
    string loja;
    string telefone;
    double preco;

public:

    void NovoEletrodomestico(string l, string t, double p){
        loja=l;
        telefone=t;
        preco=p;
    }

    double getPreco(){
        return preco;
    }
};
int main(){

    Eletrodomestico cadastro[15];
    double menor, maior, soma = 0.0;
    string loja, telefone;
    double preco;

    for(int i= 0; i<15; i++){

        cout << "Cadastro do item " << i + 1 << ":" << endl;
        cout << "Nome da loja: ";
        cin >> loja;
        cout << "Telefone da loja: ";
        cin >> telefone;
        cout << "Preco do eletrodomestico: R$ ";
        cin >> preco;

        cadastro[i].NovoEletrodomestico(loja, telefone, preco);
    }

    menor = cadastro[0].getPreco();
    maior = cadastro[0].getPreco();


         for(int i= 0; i<15; i++){
            double preco = cadastro[i].getPreco();
            if(preco<menor)menor=preco;
            if(preco>maior)maior=preco;
            soma+=preco;
         }

    double media=soma/15;

    cout << "\nEstatisticas dos precos cadastrados:" << endl;
    cout << "Preco medio: R$ " << media << endl;
    cout << "Menor preco: R$ " << menor << endl;
    cout << "Maior preco: R$ " << maior << endl;


    return 0;
}
