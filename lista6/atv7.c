#include <stdio.h>

/* 07. Um problema típico em ciência da computação consiste em converter um número da sua forma
decimal (base 10) para a forma binária. Por exemplo, o número 12 tem a sua representação binária
igual a 1100. A forma mais simples de fazer isso é dividir o número sucessivamente por 2, onde o
resto da i-ésima divisão vai ser o dígito i do número binário (da direita para a esquerda).
Por exemplo: 12 / 2 = 6, resto 0 (1o dígito da direita para esquerda), 6 / 2 = 3, resto 0 (2o dígito da
direita para esquerda), 3 / 2 = 1 resto 1 (3o dígito da direita para esquerda), 1 / 2 = 0 resto 1 (4o
dígito da direita para esquerda). Resultado: 12 = 1100
Escreva um método recursivo Dec2Bin (int decimal) que dado um número decimal imprima a sua representação binária corretamente */

void Dec2Bin (int decimal) {

    if(decimal ==1){
    printf("1");
    }else{
    Dec2Bin(decimal/2);//a ordem importa na chamada do resultado
    printf("%d", decimal%2);
    }
}

int main(){
    int decimal;
    printf("Informe um valor decimal para saber o binario: ");
    scanf("%d", &decimal);

     Dec2Bin(decimal);

    return 0;
}
