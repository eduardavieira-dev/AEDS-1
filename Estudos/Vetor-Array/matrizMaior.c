#include <stdio.h>

int main() {

    int matriz[3][3] = {{10, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int linha, coluna;
    int max = matriz[0][0]; // Inicializa o maior valor com o primeiro elemento da matriz
    int maxLinha = 0, maxColuna = 0;


    printf("Matriz:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%3d ", matriz[linha][coluna]);
        }
        printf("\n");
    }


    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (matriz[linha][coluna] > max) {
                max = matriz[linha][coluna];
                maxLinha = linha;
                maxColuna = coluna;
            }
        }
    }

    printf("\nO maior numero eh %d e esta na linha %d e coluna %d.\n", max, maxLinha+1, maxColuna+1);

    return 0;
}
