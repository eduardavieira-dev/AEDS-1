#include <stdio.h>

/* 03. Escreva uma fun��o recursiva que inverta os d�gitos de um inteiro estritamente
positivo n. Por exemplo, o n�mero 132 deve ser invertido para 231. N�o use vetor! */

int inverter(int n, int rev){
    if (n == 0) {
        return rev;
    } else {
        return inverter(n / 10, rev * 10 + n % 10);
        //num-> 123 rev->0
        //num-> 12,3 rev->3
        //num-> 1,23  rev-23
         //num-> 0,123 rev-123
    }
}

int main(){
    int n;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    int resultado = inverter(n, 0);  // Passando 0 como valor inicial de rev
    printf("%d", resultado);

    return 0;
}
