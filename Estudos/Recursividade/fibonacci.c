#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,...
int fibonacciLoop(int n){
    int i, j, termo, proximo;
    i = 0; j = 1; // valores dos dois primeiros

    for (termo = 1; termo <=n; termo++){
        proximo = i + j;
        i = j;
        j = proximo;
    }
    if (n <= 0){
        return i;
    } else {
        return j;
    }
}

int main(){

    int num;

    printf("Quantos numeros deseja ver o fibonacci: ");
    scanf("%d", &num);     


    return 0;
}