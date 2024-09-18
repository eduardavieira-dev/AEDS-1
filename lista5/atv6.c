#include <stdio.h>

// Função para calcular o produtório de 1 até N
int produtorio(int N) {
    int resultado = 1;
    for (int i = 1; i <= N; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função para imprimir a tabuada de 3, 5 e 7
void tabuada() {
    for (int i = 1; i <= 10; i++) {
        printf("3 x %d = %d\n", i, 3 * i);
        printf("5 x %d = %d\n", i, 5 * i);
        printf("7 x %d = %d\n", i, 7 * i);
    }
}

// Função para calcular a soma da série S
int serie() {
    int a = 1, b = 1, c, soma = 2; // Inicia com os dois primeiros termos (1 + 1)
    for (int i = 3; i <= 8; i++) {
        c = a + b;
        soma += c;
        a = b;
        b = c;
    }
    return soma;
}

// Função para encontrar o quinto número primo a partir de 1000
int quinto_primo() {
    int count = 0; // Contador de números primos encontrados
    int num = 1001; // Começa a verificar a partir de 1001

    // Enquanto não encontrarmos 5 números primos
    while (count < 5) {
        int is_primo = 1; // Assume que o número atual é primo

        // Verifica se 'num' é primo
        for (int i = 2; i * i <= num; i++) { // Testa divisores de 2 até a raiz quadrada de 'num'
            if (num % i == 0) { // Se 'num' for divisível por 'i'
                is_primo = 0; // Não é primo
                break; // Sai do loop, pois já sabemos que não é primo
            }
        }

        // Se 'num' é primo, incrementa o contador
        if (is_primo) {
            count++; // Aumenta o contador de primos encontrados
        }
        num++; // Verifica o próximo número
    }

    return num - 1; // Retorna o último número encontrado, que é o quinto primo
}

int main() {
    int opcao;

    printf("Escolha uma opcao:\n");
    printf("1) Calcular o produtorio de 1 ate N\n");
    printf("2) Imprimir a tabuada de 3, 5 e 7\n");
    printf("3) Calcular o valor final da serie S\n");
    printf("4) Encontrar o quinto numero primo a partir de 1000\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            int N;
            printf("Digite o número N: ");
            scanf("%d", &N);
            printf("O produtorio de 1 até %d é: %d\n", N, produtorio(N));
            break;
        }
        case 2:
            tabuada();
            break;
        case 3:
            printf("O valor final da serie S eh: %d\n", serie());
            break;
        case 4:
            printf("O quinto numero primo a partir de 1000 eh: %d\n", quinto_primo());
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
