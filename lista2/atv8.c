#include <stdio.h>
#include <math.h>
/*Sabendo que 100 kilowatt de energia custa um s�timo do sal�rio m�nimo, fa�a um programa
que leia o valor do sal�rio m�nimo e a quantidade de kilowatt gasta por uma resid�ncia, calcule
e mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser
pago por essa resid�ncia com um desconto de 10%*/
int main(){
    double kw, gasto, salario=1302.50, desconto;

    printf("Informe a quantidade de kilowatt gasta :");
    scanf("%lf", &kw);

    kw = kw*1.86;

    desconto= kw*0.9;

    printf("Gasto: %lf", desconto);

    return 0;
}
