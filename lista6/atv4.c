#include <stdio.h>

/* 04. Faça uma função recursiva, em linguagem C, que calcule o valor da série S descrita a seguir
para um valor n>0 a ser fornecido como parâmetro para a mesma */

float soma(float n){
    if(n==1){
    return 2;
    }
    else{
    return ((1+n*n)/n)+soma(n-1);
    }

}

int main(){
    int n;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

     printf("Somatorio: %.2f", soma(n));

    return 0;
}
