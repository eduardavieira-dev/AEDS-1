#include <stdio.h>

//FATORIAL

int main() {

    int n, fatorial;
    int fat;

    // Lê a quantidade de números
    printf("Quantos valores voce deseja ler? ");
    scanf("%d", &n);

    // Loop para processar cada número
    for (int i = 1; i <= n; i++) {
        printf("Digite um numero para saber seu fatorial: ");
        scanf("%d", &fatorial);

        fat = 1; // Inicializa o fatorial

        // Calcula o fatorial
        for (int j = 1; j <= fatorial; j++) {
            fat *= j;
        }

        // Exibe o número e o fatorial
        printf("Numero lido: %d \nFatorial: %d\n", fatorial, fat);
    }

    return 0;
}