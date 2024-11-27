#include <stdio.h>

float Serie(float N){
        float S = 0;
        int sinal = 1;
        for(float i = 1; i <= N; i+=2){
        S+= (sinal)* 4/i;
        sinal *= -1;
        }
        return S;

}

int main(){

    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    printf("Resultado: %.2f",Serie(n));


    return 0;
}
