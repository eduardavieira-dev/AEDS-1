#include <stdio.h>

int main() {
    int i, j, rows;

    // L� o n�mero de linhas diretamente
    printf("Digite o numero de linhas: ");
    scanf("%d", &rows);

    // Metade superior do losango
    for (i = 1; i <= rows; i++) {
        // Imprime espa�os
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Imprime asteriscos
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");  // Adiciona uma linha extra em branco
    }

    // Metade inferior do losango
    for (i = rows - 1; i >= 1; i--) {
        // Imprime espa�os
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Imprime asteriscos
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");  // Vai para a pr�xima linha

    }

    return 0;
}
