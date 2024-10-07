#include <stdio.h>

// Funcao para calcular o M�ximo Divisor Comum (MDC) de dois numeros
int mdc(int a, int b) {
    // Enquanto b nao for zero
    while (b != 0) {
        // Armazena o valor de b em uma variavel tempororia
        int temp = b;
        // b recebe o resto da divis�o de a por b
        b = a % b;
        // a recebe o valor antigo de b
        a = temp;
    }
    // Quando b for zero, a cont�m o MDC
    return a;
}

// Funcao para calcular o Minimo Multiplo Comum (MMC) de dois n�meros
int mmc(int a, int b) {
    // MMC � calculado pela f�rmula: (a * b) / MDC(a, b)
    return (a * b) / mdc(a, b);
}

// Fun��o para calcular o MDC de tres numeros
int mdc_tres(int a, int b, int c) {
    // O MDC de tr�s n�meros � o MDC do MDC dos dois primeiros n�meros com o terceiro
    return mdc(mdc(a, b), c);
}

int main() {
    int opcao;
    int num1, num2, num3;


    do {

        printf("Menu de opcoes:\n");
        printf("1) Calcular MMC\n");
        printf("2) Calcular MDC\n");
        printf("3) Sair do programa\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        // Verifica a opcao escolhida
        switch (opcao) {
            case 1: // Caso 1: Calcular MMC
                printf("Digite os 2 numeros: ");
                scanf("%d %d", &num1, &num2); // La o primeiro numero

                // Calcula e exibe o MMC dos dois n�meros
                printf("MMC de %d e %d eh: %d\n", num1, num2, mmc(num1, num2));
                break;

            case 2: // Caso 2: Calcular MDC
                printf("Digite os 3 numeros ");
                scanf("%d %d %d", &num1 ,&num2, &num3); // La o primeiro numero

                // Calcula e exibe o MDC dos tr�s n�meros
                printf("MDC de %d, %d e %d eh: %d\n", num1, num2, num3, mdc_tres(num1, num2, num3));
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 3); // O loop continua enquanto a opcao nao for 3

    return 0;
}
