3. Escreva um programa onde serão fornecidos como entrada de dados dois valores inteiros,
calcule e imprima a soma, o produto, a diferença, o quociente destes números.


#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2,soma, pro, dif, quo;

    printf("Digite 2 numeros :");
    scanf("%f%f", &n1, &n2);

    soma = n1+n2;
    pro = n1*n2;
    dif = n1-n2; 
    quo = n1/n2;

    printf("\n- Soma: %.2f\n - Produto : %.2f\n - Diferença: %.2f\n - Quociente: %.2f\n", soma, pro, dif, quo);
    return 0;
}

