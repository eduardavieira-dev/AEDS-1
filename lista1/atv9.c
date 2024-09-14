9. Guilhermino Papo-de-Pescador, homem de bem, comprou um microcomputador para
controlar o rendimento diário de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de
pesca do estado de Minas Gerais (50 quilos) deve pagar uma multa de R$ 4,00 por quilo
excedente.
Guilhermino precisa que você faça um programa que leia a variável peso (peso de peixes)
e calcule o excesso.
Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor
da multa que Guilhermino deverá pagar. Imprima os dados do programa com as mensagens
adequadas.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, limite=50.0, valorKg=4.0, multa, excesso;
      printf("Quantos quilos de peixe foram pesados: ");
      scanf("%f", &peso);

      if(peso>limite){

        excesso= peso - limite;
        multa = valorKg*excesso;

      printf("Houve um excesso de %.2f kg", excesso);
      printf("Voce tem um multa de %.2f reais", multa);

      }else{
        printf("Não há excesso de peso. Nenhuma multa a pagar.\n");
      }


    return 0;
}