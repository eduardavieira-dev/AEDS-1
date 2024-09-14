#include <stdio.h>
#include <math.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){

    float a, b, c, delta, valor, x1, x2, raiz;

    printf("Informe os valores de a, b e c respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);

    delta= pow(b, 2)-4.0*a*c;
    raiz = sqrt(delta);


    if(delta>0){
        x1= (-b+raiz)/(2*a);
        x2= (-b-raiz)/(2*a);
        printf("X1=%.2f \n x2=%.2f", x1, x2);

    }else if(delta==0){
        x1= (-b+raiz)/(2*a);
        x2= (-b-raiz)/(2*a);
        printf("x1=x2\n Valor: %f", x1);
    }else{
        printf("Raizes nao reais");
    }

    return 0;
}
