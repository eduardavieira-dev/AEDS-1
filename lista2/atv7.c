#include <stdio.h>
#include <math.h>
/*A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso, sendo
que: O primeiro ganhador receber� 46% do total. O segundo receber� 32% do total. O terceiro
receber� o restante. Calcule e imprima a quantia recebida por cada um dos ganhadores*/
int main(){
    float v1, v2, v3, premio=780000;

    v1 = premio*0.46;
    v2 = premio*0.32;
    v3= premio-(v1+v2);

    printf("O primerio ganhou: %.1f /n O segundo ganhou: %.1f /n O terceiro ganhou: %.1f", v1, v2, v3);

    return 0;
}
