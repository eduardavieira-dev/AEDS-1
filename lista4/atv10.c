#include <stdio.h>

//VALOR DA SERIE

int main() {
    float soma=0;
    float n, j;

    printf("Vezes que o programa ira rodar: ");
    scanf("%f", &n);
    //o j vai somar a parte de baixo
    //o i vai rodar quantidade de vezes que coloquei n
    j=1;
    for(int i=1; i<=n; i++, j+=2){
        if(i % 2==0){
        //vai verificar se esta numa posição par
        soma-= 4/j;

        }else{
        soma+= 4/j;
        }
 }

    printf("%.4f", soma);

return 0;
}
