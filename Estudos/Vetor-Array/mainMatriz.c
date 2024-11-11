#include <stdio.h>

int main(){
    int n;

    printf("Determine o valor do matriz: ");
    scanf("%d\n", &n);

    int matriz[n][n];

    for(int li=0; li < n; li++){
        for(int col=0; col < n; col++){
        scanf("%d", &matriz[li][col]);
        }
    }

      printf("\nDiagonal Principal: um for simples de i e linha e coluna recebendo i ");


    printf("\nDiagonal Principal: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", matriz[i][i]);
        }

    printf("\nDiagonal Secundaria:  n-1-i: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", matriz[i][n - 1 - i]);
        }
 printf("\n");

    for(int li=0; li < n; li++){
        for(int col=0; col < n; col++){
        printf("%d ", matriz[li][col]);
        }
        printf("\n");
    }

    printf("\n");
 printf("\n li> Elementos abaixo da diagonal principal:\n");
     for(int li=0; li < n; li++){
        for(int col=0; col < n; col++){
           if(li>col){
                printf("%d ", matriz[li][col]);
           }
        }printf(" ");
        printf("\n");
    }
      printf("\n");

  printf("\n col> Elementos acima da diagonal principal\n");
    for(int li=0; li < n; li++){
        for(int col=0; col < n; col++){
           if(li<col){
                printf("%d ", matriz[li][col]);
           }
        }printf(" ");
        printf("\n");
    }

      printf("\n");

  printf("Diagonal principal li==col \n");

       for(int li=0; li < n; li++){
        for(int col=0; col < n; col++){
           if(li==col){
                printf("%d ", matriz[li][col]);
           }
        }printf(" ");
        printf("\n");
    }

    return 0;
}
