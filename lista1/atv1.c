#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, ant, suc;
    printf("Digite um numero para saber seu antecessor e sucessor:");
    scanf("%d", &num);

    ant = num - 1;
    suc= num + 1;
    printf("\nAntecessor: %d \nSucessor: %d", ant, suc);

    return 0;
}
