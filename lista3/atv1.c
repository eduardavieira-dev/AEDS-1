#include <stdio.h>
/* EDUARDA ViEIRA
Data: 27/08  
Lista 3*/

int main(){

    float n1, n2, n3, number;

    printf("Informe 3 numeros: ");
    scanf("%f %f %f", &n3, &n2, &n1);

    if(n1>n2 && n1>n3){
        if(n2>n3){
        printf("%f %f %f", n1, n2, n3);
        }else{
        printf("%f %f %f", n1, n3, n2);
        }
    }
    if(n2>n1 &&n2>n3){
         if(n1>n3){
        printf("%f %f %f", n2, n1, n3);
        }else{
        printf("%f %f %f", n2, n3, n1);
        }
    }
     if(n3>n1 &&n3>n1){
         if(n2>n1){
        printf("%f %f %f", n3, n2, n1);
        }else{
        printf("%f %f %f", n3, n1, n2);
        }
    }


    return 0;
}
