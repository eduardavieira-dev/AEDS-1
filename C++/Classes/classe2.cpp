#include <iostream>
using namespace std;

class carro{
    private:
        int ano;
        float valor, km;

    public:
    carro(int a, float v, float k);

    void setAno(int a);
    int getAno();

    void setValor(int a);
    int getValor();

    void setKm(int a);
    int getKm();
};

int main(){

    carro Fiat(1999, 10000, 150000);
    // Fiat.setAno(1995);
    
    cout<<"Fiat \n";
    cout<<"Ano: "<<Fiat.getAno()<< endl;
    cout<<"Valor: "<<Fiat.getValor()<< endl;

    system("pause");
};


    //usa-se esse metodo para organizar e saber quais funções se pode chamar
    carro::carro(int a = 0 , float v = -1, float k = -1){
        ano = a;
        valor = v;
        km = k;

    };
    
    int carro::getAno(){
        return ano;
    };
    int carro::getValor(){
        return valor;
    };
