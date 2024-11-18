#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Cliente{
  private:

    string nome;
    string data_nasc;
    string endereco;
    int telefone;

  public:

    Cliente(string n, string d, string e, int telefone){
        nome = n;
        data_nasc = d;
        endereco = e;
        this->telefone=telefone;

    }
};

int main(){
    vector<Cliente>cliente;
    int numClientes;

    cout<<"Quantos clientes quer cadastrar: ";
    cin>> numClientes;

    for(int i=0; i<numClientes; i++){
        string nome, endereco, data_nasc;
        int telefone;
        cout<<"Cliente "<<i+1<<":"<<endl;
        cout<<"Nome: ";
        cin>> nome;
        cout<<"Endereço: ";
        cin>> endereco;
        cout<<"Data de nascimento: ";
        cin>> data_nasc;
        cout<<"Telefone: ";
        cin>> telefone;

        Cliente novoCliente(nome, endereco, data_nasc, telefone);
        cliente.push_back(novoCliente);

    }

    cout<<"Clientes adicionados. "<<endl;


    return 0;
}
