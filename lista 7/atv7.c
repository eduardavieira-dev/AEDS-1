#include <stdio.h>
#include <stdlib.h>

int main(){
    float numeros[5];
    float dobro[5];


    for(int i=0; i<5; i++){
        printf("\nENTRE UM VALOR ");
        scanf("%f", &numeros[i]);
        dobro[i]=numeros[i]*2;


    }
    for(int i = 0; i < 5; i++){
     printf(" %.0f ", numeros[i]);

    }
    printf("\n\n");
      for(int i = 0; i < 5; i++){
         printf(" %.0f ", dobro[i]);
      }



    return 0;
}
