#include <stdio.h>
#include <math.h>

int main(){
    int quadrado, num;
    printf("Informe um numero para saber seu quadradado? ");
    scanf("%d", &num);

    // testa depois de rodar
  
    do{          

    quadrado = pow(num, 2);
    
        printf("Quadrado deste numero: %d\n", quadrado);
        
        printf("Informe um numero para saber seu quadradado? ");
        scanf("%d", &num);
        
    }while(num %6!=0);
    


    // testa primeiro
  /*   while(num %6!=0){
        printf("Informe um numero para saber seu quadradado?");
        scanf("%d", &num);
        
    quadrado = pow(num, 2);
        
        printf("Quadrado deste numero: %d\n", quadrado);
    } */

    return 0;
}
