4. Escreva um programa que leia uma temperatura em graus Farenheit e a imprima em graus
Centígrados. A conversão de graus Farenheit para Centígrados é obtida por C=(F-32)/1.8

#include <stdio.h>
#include <stdlib.h>

int main(){
    float far, cel;

    printf("Informe a temperatura em Farenheit: ");
    scanf("%f", &far);

    cel = (far-32)/1.8;

    printf("\n Temperatura em graus centígrados: %.2f\n ", cel);
    return 0;
}