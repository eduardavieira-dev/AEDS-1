#include <stdio.h>

int soma(int n){
    // Caso base: se n for 0, retorna 0
    if(n == 0){
        return 0;
    }
    // Caso recursivo: soma o último dígito com o resultado da chamada recursiva
    return n % 10 + soma(n / 10);
}

int main(){
    int n;

    // Leitura do número
    scanf("%d", &n);
    // Chamada da função recursiva e exibição do resultado
    printf("%d", soma(n));

    return 0;
}
