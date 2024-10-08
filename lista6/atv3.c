#include <stdio.h>

/* 03. Escreva uma função recursiva que calcule a soma dos dígitos de um inteiro estritamente
positivo n. A soma dos dígitos de 132, por exemplo, é 6. Não use vetor! */

float soma(int n){
    if(n==0){
    return 0;
    }
    else{
    //ex: 132-> return 1+soma(n) 1+0
    // return 3+soma(n) 3+1 = 4
    // return 2+soma(n) 2+3+1 = 6
    return (n%10)+soma(n/10);
    }

}

int main(){
    int n;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

     printf("Soma: %.0f", soma(n));
    return 0;
}
