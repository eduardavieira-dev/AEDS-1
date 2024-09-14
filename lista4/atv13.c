#include <stdio.h>

int main(){
    int  idade=0, qtoFilhos=0, filho=0, maior=0, maior20=0;
    float mpop, num=0, idades=0, filhos=0, mfilho=0, maiorIdade=0, maiores20=0;

    do{
    printf("Informe sua idade:");
    scanf("%d", &idade);
    do{
        printf("Informe a quantidade de filhos:");
        scanf("%d", &filho);
        if(filho>=0){
        filhos+=filho;
        }
        else printf("Qtd invalida\n");
    }while(filho<0 && idade>0);




    if(idade>=0){

    idades+=idade;

    }

    if(idade>maior){
        maior=idade;
    }

    if(idade>=20){
        maior20++;
    }


     num++;


    }while(idade>0);

    num--;

    maiores20= maior20/num*100.0;

    mfilho = filhos/num;

    mpop= idades/num;

    printf("Media de filhos: %.2f\n", mfilho);

    printf("Media da idade da populacao: %.2f\n", mpop);

    printf("Maior idade: %d\n", maior);

    printf("Maiores de 20 anos: %f /100\n", maiores20);

    return 0;
}
