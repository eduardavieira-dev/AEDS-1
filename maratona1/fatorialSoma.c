#include <stdio.h>

float calcFatorial(float num){
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return (num * calcFatorial(num - 1));
    }
}

float calcSoma(float num){
    if(num == 0)
    {
        return 1.0;
    }
    else
    {
        return (1.0 / calcFatorial(num)) + calcSoma(num - 1);
    }
}



int main(){
    float N = 0;
    float soma = 0;
    scanf("%f", &N);
    soma = calcSoma(N);
    printf("%.2f\n", soma);
    return 0;
}
