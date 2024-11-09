#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int tamanho = 10;
    int pos = 0;
    char c;

    // Aloca um espaco inicial pequeno
    str = (char *) malloc(tamanho * sizeof(char));
    if (!str) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite uma string (enter para finalizar):\n");

    while ((c = getchar()) != '\n') {
        // Redimensiona a memoria se o tamanho atual for atingido
        if (pos >= tamanho - 1) {
            tamanho *= 2;
            str = (char *) realloc(str, tamanho * sizeof(char));
            if (!str) {
                printf("Erro ao redimensionar a mem�ria.\n");
                return 1;
            }
        }
        str[pos++] = c;
    }

    str[pos] = '\0'; // Adiciona o caractere nulo para finalizar a string

    printf("Voce digitou: %s\n", str);

    free(str);
    return 0;
}
