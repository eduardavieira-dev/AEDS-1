#include <iostream>
#include<string.h>
#include<vector>

using namespace std;

class Clientes{
private:
    string nome;
    string data_nasc;
    string endereco;
    string telefone;
public:

    Clientes(string n, string d, string e, string t){
        nome=n;
        data_nasc=d;
        endereco=e;
        telefone=t;
    }
    void exibirCliente(){
        cout<<"Nome "<<nome<<endl;
        cout<<"Data de nascimento "<<data_nasc<<endl;
        cout<<"Endereco "<<endereco<<endl;
        cout<<"Telefone"<<telefone<<endl;
    }
};

int main(){
    string nome, data, endereco, telefone;
    // Declarando um array de ponteiros para objetos Clientes (para armazenar 2 clientes)
    Clientes* novoCliente[2];

    for(int i= 0; i<2; i++){

          cout<<"Digite o nome do cliente: ";
          getline(cin, nome);
          cout<<"Digite a data de nascimento: ";
          getline(cin, data);
          cout<<"Digite o endereco: ";
          getline(cin, endereco);
          cout<<"Digite o telefone: ";
          getline(cin, telefone);

        // Criar um novo objeto Clientes com as informa��es fornecidas e armazen�-lo no vetor de ponteiros
        novoCliente[i] = new Clientes(nome, data, endereco, telefone);

    }
     cout << "\nClientes cadastrados:\n";
     for(int i=0; i<2;i++){
        cout << "\nCliente " << i + 1 << ":\n";
        novoCliente[i]->exibirCliente();
        // Chama o metodo exibirCliente para mostrar os dados de cada cliente
     }

    return 0;
}
