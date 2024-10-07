#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a[10];
    int b[10];
    int c[10];

    //random
    srand(time(0));

     for(int i=0; i<10; i++){
        a[i]= rand() %100;
        printf(" %i", a[i]);
    }
    printf("\n");
     for(int i=0; i<10; i++){
        b[i]= rand() %100;
        printf(" %i", b[i]);
     }
    printf("\n");
     for(int i=0; i<10; i++){
        c[i]= a[i]-b[i];
        printf(" %i", c[i]);
     }

    return 0;
}
