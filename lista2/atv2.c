#include <stdio.h>
#include <math.h>

int main(){
/*sqrt raiz
  pow potencia(x1+x2, 2)*/
    double x1, x2, y1, y2, d;
    printf("Informe os 4 pontos:(x1, x2, y1, y2)");
    scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);

    d= sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("Valor da Euclidiana: %lf", d );

return 0;
}
