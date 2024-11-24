#include <iostream>
using namespace std;

class Elevador{
    private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

        
    public:

    void inicializa(int capacidade, int totalAndares){
        this->capacidade=capacidade;
        this->totalAndares=totalAndares;
        andarAtual=0;
        pessoasPresentes=0;
    }
    void entra(){
        if(pessoasPresentes<capacidade){
            pessoasPresentes++;
             cout << "Uma pessoa entrou. Pessoas no elevador: " << pessoasPresentes << endl;
        } else {
            cout << "Elevador cheio!\n";
        }
    }

    void sai(){
        if(pessoasPresentes>0){
            pessoasPresentes--;
            cout << "Uma pessoa saiu. Pessoas no elevador: " << pessoasPresentes << endl;
        } else {
            cout << "O elevador esta vazio! Nao ha ninguem para sair.\n";
        }
      }

      void sobe(){
        if(andarAtual<totalAndares){
            andarAtual++;
             cout << "Elevador subiu para o andar " << andarAtual << endl;
        } else {
            cout << "O elevador ja esta no ultimo andar!\n";
        }
      }

    void desce(){
      if(andarAtual>0){
        andarAtual--;
        cout << "Elevador desceu para o andar " << andarAtual << endl;
        } else {
            cout << "O elevador já está no térreo!\n";
        }
      }

 // Getters
    int getAndarAtual() const { 
        return andarAtual; 
    }
    int getTotalAndares() const { 
        return totalAndares; 
    }
    int getCapacidade() const { 
        return capacidade; 
    }
    int getPessoasPresentes() const { 
        return pessoasPresentes; 
    }
};

int main(){
    Elevador elevador;

    elevador.inicializa(5, 10);

    elevador.entra();
    elevador.entra();
    elevador.sobe();
    elevador.sobe();
    elevador.entra();
    elevador.sai();
    elevador.desce();
    elevador.desce();
    elevador.desce(); 

     // Exibindo o estado do elevador
    cout << "\nEstado final do elevador:\n";
    cout << "Andar atual: " << elevador.getAndarAtual() << endl;
    cout << "Total de andares: " << elevador.getTotalAndares() << endl;
    cout << "Capacidade: " << elevador.getCapacidade() << endl;
    cout << "Pessoas presentes: " << elevador.getPessoasPresentes() << endl;
 

    return 0;
}