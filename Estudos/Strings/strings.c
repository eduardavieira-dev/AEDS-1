#include <stdio.h>

int main(){
    char nome[61];
    printf("Digite seu nome(completo): ");
    fgets(nome, 61, stdin);
    puts(nome);
    printf("fgets, puts e stdin\n");

    printf("Digite seu nome(primeiro): ");
    scanf("%s", nome);
    printf("\n Nome: %s\n", nome);

    return 0;
}