#include <stdio.h>

//SOMATORIO

int main() {

    int a = 0, b = 0, produto = 0;

    printf("Digite dois valores para saber o produto do somatorio: ");
    scanf("%d %d", &a, &b);

    // Caso b seja negativo, multiplicamos por -1 e fazemos a soma para valores positivos
    if (b < 0) {
        for (int i = 0; i > b; i--) {
            produto -= a;  // Subtrai a ao invés de somar
        }
    } else {

        //ele soma por ex. 2 e 5= 2+2+2+2+2= 10
        for (int i = 0; i < b; i++) {
            produto += a;  // Soma a sucessivamente
        }
    }

    printf("Resultado do produto: %d\n", produto);

    return 0;
}
