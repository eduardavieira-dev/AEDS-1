#include <stdio.h>
/* 
01. Escreva um programa com uma função recursiva que calcule o valor da série:
(1/2) + (3/4) + (5/6) + ... + (n-1)/n.
O número n, a ser lido, deve ser sempre par 
*/

float serie(float n){
     if(n==2){
        return 0.5;
     }
     else{
     return (n-1)/n+ serie(n-2);
     }
}

int main(){
    int n;

    do{
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    }while(n%2!=0);

    printf("Serie: %f", serie(n));
    return 0;
}
