7. Para vários tributos a base de calculo é o salário mínimo. Fazer um algoritmo que leia o o
valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos essa pessoa
ganha. Considere que o valor do salário mínimo é: R$1.300,00.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioPessoa, salarioMinimo;
    
    printf("Informe o seu salário:");
    scanf("%f", &salarioPessoa);

    salarioMinimo = salarioPessoa/1300;

    printf("Voce recebe %.1f salario(s) minimo(s)", salarioMinimo);


    return 0;
}