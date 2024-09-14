#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){
    int x, qtd;
    float y, valor;

    printf("Informe o valor de x: ");
    scanf("%d", &x);

    if(x<=1){
        y = 1;
    printf("Valor de y: %.2f", y);

    }else if(1<x && x<=2){
        y = 2;
    printf("Valor de y: %.2f", y);

    }else if(2<x && x<=3){
        y = x*x;
    printf("Valor de y: %.2f", y);
    }else if(x>3){
        y = x*x*x;
    printf("Valor de y: %.2f", y);
    }

    return 0;
}