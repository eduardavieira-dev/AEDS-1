#include <stdio.h>

void imprime(int n){
    if(n<0){
        return;
    }else{
        printf("%d ", n);
        imprime(n-2);
    }

}


int main(){
    int n;
    printf("valor de n: ");
    scanf("%d", &n);

    imprime(n);

    return 0;
}
