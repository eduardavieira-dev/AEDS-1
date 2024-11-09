#include <stdio.h>

int main() {
    int n;

    // Solicitar o tamanho da matriz
    printf("Digite o tamanho da matriz quadrada (n x n): ");
    scanf("%d", &n);

    int matriz[n][n];

    // Preencher a matriz com valores fornecidos pelo usuario
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir os elementos da diagonal principal
    printf("\nElementos da diagonal principal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    // Imprimir os elementos da diagonal secundaria
    printf("\nElementos da diagonal secundaria:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][n-1-i]);
    }
    printf("\n");

    // Imprimir a matriz completa
    printf("\nMatriz completa:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
