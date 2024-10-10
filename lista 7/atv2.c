#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numero;
    int nums[100];
    int contador = 0;

    srand(time(0));

    for(int i=0; contador<100; i++){
        numero = i;
        if(numero %6!=0 && numero %10!=6){
        nums[contador]= numero;
        contador++;
        }
    }

    for(int j=0; j<100; j++){
        printf(" %d", nums[j]);
    }


    return 0;
}
