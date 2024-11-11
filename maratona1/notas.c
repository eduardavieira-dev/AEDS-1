#include <stdio.h>

int main() {
    int n, nota100, nota50, nota20, nota10, nota5,nota2, nota1;
    scanf("%d", &n);
    int total =0;
    total=n;

    nota100 = nota50 = nota20 = nota10 = nota5 = nota2= nota1 = 0;


    nota100 = n / 100;
    n = n % 100; // Atualizando o valor de n com o restante


    nota50 = n / 50;
    n = n % 50;


    nota20 = n / 20;
    n = n % 20;


    nota10 = n / 10;
    n = n % 10;


    nota5 = n / 5;
    n = n % 5;

    nota2 = n / 2;
    n = n % 2;

    nota1 = n;

    printf("%d\n", total);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
     printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

    return 0;
}
