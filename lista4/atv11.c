#include <stdio.h>

int main(){
    int soma=0;

    for(int i=500; i<=2100; i++){
        if(i %3==0 && i %2!=0){
        soma+=i;
        //printf("%d\n", i);
        //printf("%d\n", soma);
        }

    }
    printf("%d\n", soma);



return 0;
}
