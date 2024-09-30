#include <stdio.h>

float raiz(float n, int impar){

    if(n<=0){
    return 0;

    }else{
        return 1+ raiz(n-impar, impar + 2);
    }

}

int main(){
    float n;

    printf("Informe o valor que quer saber as raizes: ");
    scanf("%f", &n);

    printf("Raiz= %.2f", raiz(n, 1));

    return 0;
}
