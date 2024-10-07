#include <stdio.h>

/* 05. Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os
números pares de 0 até N em ordem decrescente */

void imprime(int n){
    if(n<0){
        return;
    }else{
        printf("%d ", n);
        imprime(n-2);
    }

}

int main(){
    int n;
    printf("valor de n: ");
    scanf("%d", &n);

    imprime(n);

    return 0;
}
