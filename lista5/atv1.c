#include <stdio.h>
#include <math.h>

    float hipotenusa(int a, int b){

    float hip= sqrt(pow(a, 2)+pow(b, 2));

    return hip;

    }

    int main(){
    int a, b;

    printf("Informe os valores dos catetos:");
    scanf("%d %d", &a, &b);

    float valoHip = hipotenusa(a, b);

    printf("H= %.2f", valoHip);

    return 0;
    }
