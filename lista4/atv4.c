#include <stdio.h>

int main(){
    float op=0;
    int s, v;
     printf("Informe o valor do saldo:");
     scanf("%d", &s);
    printf("Informe o valor a ser depositado\n se o valor for maior que o saldo\ne o valor a ser retirado se o saldo for menor que o valor:");
     scanf("%d", &v);
    if(s>v){
    op=s-v;
     printf("Saldo: %.2f", op);
    }else if(s<v){
    op=s+v;
    printf("Saldo: %.2f", op);
    }


    return 0;
}
