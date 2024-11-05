#include <stdio.h>
#include <stdlib.h>

void escreve(int *numeros, int num){
    int i;
    printf("Numeros lidos:");
    for (int i=0; i<num; i++)
        printf("%d, ",numeros[i]);
    printf("\n");

}


int main(){
    /*Slide*/
    int *valor;
    int n;

    printf("Qual o tamanho do vetor?");
    scanf("%d", &n);

    valor = malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &valor[i]);
    }

    for (int i=0; i<n; i++){
        printf("%d", valor[i]);
    }

    free(valor);


    /*YouTube*/
    /*Fazem a mesma coisa so que esse usa um void*/
    int *numeros;
    int num, i;

    printf("Quantos números deseja armazenar? ");
    scanf("%d", &num);

    numeros = malloc(num * sizeof(int));
    if(numeros == NULL){
        printf("Socorro, malloc retornou null!");
        exit(1);
    }
    for(i=0; i<num; i++){
        printf("Numero %d: ", i);
        scanf("%d", &numeros[i]);
    }

    escreve(numeros, num);

    free(numeros);



    return 0;
}
