#include <stdio.h>

int main(){
    int pessoas;

    for
        (int j=1; j<=10; j++){

     printf("Quantas pessoas assistiram a essa partida? ");
    scanf("%d", &pessoas);

    if(pessoas<=1000){
    printf("\npublico baixo\n");

    }else if(pessoas>100 && pessoas<=10000){
     printf("\npublico medio\n");
    }else if(pessoas>10000){
     printf("\npublico bom\n");
    }

    }




    return 0;
}
