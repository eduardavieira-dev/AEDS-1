#include <stdio.h>
/*Implemente um programa que converta uma temperatura Fahrenheit em grau Celsius:*/
int main(){
    float f, c, conv=5.00;

    printf("Informe o valor em Fahrenheit:");
    scanf("%f", &f);

    conv = conv/9;
    c= conv * (f-32);

    printf("Temperatura em graus celcius: %.2f", c);
    return 0;
}
