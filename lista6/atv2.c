#include <stdio.h>

/* 02. Faça uma função recursiva para calcular a potência entre dois números inteiros x e y (pot = xy).
Não use a função pow ( ) pronta do C */

float pot(int n, int p){

    if(p==0){
    return 1;
    }

    else{
    return n * pot(n, p-1);
    }

}

int main(){
    int n,p;
    printf("Informe o valor de n que deseja elevar: ");
    scanf("%d", &n);

    printf("Informe o valor potencia: ");
    scanf("%d", &p);



    printf("Potenciacao: %f", pot(n, p));

    return 0;
}
