#include <stdio.h>
//CONDICIONAIS

int main(){
    int fixo=100, age, valor;


    printf("Quantos anos a pessoa tem? ");
    scanf("%d", &age);
    if(age<10){
        valor= fixo+180;
        printf("Valor a ser pago: %d", valor);
     }else if(age>=10 && age<=30){
        valor= fixo+150;
        printf("Valor a ser pago: %d", valor);
     }else if(age>30 && age<=60){
        valor= fixo+195;
        printf("Valor a ser pago: %d", valor);
     }else if(age>60){
        valor= fixo+230;
        printf("Valor a ser pago: %d", valor);
     }



    return 0;
}
