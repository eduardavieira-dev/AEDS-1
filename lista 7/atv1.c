#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//ACHAR A POSIÇÃO DOS VETORES

int main(void){

    //declarar vetor
    int numeros[20];
    int procurar = 0;

    //random
    srand(time(0));

    printf("Nums aleatorios");

    for(int i=0; i<20; i++){
        numeros[i]= rand() %100;
        printf(" %i", numeros[i]);
    }

    printf("\nENTRE UM VALOR A PROCURAR ");
    scanf("%d", &procurar);

    //mostrar os indices onde ocorre
    for(int i=0; i<20; i++){
        if(numeros[i]==procurar){
            printf("Numero do indice: %d", i);
        }
    }
    return 0;
}
