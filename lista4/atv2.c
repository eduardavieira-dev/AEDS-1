#include <stdio.h>

int main(){
    int num;
    float cubo;

    do{
        printf("Digite um numero para saber o seu cubo: ");
        scanf("%d", &num);

    cubo= pow(num, 3);
    printf("Cubo = %.2f\n", cubo);

    }while(num %7!=0);


    return 0;
}
