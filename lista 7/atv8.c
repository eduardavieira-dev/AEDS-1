#include <stdio.h>

int main() {
    int A[10], B[10];

    // Lê o vetor A
    printf("Digite 10 elementos para o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Lê o vetor B, rejeitando valores iguais a A
    printf("Digite 10 elementos para o vetor B (não pode ser igual a A):\n");
    for (int i = 0; i < 10; i++) {
        do {
            printf("Elemento B[%d]: ", i);
            scanf("%d", &B[i]);
            if (B[i] == A[i]) {
                printf("Valor rejeitado. O elemento não pode ser igual a A[%d] (%d).\n", i, A[i]);
            }
        } while (B[i] == A[i]);
    }

    // Calcula e imprime a diferença entre A e B
    printf("\nDiferenças entre os elementos de A e B:\n");
    for (int i = 0; i < 10; i++) {
        printf("A[%d] - B[%d] = %d\n", i, i, A[i] - B[i]);
    }

    return 0;
}
