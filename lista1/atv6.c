6. Criar um programa que leia 4 números reais e exiba a sua média ponderada, sabendo-se
que os pesos são 2, 1, 3 e 4, nesta ordem.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4;
    float p1=2.0, p2=1.0, p3=3.0, p4=4.0;
    float somaPesos, ponderada;


    printf("Digite 4 numeros reais:");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    somaPesos = p1 + p2 + p3 + p4;
    ponderada = (n1*p1+n2*p2+n3*p3+n4*p4)/somaPesos;


    printf("Media ponderada dos numeros %.2f", ponderada);


    return 0;
}