#include <stdio.h>
#include <math.h>
/*Leia um �ngulo em graus e apresente-o convertido em radianos. A f�rmula de convers�o � R
= G * pi/180, sendo G o �ngulo em graus e R em radianos e pi = 3.141592*/
int main(){
    double g, r, pi=3.141592;

    printf("Informe o angulo em graus:");
    scanf("%lf", &g);

    r= g * (pi/180.0);

    printf("Radianos: %lf", r);

    return 0;
}
