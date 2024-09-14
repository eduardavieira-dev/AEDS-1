#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Atividade em Sala*/

int main() {
    int i, n, qtd, fatorial;

    printf("Quantas vezes voce quer calcular o fatorial? ");
    scanf("%d", &qtd);


    for (i = 1; i <= qtd; i++) {
        printf("Insira um valor para o qual deseja calcular o fatorial: ");
        scanf("%d", &n);

        // Inicializa o fatorial com 1
        fatorial = 1;

        // Calcula o fatorial de n
        for (int j = 1; j <= n; j++) {
            fatorial *= j;
        }
        printf("Fatorial de %d = %d\n", n, fatorial);
    }

    return 0;
}
