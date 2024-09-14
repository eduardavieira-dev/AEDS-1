#include <stdio.h>

int main(){
    float n, pot;
    float s;

    for(int i=1; i<=10; i++){

    pot= pow(i, 2);
    s+=i/pot;

    }

 printf("S= %.2f\n", s);

    return 0;
}
