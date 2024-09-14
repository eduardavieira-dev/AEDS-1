8. Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.


#include <stdio.h>
#include <stdlib.h>

int main(){

    float hora, mes, total;

    printf("Quanto voce ganha por hora? ");
    scanf("%f", &hora);
    printf("Quantas horas voce trabalhou esse mes? ");
    scanf("%f", &mes);

    total = hora*mes;

    printf("Salario do mes: %.1f\n", total);

    return 0;
}