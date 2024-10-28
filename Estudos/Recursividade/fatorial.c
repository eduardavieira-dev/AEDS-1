#include <stdio.h>

double fatorialRecursivo(int fat){
    if(fat == 0|| fat ==1){
        return 1;
    }else{
        return(fat*(fatorialRecursivo(fat-1)));
    }
}

int main(){

    int f;

    printf("Fatorial: ");
    scanf("%d", &f);

    double resultado = fatorialRecursivo(f);

    printf("Resultado: %0.lf", resultado);


    return 0;
}