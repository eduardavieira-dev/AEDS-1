#include <stdio.h>

void mediaAritmetica(int n1, int n2, int n3){
   float media= (n1+n2+n2)/3;
    printf("Media Aritmetica= %.2f", media);
}

void mediaPonderada(int n1, int n2, int n3){
    float p1=5.0, p2=3.0, p3=2.0;
    float media=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("Media Ponderada= %.2f", media);

}

  int main(){
    int num1, num2, num3;
    char op;
    printf("Informe os 3 numeros");
    scanf("%d %d %d", &num1, &num2, &num3);
getchar();

       printf("Digite A para media aritmetica e P para ponderada:");
       scanf("%c", &op);
      getchar();

        switch(op){
        case'a':
           mediaAritmetica(num1, num2, num3);
           break;
        case'p':
           mediaPonderada(num1, num2, num3);
            break;


        }

return 0;
}
