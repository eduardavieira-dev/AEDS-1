#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){
    int qtd;
    float valor;

    printf("Quantas folhas voce vai copiar?");
    scanf("%d", &qtd);

    if(qtd<=100.0){
        valor = qtd*0.25;
        printf("Valor: %f", valor);
    }else if(qtd>100.0){
        valor = qtd*0.2;
        printf("Valor: %f", valor);
    }else if(qtd<0){
        printf("Valor invalido");

    }

    return 0;
}