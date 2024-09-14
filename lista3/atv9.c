#include <stdio.h>
/* EDUARDA VEIRA
Data: 27/08  
Lista 3*/

int main(){
    char esc;
    float salario, aumento;

    
    printf("Informe o seu salário: ");
    scanf("%f", &salario);
    
    getchar();

    printf("Escolha o valor referente ao seu aumento (a, b, c): ");
    scanf("%c", &esc);

    switch (esc){
        case 'a':
            aumento = salario * 1.08;
            printf("Novo salário com aumento: %.2f\n", aumento);
            break;
        case 'b':
            aumento = salario * 1.11;
            printf("Novo salário com aumento: %.2f\n", aumento);
            break;
        case 'c':
            if (salario <= 1000.0) {
                aumento = salario + 350;
            } else {
                aumento = salario + 200;
            }
            printf("Novo salário com aumento: %.2f\n", aumento);
            break;
        default:
            printf("Valor inválido\n");
    }

    return 0;
}
