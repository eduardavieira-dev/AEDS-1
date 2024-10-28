/* 
* 8. Escreva um programa em C que declare variáveis para armazenar um valor inteiro, um valor
* real e um caracter. Deve existir no programa ponteiros associados a cada um deles. O
* programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando
* os respectivos ponteiros. Exiba os endereços e os conteúdos de todas as variáveis e ponteiros
* antes e após a alteração
*/

#include <stdio.h>

int main() {
    // Declaração das variáveis
    int valorInteiro;
    float valorReal;
    char caracter;

    // Declaração dos ponteiros
    int *ptrInteiro = &valorInteiro;
    float *ptrReal = &valorReal;
    char *ptrChar = &caracter;

    // Exibindo os endereços e os valores iniciais
    printf("-Antes da alteracao---------------\n");
    printf("Inteiro: Endereco = %p, Valor = %d\n", (void*)ptrInteiro, *ptrInteiro);
    printf("Real: Endereco = %p, Valor = %.2f\n", (void*)ptrReal, *ptrReal);
    printf("Caractere: Endereco = %p, Valor = %c\n", (void*)ptrChar, *ptrChar);

    // Solicitando novos valores ao usuário
    printf("\nDigite um novo valor inteiro: ");
    scanf("%d", ptrInteiro);

    printf("Digite um novo valor real: ");
    scanf("%f", ptrReal);

    printf("Digite um novo caractere: ");
    scanf(" %c", ptrChar); // Espaço antes de %c para ignorar o Enter anterior

    // Exibindo os endereços e os valores após a alteração
    printf("\n-Depois da alteracao---------------\n");
    printf("Inteiro: Endereco = %p, Valor = %d\n", (void*)ptrInteiro, *ptrInteiro);
    printf("Real: Endereco = %p, Valor = %.2f\n", (void*)ptrReal, *ptrReal);
    printf("Caractere: Endereco = %p, Valor = %c\n", (void*)ptrChar, *ptrChar);

    return 0;
}
