#include <stdio.h>

// Fun��o para calcular o M�ximo Divisor Comum (MDC) de dois n�meros
int mdc(int a, int b) {
    // Enquanto b n�o for zero
    while (b != 0) {
        // Armazena o valor de b em uma vari�vel tempor�ria
        int temp = b;
        // b recebe o resto da divis�o de a por b
        b = a % b;
        // a recebe o valor antigo de b
        a = temp;
    }
    // Quando b for zero, a cont�m o MDC
    return a;
}

// Fun��o para calcular o M�nimo M�ltiplo Comum (MMC) de dois n�meros
int mmc(int a, int b) {
    // MMC � calculado pela f�rmula: (a * b) / MDC(a, b)
    return (a * b) / mdc(a, b);
}

// Fun��o para calcular o MDC de tr�s n�meros
int mdc_tres(int a, int b, int c) {
    // O MDC de tr�s n�meros � o MDC do MDC dos dois primeiros n�meros com o terceiro
    return mdc(mdc(a, b), c);
}

int main() {
    int opcao;
    int num1, num2, num3;


    do {

        printf("Menu de op��es:\n");
        printf("1) Calcular MMC\n");
        printf("2) Calcular MDC\n");
        printf("3) Sair do programa\n");
        printf("Escolha uma op��o: ");

        scanf("%d", &opcao);

        // Verifica a op��o escolhida
        switch (opcao) {
            case 1: // Caso 1: Calcular MMC
                printf("Digite os 2 numeros: ");
                scanf("%d %d", &num1, &num2); // L� o primeiro n�mero

                // Calcula e exibe o MMC dos dois n�meros
                printf("MMC de %d e %d eh: %d\n", num1, num2, mmc(num1, num2));
                break;

            case 2: // Caso 2: Calcular MDC
                printf("Digite os 3 numeros ");
                scanf("%d %d %d", &num1 ,&num2, &num3); // L� o primeiro n�mero

                // Calcula e exibe o MDC dos tr�s n�meros
                printf("MDC de %d, %d e %d eh: %d\n", num1, num2, num3, mdc_tres(num1, num2, num3));
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 3); // O loop continua enquanto a op��o n�o for 3

    return 0;
}
