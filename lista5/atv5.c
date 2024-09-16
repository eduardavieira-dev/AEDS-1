#include <stdio.h>
#include <math.h>

float soma(int n){
    float S=0, S1, S2;
    for(int i=1; i<=n; i++){
        S1= pow(i, 2)+1;
        S2 = i+3;
        S+= S1/S2;
    }
    return S;

}

int main(){
    int n;
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    printf("S= %.2f", soma(n));



    return 0;
}
