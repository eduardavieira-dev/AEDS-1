#include <stdio.h>
#include <ctype.h>   // Para toupper e tolower
#include <string.h>  // Para manipulação de strings

int main() {
    char letra, letraMaiuscula, letraMinuscula;
    char palavra[20], palavraMaiuscula[20], palavraMinuscula[20];

    // Leitura da letra
    printf("Digite uma letra: ");
    scanf(" %c", &letra); // O espaço antes de %c ignora enter ou espaços anteriores

    // Leitura da palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Convertendo a letra para maiúscula e minúscula
    letraMaiuscula = toupper(letra);
    letraMinuscula = tolower(letra);

    // Convertendo a palavra para maiúscula e minúscula
    for (int i = 0; i < strlen(palavra); i++) {
        palavraMaiuscula[i] = toupper(palavra[i]);
        palavraMinuscula[i] = tolower(palavra[i]);
    }
    // Finaliza as strings
    palavraMaiuscula[strlen(palavra)] = '\0';
    palavraMinuscula[strlen(palavra)] = '\0';

    // Exibindo os resultados
    printf("\nResultados:\n");
    printf("Letra maiuscula: %c\n", letraMaiuscula);
    printf("Letra minuscula: %c\n", letraMinuscula);
    printf("Palavra maiuscula: %s\n", palavraMaiuscula);
    printf("Palavra minuscula: %s\n", palavraMinuscula);

    return 0;
}
