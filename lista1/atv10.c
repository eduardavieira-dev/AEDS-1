10. Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros
quadrados da área a ser pintada.
Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta
é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de
latas de tinta a serem compradas e o preço total.

#include <stdio.h>
#include <stdlib.h>

int main() {

  float m, lata, preco, mTinta, pLata = 80;

  printf("Qual o tamanho da area em metros quadrados a ser pintada? ");
  scanf("%f", &m);

  lata = 18 * 3;
  mTinta = m / lata;
  preco = pLata * mTinta;

  printf("Quantidade de latas: %.2f \n Preco: %.2f ", mTinta, preco);

  return 0;
}