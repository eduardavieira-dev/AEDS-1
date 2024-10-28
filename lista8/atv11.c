/* 
* 11. Desenvolva um programa que instancie um vetor de inteiros A utilizando malloc. O programa
* deve ler um valor k, onde k é positivo e menor que o tamanho do vetor (rejeite entradas
* inválidas). Implemente um procedimento que receba como parâmetros o vetor A, o tamanho
* do vetor |A| e o valor k. Retorne o k-ésimo menor elemento do vetor.
* Ex.: A = {3, 5, 7, 8 ,12, 14, 15, 16}, k = 3, retorno = 7
*/
#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois inteiros (usada no qsort)
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Procedimento para retornar o k-ésimo menor elemento
int k_esimo_menor(int *vetor, int tamanho, int k) {
    qsort(vetor, tamanho, sizeof(int), comparar); // Ordena o vetor em ordem crescente
    return vetor[k - 1]; // Retorna o elemento na posição k-1 (pois k é 1-based)
}

int main() {
    int tamanho, k;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Aloca o vetor dinamicamente
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    // Lê os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Lê o valor de k e valida
    do {
        printf("Digite um valor positivo para k, menor que o tamanho do vetor: ");
        scanf("%d", &k);
    } while (k <= 0 || k >= tamanho);

    // Exibe o k-ésimo menor elemento
    int resultado = k_esimo_menor(vetor, tamanho, k);
    printf("O %do menor elemento eh: %d\n", k, resultado);

    // Libera a memória alocada
    free(vetor);

    return 0;
}
