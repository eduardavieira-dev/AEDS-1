#include <stdio.h>

void Dec2Bin (int decimal) {

    if(decimal ==1){
    printf("1");
    }else{
    Dec2Bin(decimal/2);//a ordem importa na chamada do resultado
    printf("%d", decimal%2);
    }
}

int main(){
    int decimal;
    printf("Informe um valor decimal para saber o binario: ");
    scanf("%d", &decimal);

     Dec2Bin(decimal);

    return 0;
}
