#include <stdio.h>

int main(){
    int pessoas=0, acima=0;
    float peso=0, soma=0, media=0, pmais=0;
    for
        (int i=1; i<=5; i++){

     printf("Informe o peso: ");
     scanf("%f", &peso);
     if(peso>60){
     soma+=peso;
     acima++;
     }
     if(peso>pmais){
        pmais=peso;
     }
    }


     media= soma/acima;
     printf("\n Media acima de 60= %.2f", media);

      printf("\nMaior peso: %.2f", pmais);



    return 0;
}
