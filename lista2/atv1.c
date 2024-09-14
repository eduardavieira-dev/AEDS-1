#include <stdio.h>

int main(){
    float a, b, ab, ba;
    /*1. Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.:
    A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter
    o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis.*/

    printf("Digite o valor de a:");
    scanf("%f", &a);

    printf("Digite o valor de b:");
    scanf("%f", &b);

      ba=a;
      ab=b;
      b=ba;
      a=ab;

      printf("O valor final de a: %f \n O valor final de b: %f", a, b);
    return 0;
}
