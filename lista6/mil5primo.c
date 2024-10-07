#include <stdio.h>

int main() {
    int contador=0, divisor=0, n=1000, primo=0;
    while(contador<5){
    for(int i=1; i<=n; i++){
        if(n%i ==0){
        divisor++;
        }
      }
      if(divisor ==2){
      //divisivel por 1 e ele mesmo, por isso 2
      primo = n;
      contador++;
      }
      n++;
      divisor=0;
    }
    printf("5o numero primo: %d", primo);

    return 0;
}
