#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n;

    //maloc -> memory allocation

    printf("Tamanho do array: ");
    scanf("%d", &n);

    arr = (int *) malloc (n *sizeof(int));

    if(!arr){
        printf("Não foi possivel criar memoria nesse array ");
        return 1;
    }

    for(int i = 0; i<n; i++){
        arr[i]= i;
    }

    for (int i = 0; i<n; i++){
    printf("%d\n", arr[i]+1);
    }

    free(arr);

    return 0;
}
