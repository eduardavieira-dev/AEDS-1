#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cliente {
private:
    string nome;
    string data_nasc;
    string endereco;
    int telefone;

public:

    Cliente(string n, string d, string e, int t) {
        nome = n;
        data_nasc = d;
        endereco = e;
        telefone = t;
    }


    void exibirCliente() const {
        cout << "Nome: " << nome << endl;
        cout << "Data de Nascimento: " << data_nasc << endl;
        cout << "Endereco: " << endereco << endl;
        cout << "Telefone: " << telefone << endl;
    }
};

int main() {
    vector<Cliente> clientes;  // Vetor para armazenar os clientes
    int numClientes;

    cout << "Quantos clientes quer cadastrar: ";
    cin >> numClientes;
    cin.ignore();  // Limpa o buffer do cin

    for (int i = 0; i < numClientes; i++) {
        string nome, endereco, data_nasc;
        int telefone;

        cout << "Cliente " << i + 1 << ":" << endl;

        cout << "Nome: ";
        getline(cin, nome);

        cout << "Endereco: ";
        getline(cin, endereco);

        cout << "Data de nascimento: ";
        getline(cin, data_nasc);  // Usar getline para permitir espaços na data de nascimento

        cout << "Telefone: ";
        cin >> telefone;
        cin.ignore();  // Limpa o buffer do cin após ler um número


        Cliente novoCliente(nome, data_nasc, endereco, telefone);
        clientes.push_back(novoCliente);
    }


    cout << "\nClientes cadastrados:\n";
    for (int i = 0; i < clientes.size(); i++) {
        cout << "\nCliente " << i + 1 << ":" << endl;
        clientes[i].exibirCliente();
    }

    return 0;
}
