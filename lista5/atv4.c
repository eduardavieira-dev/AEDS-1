#include <stdio.h>

// Fun��o que verifica se o n�mero � positivo
int ehpositivo(int num) {
    if (num > 0) { // Corrigido para verificar se o n�mero � positivo
        return 1; // Retorna 1 (true) se o n�mero for positivo
    } else {
        return 0; // Retorna 0 (false) se o n�mero n�o for positivo
    }
}

int main() {
    int n, num;

    printf("Quantos numeros voce quer ler? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um numero para saber se ele eh positivo: ");
        scanf("%d", &num);

        // Chama a fun��o ehpositivo e exibe a mensagem apropriada
        if (ehpositivo(num)) {
            printf("O numero %d eh positivo.\n", num);
        } else {
            printf("O numero %d eh negativo.\n", num);
        }
    }

    return 0;
}
