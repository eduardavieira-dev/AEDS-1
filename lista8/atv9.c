/* 
* 9. Implemente um procedimento que calcule o comprimento e a área de uma circunferência de
* raio R. Esse procedimento deve obedecer ao cabeçalho a seguir:
* void calcCircunferencia (float R, float *compr, float *area)
* A área da superfície e o volume são calculados pelas equações:
* C=2*PI*R e A =PI*R2
* No programa principal faça a leitura do raio, acione o procedimento e exiba os resultados do
*comprimento e área calculados por ele
*/

#include <stdio.h> 
#define PI 3.14159 

// Função que calcula o comprimento e a área da circunferência
void calcCircunferencia(float R, float *compr, float *area) {
    *compr = 2 * PI * R;     // Calcula o comprimento e armazena no ponteiro 'compr'
    *area = PI * R * R;       // Calcula a área e armazena no ponteiro 'area'
}

int main() {
    float raio;     
    float comprimento, area;  

    // Leitura do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    // Chamada da função para calcular comprimento e área
    calcCircunferencia(raio, &comprimento, &area);

    // Exibindo os resultados
    printf("Comprimento: %.2f\n", comprimento);
    printf("Area: %.2f\n", area);

    return 0;
}
