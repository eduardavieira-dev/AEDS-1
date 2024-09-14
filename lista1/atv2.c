2. Faça um programa que leia 4 notas de 1 aluno, calcule e mostre na tela a soma e a média
aritmética das notas.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4, soma;
    float media;

    printf("Digite as 4 notas: \n");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    soma = n1+n2+n3+n4;
    media = soma/4;

    printf("Soma das notas: %.2f\n - Media das notas : %.2f", soma, media);
    return 0;
}
