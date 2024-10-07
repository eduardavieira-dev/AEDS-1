#include <stdio.h>

// Fun��o para calcular o produt�rio de 1 at� N
int produtorio(int N) {
    int resultado = 1;
    for (int i = 1; i <= N; i++) {
        resultado *= i;
    }
    return resultado;
}

// Fun��o para imprimir a tabuada de 3, 5 e 7
void tabuada() {
    for (int i = 1; i <= 10; i++) {
        printf("3 x %d = %d\n", i, 3 * i);
        printf("5 x %d = %d\n", i, 5 * i);
        printf("7 x %d = %d\n", i, 7 * i);
    }
}

// Fun��o para calcular a soma da s�rie S
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

// Fun��o para encontrar o quinto n�mero primo a partir de 1000
int quinto_primo() {
    int count = 0; // Contador de n�meros primos encontrados
    int num = 1001; // Come�a a verificar a partir de 1001

    // Enquanto n�o encontrarmos 5 n�meros primos
    while (count < 5) {
        int is_primo = 1; // Assume que o n�mero atual � primo

        // Verifica se 'num' � primo
        for (int i = 2; i * i <= num; i++) { // Testa divisores de 2 at� a raiz quadrada de 'num'
            if (num % i == 0) { // Se 'num' for divis�vel por 'i'
                is_primo = 0; // N�o � primo
                break; // Sai do loop, pois j� sabemos que n�o � primo
            }
        }

        // Se 'num' � primo, incrementa o contador
        if (is_primo) {
            count++; // Aumenta o contador de primos encontrados
        }
        num++; // Verifica o pr�ximo n�mero
    }

    return num - 1; // Retorna o �ltimo n�mero encontrado, que � o quinto primo
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
            printf("Digite o numero N: ");
            scanf("%d", &N);
            printf("O produtorio de 1 at� %d �: %d\n", N, produtorio(N));
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
