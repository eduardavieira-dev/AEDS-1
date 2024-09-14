#include <stdio.h>
#include <math.h>
/*Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um programa
que leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma residência, calcule
e mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser
pago por essa residência com um desconto de 10%*/
int main(){
    double kw, gasto, salario=1302.50, desconto;

    printf("Informe a quantidade de kilowatt gasta :");
    scanf("%lf", &kw);

    kw = kw*1.86;

    desconto= kw*0.9;

    printf("Gasto: %lf", desconto);

    return 0;
}
