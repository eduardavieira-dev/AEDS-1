#include <stdio.h>

int main(){
    int n;
    int *pn;

    pn = &n;

    n=10;

    printf("Valor de n: %d \n", n);
    printf("Valor no ponteiro de p: %d\n", *pn);


    printf("Ponteiro de p: %p\n", &n);
    printf("Endereco do Ponteiro de p: %p \n", &pn);

    return 0;
}
