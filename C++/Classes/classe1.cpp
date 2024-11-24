#include <iostream>
using namespace std;

class carro{
    private:
        int ano;
        float valor, km;

    public:

    //construtor
    carro(int a = 0 , float v = -1, float k = -1){
        //esse valores são refernetes a falta de um valor na main
        ano = a;
        valor = v;
        km = k;

    };

    

    // void setAno(int a){
    //     ano = a;
    // };
    
    int getAno(){
        return ano;
    };
    int getValor(){
        return valor;
    };


    void mensagem(){
         cout<<"Programa em C++ de Carros\n";
    }
    

    //get e set
    //obter o ano de get
    //indicar o ano de set
};

int main(){
    carro Fiat(1999, 10000, 150000);
    // Fiat.setAno(1995);
    carro escrever;
    escrever.mensagem();
    
    cout<<"Fiat \n";
    cout<<"Ano: "<<Fiat.getAno()<< endl;
    cout<<"Valor: "<<Fiat.getValor()<< endl;

    return 0;
}