#include <stdio.h>

/* 06. Uma das maneiras de se conseguir a raiz quadrada de um número é subtrair do número os
ímpares consecutivos a partir de 1, até que o resultado da subtração seja menor ou igual a 0 (zero).
O número de vezes que se consegue fazer a subtração é a raiz quadrada exata (resultado =0) ou
aproximada do número (resultado negativo).
Exemplo: raiz quadrada de 16 = 4
16 -1 = 15 – 3 = 12 – 5 = 7 – 7 = 0 4 subtrações */

float raiz(float n, int impar){

    if(n<=0){
    return 0;

    }else{
        return 1+ raiz(n-impar, impar + 2);
    }

}

int main(){
    float n;

    printf("Informe o valor que quer saber as raizes: ");
    scanf("%f", &n);

    printf("Raiz= %.2f", raiz(n, 1));

    return 0;
}
