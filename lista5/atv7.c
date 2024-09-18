#include <stdio.h>

float media(float n1, float n2, float n3){
     // Verifica se todas as notas são zero
    if (n1 == 0 && n2 == 0 && n3 == 0) {
        return -1; // Retorna -1 para indicar que a leitura deve parar
    }

    return (n1 + n2 + n3) / 3.0;
}

int main(){
    float n1, n2, n3;

    while(1){

    printf("Informe as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    float maritmetica = media(n1, n2, n3);

     if (maritmetica == -1) {
            printf("Fim da leitura das notas.\n");
            break; // Sai do loop se todas as notas forem zero
        }

    printf("A média das notas eh: %.2f\n",maritmetica);

    }



    return 0;
}
