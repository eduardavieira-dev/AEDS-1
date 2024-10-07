#include <stdio.h>
#include <stdlib.h>

//TROCAR VALORES DO VETOR

int main(void){

    int numeros[5];
    int menor;
    int indiceMaior = 0;

    int temp;

    //prencher vetor
    for(int i=0; i<5; i++){
        printf("\nENTRE UM VALOR ");
        scanf("%i", &numeros[i]);
    }

        for(int i=0; i<5; i++){
        printf(" %d", numeros[i]);
        }

    menor = numeros[0];

     for(int i=1; i<5; i++){
        if(numeros[i]>menor){
        menor = numeros[i];
        indiceMaior=i;
        }
     }

    for(int i=1; i<5; i++){
         if(numeros[i]<menor){
            menor = numeros[i];
            indiceMaior=i;
         }
     }

    printf("\nA posicao do menor eh %d\n", indiceMaior);

    //troca o indice ma
    temp = numeros[0];
    numeros[0] = numeros[indiceMaior];
    numeros[indiceMaior]=temp;

        for(int i=0; i<5; i++){
        printf(" %d", numeros[i]);
        }


    return 0;
}
