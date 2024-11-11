/*
* 13. Escreva um programa para preencher uma matriz M4×4. Em seguida apresente na tela:
a) a soma dos elementos abaixo da diagonal principal;
b) os elementos da diagonal principal.
*/

#include <stdio.h>

int main() {
    int M[4][4], soma_abaixo_diagonal = 0;

    // Preenchendo a matriz 4x4
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
            // Soma dos elementos abaixo da diagonal principal
            if (i > j) soma_abaixo_diagonal += M[i][j];
        }
    }

     for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

         printf("%3d", M[i][j]);
        }
        printf("\n");
    }

    // Exibindo a soma dos elementos abaixo da diagonal principal
    printf("\nSoma dos elementos abaixo da diagonal principal: %d\n", soma_abaixo_diagonal);

    // Exibindo os elementos da diagonal principal
     printf("Elementos da diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", M[i][i]);
    }
    printf("\n");

    printf("Elementos da diagonal secundaria: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", M[i][4-1-i]);
    }

    return 0;
}
