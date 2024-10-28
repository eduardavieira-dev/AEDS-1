/* 
* 12. Escreva um programa que leia do teclado um valor n. Instancie, usando o comando malloc,
* uma matriz de números em ponto flutuante Mn×n. Preencha a matriz com valores aleatórios e
* imprima seus elementos
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    float **M;

    // Lê o valor de n
    printf("Digite o valor de n para criar uma matriz n x n: ");
    scanf("%d", &n);

    // Aloca a matriz usando malloc
    M = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++) {
        M[i] = (float *)malloc(n * sizeof(float));
    }

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche a matriz com valores aleatórios e imprime os elementos
    printf("Matriz %d x %d com valores aleatórios:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = (float)rand() / RAND_MAX * 100;  // Gera números aleatórios entre 0 e 100
            printf("%.2f\t", M[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < n; i++) {
        free(M[i]);
    }
    free(M);

    return 0;
}
