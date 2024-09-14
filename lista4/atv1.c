#include <stdio.h>

int main(){
    int mult=0;
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            mult= i*j;
        printf("%d * %d = %d\n", i, j, mult);

        }
    }


    return 0;
}
