#include <stdio.h>

float serie(float n){
     if(n==2){
        return 0.5;
     }
     else{
     return (n-1)/n+ serie(n-2);
     }
}

int main(){
    int n;

    do{
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    }while(n%2!=0);

    printf("Serie: %f", serie(n));
    return 0;
}
