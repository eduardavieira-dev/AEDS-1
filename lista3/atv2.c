#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){

float valor, preco;
char est;
    printf("Informe o valor:");
    scanf("%f", &valor);
    getchar();

    printf("\nInforme a letra referente ao seu Estado: ");
    scanf("%c", &est);

    switch(est){
    case 'e':
        printf("ES");
        preco=valor*1.08;
        printf("\nValor: %.2f", preco);
    break;

    case 'm':
      printf("MG");
      preco=valor*1.07;
      printf("\nValor: %.2f", preco);
    break;

    case 's':
      printf("SP");
      preco=valor*1.12;
      printf("\nValor: %.2f", preco);
    break;

      case 'r':
      printf("RJ");
      preco=valor*1.15;
      printf("\nValor: %.2f", preco);
    break;

    default:
    printf("Estado invalido!");
    }


    return 0;
}
