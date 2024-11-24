#include <iostream>
using namespace std;

class Pessoa{
    private:
    string nome;
    int idade;
    float altura;
        
    public:
    // Constructor
    // Pessoa(string n, int i, float a){
    //     nome = n;
    //     idade = i;
    //     altura = a;
    // }

    void setNome(string n){
        nome = n;
    }
    void setIdade(int i){
        idade = i;
    }
    void setAltura(float a){
        altura = a;
    }
    

    string getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }

    float getAltura(){
        return altura;
    }


};

int main(){
    Pessoa Pessoa1;
    Pessoa Pessoa2;


    Pessoa1.setNome("Eduarda");
    Pessoa1.setIdade(18);
    Pessoa1.setAltura(1.60);
    
    Pessoa2.setNome("Michelle");
    Pessoa2.setIdade(47);
    Pessoa2.setAltura(1.7);

     cout << "Nome: " << Pessoa1.getNome() << "\n";
     cout << "Idade: " << Pessoa1.getIdade() << "\n";
     cout << "Altura: " << Pessoa1.getAltura() << "\n";

     cout << "\nNome: " << Pessoa2.getNome() << "\n";
     cout << "Idade: " << Pessoa2.getIdade() << "\n";
     cout << "Altura: " << Pessoa2.getAltura() << "\n";

    return 0;
}