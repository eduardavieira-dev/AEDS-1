#include <stdio.h>

int main(){

    int a, b, c;

    printf("Informe 3 numeros para saber se o terceiro e divisvel pelos primerios: ");
    scanf("%d %d %d", &a, &b, &c);

    if(c %a==0 && c %b==0){
    printf("Divisivel por ambos");
    }else if(c %a==0 || c %b==0){
    printf("Divisivel por um");
    }else if(c %a!=0 || c %b!=0){
        printf("Nao divisivel ");
    }else if(a<=0||b<=0){
    printf("Valores invalidos");
    }

    return 0;
}
