#include <stdio.h>

int main() {
    int n;

    // Solicita o número de asteriscos na linha central (n = 5)
    scanf("%d", &n);

    // Parte superior do losango
    for (int i = 1; i <= n; i += 2) {  // Aumenta de 2 em 2 (1, 3, 5)
        // Imprime os espaços à esquerda
        for (int j = 1; j <= (n - i) / 2; j++) {
            printf(" ");
        }
        // Imprime os asteriscos
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Pula para a próxima linha
        printf("\n");
    }

    // Parte inferior do losango
    for (int i = n - 2; i >= 1; i -= 2) {  // Diminui de 2 em 2 (3, 1)
        // Imprime os espaços à esquerda
        for (int j = 1; j <= (n - i) / 2; j++) {
            printf(" ");
        }
        // Imprime os asteriscos
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Pula para a próxima linha
        printf("\n");
    }

    return 0;
}
