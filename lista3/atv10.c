#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){
    char simb;
 
    printf("Simbolo por extenso ");
    scanf("%c", &simb);

    switch (simb){
        case '>':
          
            printf("SINAL DE MAIOR\n");
            break;
        case '<':
          
            printf("SINAL DE MENOR\n");
            break;
        case '=':
            printf("SINAL DE IGUAL\n");
            break;
        default:
            printf("OUTRO SINAL\n");
    }

    return 0;
}
