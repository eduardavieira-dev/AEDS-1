#include <stdio.h>
/*Leia uma velocidade em km/h (quil�metros por hora) e apresente convertida em m/s (metros
por segundo). A f�rmula de convers�o � M = K/36, sendo K a velocidade em km/h e M em m/s*/
int main(){
    float km, m;

    printf("Informe a velocidade em km/h: ");
    scanf("%f", &km);

    m = km/3.6;



    printf("Velocidade em m/s: %.2f", m);
    return 0;
}
