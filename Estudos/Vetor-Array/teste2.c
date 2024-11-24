
#include <stdio.h>

void preencherMatriz(int M[5][5]) {
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
}

int somaLinha4(int M[5][5]) {
    int soma = 0;
    for (int j = 0; j < 5; j++) {
        soma += M[3][j];  // Linha 4 é o índice 3
    }
    return soma;
}

int somaColuna2(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][1];  // Coluna 2 é o índice 1
    }
    return soma;
}

int somaDiagonalPrincipal(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][i];
    }
    return soma;
}

int somaDiagonalSecundaria(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][4 - i];  // Índices da diagonal secundária
    }
    return soma;
}

int somaTotal(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma += M[i][j];
        }
    }
    return soma;
}

int main() {
    int M[5][5];

    preencherMatriz(M);

    printf("\nSoma da linha 4: %d\n", somaLinha4(M));
    printf("Soma da coluna 2: %d\n", somaColuna2(M));
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal(M));
    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria(M));
    printf("Soma de todos os elementos: %d\n", somaTotal(M));

    return 0;
}
