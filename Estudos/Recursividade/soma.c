#include <stdio.h>

int Soma(int n){
    if(n==0){
        return 0;//condiacao de parada
    }
    return n %10 + (Soma (n/10));

}

int main(){
    int n;

    scanf("%d", &n);

    printf("%d", soma(n));

    return 0;
}