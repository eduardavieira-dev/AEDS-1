#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){
    float km, max, per, per10;

    printf("A quantos km/h o motorista estava dirigindo? ");
    scanf("%f", &km);
    printf("Qual era a velocidade maxima permitida?");
    scanf("%f", &max);

    per= max+10;
    per10 = max+30;

   if(km<=max)
   {
    printf("Motorista respeitou a lei");
   }
   else if(km>max && km<per)
   {
    printf("O motorista deverá pagar 50 reais ultrapassou ate 10km do limite");

   }else if(km>=per && km<=per10)
   {
    printf("O motorista deverá pagar 100 reais ultrapassou de 11km a 30km da velocidade");

   }else if(km>per10)
   {
    printf("O motorista deverá pagar 200 reais ultrapassou mais de 30km da velocidade permitida");
    
   }

    return 0;
}
