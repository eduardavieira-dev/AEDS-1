#include <stdio.h>

void imprime(int n) {
    if(n<=0){
        return;
    }else{
        printf("%d", n);
        imprime(n-2);
    }
}

int main(){

    int n;


    do{

    printf("Digite um numero: ");
    scanf("%d", &n);


    }while(n%2 || n==0 || n<0);

        imprime(n);


    return 0;
}
