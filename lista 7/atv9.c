#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade_aed[60];
    float media;
    int contador=0;
    float soma = 0;



    for(int i= 0; i<6; i++){
    printf("Informe a idade do aluno presente na aula de AEDS");
     scanf("%d", &idade_aed[i]);

     if (idade_aed[i] == 0) {
            break;
        }

     contador++;
     soma += idade_aed[i];
    }
     for(int i= 0; i<contador; i++){
        printf(" %d", idade_aed[i]);
        media = soma/contador;
     }
        printf("\n Media de idade= %.2f", media);
        printf("\n Idades acima da media: ");

     for(int i= 0; i<contador; i++){

            if(idade_aed[i]>media){
                 printf(" %d", idade_aed[i]);
            }
    }


    return 0;
}
