#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha, coluna;
    int max, min, minLinha=0, maxLinha = 0, minColuna=0, maxColuna = 0;


    printf("Digite os valores da matriz 3x3:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Elemento [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // Inicializar o maior valor com o primeiro elemento da matriz após a leitura
    max = matriz[0][0];
    min = matriz[0][0];

    // Exibindo a matriz
    printf("\nMatriz:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%3d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    //Maior
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (matriz[linha][coluna] > max) {
                max = matriz[linha][coluna];
                maxLinha = linha;
                maxColuna = coluna;
            }
        }
    }

    //Menor
       for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (matriz[linha][coluna] < min) {
                max = matriz[linha][coluna];
                maxLinha = linha;
                maxColuna = coluna;
            }
        }
    }

    // Exibindo o maior número e sua posição (incremento de 1 para exibir em formato humano)
    printf("\nO maior numero eh %d e esta na linha %d e coluna %d.\n", max, maxLinha + 1, maxColuna + 1);
    printf("\nO menor numero eh %d e esta na linha %d e coluna %d.\n", min, minLinha + 1, minColuna + 1);

    return 0;
}
