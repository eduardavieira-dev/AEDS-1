#include <stdio.h>
#include <math.h>
/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo
que: O primeiro ganhador receberá 46% do total. O segundo receberá 32% do total. O terceiro
receberá o restante. Calcule e imprima a quantia recebida por cada um dos ganhadores*/
int main(){
    float v1, v2, v3, premio=780000;

    v1 = premio*0.46;
    v2 = premio*0.32;
    v3= premio-(v1+v2);

    printf("O primerio ganhou: %.1f /n O segundo ganhou: %.1f /n O terceiro ganhou: %.1f", v1, v2, v3);

    return 0;
}
