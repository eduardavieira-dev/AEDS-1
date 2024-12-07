#include <iostream>
#include<string.h>

using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
    float altura;

public:
    /*void setNome(string n){
        nome = n;
    }
     void setIdade(int i){
        idade = i;
    }

    void setAltura(float a){
        altura = a;
    }
    */
    Pessoa(string n, int i, float a){
        nome = n;
        idade = i;
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

    string nome;
    int idade;
    float altura;


    cout<<"Digite o nome da pessoa: ";
    getline(cin, nome);



     cout<<"Digite a idade da pessoa: ";
     cin>>idade;


     cout<<"Digite a altura da pessoa: ";
     cin>>altura;


     Pessoa pessoa(nome, idade, altura);

    cout << "Nome: " << pessoa.getNome() << endl;
    cout << "Idade: " << pessoa.getIdade() << endl;
    cout << "Altura: " << pessoa.getAltura() << endl;

}
