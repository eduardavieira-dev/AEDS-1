#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheValores(int vetor[], int length) {
    for (int i = 0; i < length; i++) {
        vetor[i] = (rand() % 21) - 10; // Gera números entre -10 e 10
    }
}

void copiaNegativos(int vetor[], int length, int vetorNeg[]) {
    int j = 0; // Contar negativos

    for (int i = 0; i < length; i++) {
        if (vetor[i] < 0) {
            vetorNeg[j] = vetor[i];
            j++;
            if (j == 10) {
                break;
            }
        }
    }


    while (j < 10) {
        vetorNeg[j] = 0;
        j++;
    }
}

int main() {
    int vetor[10];
    int vetorNegativos[10];

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Preenche o vetor com valores aleatórios
    preencheValores(vetor, 10);

    // Copia os negativos para um novo vetor
    copiaNegativos(vetor, 10, vetorNegativos);

    // Imprime o vetor original
    printf("Vetor original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Imprime os números negativos
    printf("Numeros negativos encontrados: ");
    for (int i = 0; i < 10; i++) {
        if (vetorNegativos[i] != 0) { // Imprime apenas se não for 0
            printf("%d ", vetorNegativos[i]);
        }
    }
    printf("\n");

    return 0;
}
