#include <stdio.h>

// Função para calcular o Máximo Divisor Comum (MDC) de dois números
int mdc(int a, int b) {
    // Enquanto b não for zero
    while (b != 0) {
        // Armazena o valor de b em uma variável temporária
        int temp = b;
        // b recebe o resto da divisão de a por b
        b = a % b;
        // a recebe o valor antigo de b
        a = temp;
    }
    // Quando b for zero, a contém o MDC
    return a;
}

// Função para calcular o Mínimo Múltiplo Comum (MMC) de dois números
int mmc(int a, int b) {
    // MMC é calculado pela fórmula: (a * b) / MDC(a, b)
    return (a * b) / mdc(a, b);
}

// Função para calcular o MDC de três números
int mdc_tres(int a, int b, int c) {
    // O MDC de três números é o MDC do MDC dos dois primeiros números com o terceiro
    return mdc(mdc(a, b), c);
}

int main() {
    int opcao;
    int num1, num2, num3;


    do {

        printf("Menu de opções:\n");
        printf("1) Calcular MMC\n");
        printf("2) Calcular MDC\n");
        printf("3) Sair do programa\n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao);

        // Verifica a opção escolhida
        switch (opcao) {
            case 1: // Caso 1: Calcular MMC
                printf("Digite os 2 numeros: ");
                scanf("%d %d", &num1, &num2); // Lê o primeiro número

                // Calcula e exibe o MMC dos dois números
                printf("MMC de %d e %d eh: %d\n", num1, num2, mmc(num1, num2));
                break;

            case 2: // Caso 2: Calcular MDC
                printf("Digite os 3 numeros ");
                scanf("%d %d %d", &num1 ,&num2, &num3); // Lê o primeiro número

                // Calcula e exibe o MDC dos três números
                printf("MDC de %d, %d e %d eh: %d\n", num1, num2, num3, mdc_tres(num1, num2, num3));
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 3); // O loop continua enquanto a opção não for 3

    return 0;
}
