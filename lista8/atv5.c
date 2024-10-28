/* 
* 5. Escreva um programa que, a partir de um nome informado pelo usuário, exiba suas iniciais.
* As iniciais são formadas pela primeira letra de cada nome, sendo que todas deverão aparecer
* em maiúsculas na saída do programa. Note que os conectores e, do, da, dos, das, de, di, du
* não são considerados nomes e, portanto, não devem ser considerados para a obtenção das
* iniciais. As iniciais devem ser impressas em maiúsculas, ainda que o nome seja entrado todo
* em minúsculas. Exemplos:
*   José Carlos Souza => JCS
*   Nome do Fulano => NF
*   Heloísa Martins Vieira => HMV
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int eh_conector(char palavra[]) {
    // Lista de conectores que devem ser ignorados
    char* conectores[] = {"e", "do", "da", "dos", "das", "de", "di", "du", "Da", "Das", "Dos", "Do"};
    int num_conectores = sizeof(conectores) / sizeof(conectores[0]);

    for (int i = 0; i < num_conectores; i++) {
        if (strcmp(palavra, conectores[i]) == 0) {
            return 1; // É um conector
        }
    }
    return 0; // Não é um conector
}

int main() {
    char nome[100], palavra[20];
    int j = 0;

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Iniciais: ");

    for (int i = 0; i <= strlen(nome); i++) {
        // Quando encontrar espaço ou o final da string, processa a palavra
        if (nome[i] == ' ' || nome[i] == '\0' || nome[i] == '\n') {
            palavra[j] = '\0';  // Finaliza a palavra
            j = 0;              // Reinicia o índice para a próxima palavra

            // Verifica se a palavra não é um conector e imprime a inicial pois não usa um for p/ imprimir caractere por caractere
            if (!eh_conector(palavra) && palavra[0] != '\0') {
                printf("%c", toupper(palavra[0]));
            }

        } else {
            palavra[j++] = nome[i]; // Constrói a palavra atual
        }
    }

    printf("\n");
    return 0;
}
