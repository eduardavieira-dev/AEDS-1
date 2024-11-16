#include <stdio.h>

int main() {
    int N[10];   // Vetor para armazenar os resultados
    int num;


    //printf("Digite um numero menor que 50 para iniciar o vetor dobrado: ");
    scanf("%d", &num);

 
   // while (num >= 50) {
   //     printf("Numero invalido. Por favor, digite um numero menor que 50: ");
   //     scanf("%d", &num);
    //}

    // Preenchimento do vetor com o dobro do valor anterior
    for (int i = 0; i < 10; i++) {
        N[i] = num;
        num *= 2; 
    }

    
    //printf("\nResultado do vetor com valores dobrados:\n");
    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
