#include <stdio.h>

int main(){

    char texto[7]="string";
    char textoInvertido[7];
    printf("Valor da variavel texto= %s\n", texto);

    for(int i=0; i<6; i++){
     printf("Valor do elemento %d da string= %c\n",i, texto[i]);
    }
    printf("\n");
    for(int i=6-1, j=0; i>=0; i--, j++){
        //Eh usado n-1 pq ele pega o ultimo indice do vetor
        textoInvertido[j]=texto[i];
        // printf("%c", texto[i]);
        printf("Valor do elemento %d da string= %c\n",i, texto[i]);
        
    }

    printf("Valor da variavel texto invertida = %s\n", textoInvertido);
    

    return 0;
}