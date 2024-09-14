#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){

    int num;


    printf("Informe o numero do mes: ");
    scanf("%d", &num);

    switch(num){
    case 1:
    printf("Janeiro");
    break;
    case 2:
    printf("Fevereiro");
    break;
    case 3:
    printf("Marco");
    break;
     case 4:
    printf("Abril");
    break;
     case 5:
    printf("Maio");
    break;
     case 6:
    printf("Junho");
    break;
     case 7:
    printf("Julho");
    break;
     case 8:
    printf("Agosto");
    break;
     case 9:
    printf("Setembro");
    break;
     case 10:
    printf("Outubro");
    break;
     case 11:
    printf("Novembro");
    break;
     case 12:
    printf("Dezembro");
    break;
    default:
    printf("Mes invalido!");
    }


    return 0;
}
