#include <stdio.h>
/*Fa�a um programa que leia um valor em reais e a cota��o do d�lar. Em seguida, imprima o
valor correspondente em d�lares*/
int main(){
    float reais, dolares, dolar=5.47;

    printf("Informe o valor em reais: ");
    scanf("%f", &reais);

    dolares = reais/dolar;


    printf("Valor em dolares: %.2f", dolares);
    return 0;
}
