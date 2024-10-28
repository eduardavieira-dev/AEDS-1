/* 
* 6. Palíndromo. Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da
* direita para esquerda ou vice−versa. Por exemplo: OSSO e OVO são palíndromos. Em textos
* mais complexos os espaços e pontuação são ignorados. A frase SUBI NO ONIBUS é o
* exemplo de uma frase palíndroma onde os espaços foram ignorados. Faça um programa que
* leia uma sequência de caracteres, mostre−a e diga se é um palíndromo ou não
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    char cleaned[100]; // String para armazenar a versão limpa
    int j = 0; // Índice para a string limpa

    printf("Informe uma frase ou palavra para saber se eh um palindromo: ");
    fgets(nome, 100, stdin);
    
    // Mostra a entrada original
    printf("Entrada: %s", nome);

    // Passo 2: Limpar a entrada
    for (int i = 0; nome[i] != '\0'; i++) {
        if (isalnum(nome[i])) { // Verifica se o caractere é alfanumérico
            cleaned[j] = tolower(nome[i]); // Converte para minúscula
            j++; // Avança o índice da string limpa
        }
    }
    cleaned[j] = '\0'; // Adiciona o terminador de string

    // Passo 3: Verificar se é um palíndromo
    int len = strlen(cleaned);
    int is_palindrome = 1; // Supondo que é um palíndromo inicialmente

    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) {
            is_palindrome = 0; // Não é um palíndromo
            break;
        }
    }

    // Passo 4: Resultado
    if (is_palindrome) {
        printf("A entrada eh um palindromo.\n");
    } else {
        printf("A entrada nao eh um palindromo.\n");
    }

    return 0;
}
