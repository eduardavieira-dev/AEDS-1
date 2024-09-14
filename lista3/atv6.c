#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){

    int w, x, y, z, mult, esc;
    float  geo, pon, har, ari;
  printf("Informe os valores de x, y e z");
  scanf("%d %d %d", &x, &y, &z);
    printf("Escolha que tipo de media aritmetica deseja calcular: \n 1-Geometrica \n2-Ponderada \n3-Harmonica \n4-Aritmetica");
  getchar();
    scanf("%d", &esc);

    switch(esc){
        case 1:
        mult=x*y*z;
        geo = sqrt(mult);
        printf("%.2f", geo);
        break;
        case 2:
        pon=(x+2*y+3*z)/6;
        printf("%.2f", pon);
        break;
        case 3:
        har=3/(1/x)+(1/y)+(1/z);
        printf("%.2f", har);
        break;
        case 4:
        ari=(x+y+z)/3;
        printf("%.2f", ari);
        break;
        default:
        printf("Invalido!");
    }


    return 0;
}