#include <iostream>
using namespace std;


class Eletrodomestico {
private:
    string loja;
    string telefone;
    double preco;

public:
  
    void setDados(string nomeLoja, string tel, double valor) {
        loja = nomeLoja;
        telefone = tel;
        preco = valor;
    }

   
    double getPreco() { 
        return preco; 
    }
};

int main() {
    Eletrodomestico lista[15]; 
    double menor, maior, soma = 0.0;


    for (int i = 0; i < 15; ++i) {
        string loja, telefone;
        double preco;

        cout << "Cadastro do item " << i + 1 << ":" << endl;
        cout << "Nome da loja: ";
        cin >> loja;
        cout << "Telefone da loja: ";
        cin >> telefone;
        cout << "Preco do eletrodomestico: R$ ";
        cin >> preco;

        lista[i].setDados(loja, telefone, preco);
    }

    
    menor = lista[0].getPreco();
    maior = lista[0].getPreco();

    
    for (int i = 0; i < 15; ++i) {
        double preco = lista[i].getPreco();
        if (preco < menor) menor = preco;
        if (preco > maior) maior = preco;
        soma += preco;
    }

    double media = soma / 15;

    
    cout << "\nEstatisticas dos preços cadastrados:" << endl;
    cout << "Menor preço: R$ " << menor << endl;
    cout << "Preço medio: R$ " << media << endl;
    cout << "Maior preco: R$ " << maior << endl;

    return 0;
}
