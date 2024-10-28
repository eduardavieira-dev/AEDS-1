#include <stdio.h>

void binario(int decimal){
    if(decimal==1){
        printf("1");
    }else{
        binario(decimal/2);
        printf("%d", decimal%2);
    }
}


int main(){

    int num;
    printf("Informe um numero para converte-lo em binario: ");
    scanf("%d", &num);

    binario(num);

    return 0;
}