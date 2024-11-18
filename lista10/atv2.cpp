#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Loja {
private:
    string nome;
    int telefone;
    float preco;

public:

    Loja(string n, int t, float p) {
        nome = n;
        telefone =  t;
        preco = p;
    }


    void exibirCliente() const {
        cout << "Nome da Loja: " << nome << endl;
        cout << "Telefone: " << telefone << endl;
        cout << "Preco: " << preco << endl;

    }
};

int main() {
    vector<Loja> lojas;
    int num = 2;
    float preco, precoMax=0, precoMin=100000, numMedia=0, contador, media;


    for (int i = 0; i < num; i++) {
        string nome;
        int telefone;
        float preco;

        cout << "Eletrodomestico " << i + 1 << ":" << endl;

        cout << "Nome da Loja: ";
        getline(cin, nome);

        cout << "Telefone: ";
        cin >> telefone;

        cout << "Preco: ";
        cin >> preco;


        cin.ignore();


        Loja novaLoja(nome, telefone, preco );
        lojas.push_back(novaLoja);

        numMedia+=preco;
        contador++;
    }

        media = numMedia/contador;



    cout << "\nLojas cadastradas:\n";
    for (int i = 0; i < lojas.size(); i++) {
        cout << "\nLoja com maior preco " << i + 1 << ":" << endl;
          if(preco>precoMax){
            lojas[i].exibirCliente();
        }
    }

    for (int i = 0; i < lojas.size(); i++) {
        cout << "\nLoja com menor preco " << i + 1 << ":" << endl;
          if(preco<precoMin){
            lojas[i].exibirCliente();
        }
    }

        cout << "\nPreco Medio:" << media << "" << endl;


    return 0;
}
