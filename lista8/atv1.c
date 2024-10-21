#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[70];
    char nomeInvertido[70];

    printf("Escreva um nome: ");
    fgets(nome, 70, stdin);
    //stdin é a leitura do teclado padrão
    int n = strlen(nome);
    //pega exatamente a quantidade de letras que eu digitei, e não necessariamente 70

    for(int i=n-1, j=0; i>=0; i--, j++){
        //é usado n-1 pq ele pega o ultimo indice do vetor
        nomeInvertido[j]=nome[i];
        printf("%c", nome[i]);
    }


    return 0;
}
