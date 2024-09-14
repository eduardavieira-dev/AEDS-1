5. Escreva um programa que pergunte qual o tempo transcorrido em um cronômetro em horas,
minutos e segundos e transforme (e mostre) todo este tempo em segundos.


#include <stdio.h>
#include <stdlib.h>

int main(){
    double horas, minutos, segundos, tempo;

    printf("Qual foi o tempo transcorrido em Horas:");
    scanf("%lf", &horas);
    printf("Qual foi o tempo transcorrido em Minutos:");
    scanf("%lf", &minutos);
    printf("Qual foi o tempo transcorrido em Segundos:");
    scanf("%lf", &segundos);

    tempo = horas*3600+minutos*60+segundos;


    printf("Se passaram %2.lf segundos", tempo);

    return 0;
}