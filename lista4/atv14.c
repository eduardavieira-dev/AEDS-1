#include <stdio.h>

int main(){
    int soma=0;
    float x, y;

    do{
        printf("Informe as cordenadas (x, y)");
        scanf("%f %f", &x, &y);
            if(x>0 && y>0){
                printf("%.0f %.0f: Primerio quadrante\n", x, y);
            }
            else if(x<0 && y>0)
                {
                 printf("%.0f %.0f: Segundo quadrante\n", x, y);
            }
            else if(x<0 && y<0)
            {
                 printf("%.0f %.0f: Terceiro quadrante\n", x, y);
            }
            else if(x>0 && y<0)
            {
                 printf("%.0f %.0f: Quarto quadrante\n", x, y);
            }
    }while(x!=0 && y!=0);

    return 0;
}
