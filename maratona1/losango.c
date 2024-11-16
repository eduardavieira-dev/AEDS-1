#include <stdio.h>

int main() {
    int i, j, rows;

    // Lê o número de linhas diretamente
    ///printf("Digite o número de linhas: ");
    scanf("%d", &rows);

    // Metade superior do losango
    for (i = 1; i <= rows; i++) {
        // Imprime espaços
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
        // Imprime espaços
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Imprime asteriscos
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");  // Vai para a próxima linha
 
    }

    return 0;
}
