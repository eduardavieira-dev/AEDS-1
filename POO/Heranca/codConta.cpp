#include <iostream>
#include <string>
#include <iomanip> // Para formatar a saída de números

using namespace std;

class ContaCorrente {
protected:
    string titular;
    double saldo;
    double taxaOperacao;

public:
    ContaCorrente(string nome, double saldoInicial)
        : titular(nome), saldo(saldoInicial), taxaOperacao(0.005) {} // 0.5% padrão

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Deposito de R$ " << valor << " realizado com sucesso.\n";
        } else {
            cout << "O valor do deposito deve ser positivo.\n";
        }
    }

    void sacar(double valor) {
        if (valor <= 0) {
            cout << "O valor do saque deve ser positivo.\n";
            return;
        }

        double taxa = valor * taxaOperacao;
        double totalSaque = valor + taxa;

        if (totalSaque > saldo) {
            cout << "Saldo insuficiente para realizar o saque.\n";
        } else {
            saldo -= totalSaque;
            cout << fixed << setprecision(2);
            cout << "Saque de R$ " << valor << " realizado com sucesso. Taxa: R$ " << taxa << "\n";
        }
    }

    double getSaldo() const {
        return saldo;
    }

    string getTitular() const {
        return titular;
    }
};

class ContaCorrenteEspecial : public ContaCorrente {
public:
    ContaCorrenteEspecial(string nome, double saldoInicial)
        : ContaCorrente(nome, saldoInicial) {
        taxaOperacao = 0.001; // 0.1% para clientes especiais
    }
};

int main() {
    ContaCorrente* conta = nullptr;
    int tipoConta;

    cout << "Escolha o tipo de conta:\n";
    cout << "1 - Conta Corrente Comum\n";
    cout << "2 - Conta Corrente Especial\n";
    cin >> tipoConta;
    cin.ignore(); // Limpa o buffer do cin

    string nome;
    double saldoInicial;

    cout << "Informe o nome do titular: ";
    getline(cin, nome);

    cout << "Informe o saldo inicial: R$ ";
    cin >> saldoInicial;

    if (tipoConta == 1) {
        conta = new ContaCorrente(nome, saldoInicial);
    } else if (tipoConta == 2) {
        conta = new ContaCorrenteEspecial(nome, saldoInicial);
    } else {
        cout << "Opção invalida. Encerrando o programa.\n";
        return 1;
    }

    int opcao;
    do {
        cout << "\nMenu:\n";
        cout << "1 - Depositar\n";
        cout << "2 - Sacar\n";
        cout << "3 - Mostrar Saldo\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            double valor;
            cout << "Digite o valor para deposito: R$ ";
            cin >> valor;
            conta->depositar(valor);
        } else if (opcao == 2) {
            double valor;
            cout << "Digite o valor para saque: R$ ";
            cin >> valor;
            conta->sacar(valor);
        } else if (opcao == 3) {
            cout << fixed << setprecision(2);
            cout << "Saldo atual de " << conta->getTitular() << ": R$ " << conta->getSaldo() << "\n";
        } else if (opcao != 4) {
            cout << "Opcao invalida. Tente novamente.\n";
        }

    } while (opcao != 4);

    cout << "Obrigado por usar nosso sistema!\n";

    delete conta; // Libera a memoria alocada dinamicamente
    return 0;
}
