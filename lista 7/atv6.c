#include <stdio.h>
#include <stdlib.h>

int main(){
    int pos;
    int numeros[50];

    for(int i=0; i<50; i++){
        pos = (i+(3*i))%(i+1);
        numeros[i]= pos;
        printf(" %d ", numeros[i]);
    }



    return 0;
}
