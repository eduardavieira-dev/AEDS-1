/* 
* 7. Desenvolva um programa em C que leia uma matriz de 5x4 contendo as seguintes
* informações sobre 5 alunos de uma disciplina:
• Primeira coluna: números de matrícula;
• Segunda coluna: média das provas;
• Terceira coluna: média dos trabalhos;
* A quarta coluna é composta pela nota final de cada aluno e deve ser calculada através da
* soma da média das provas com a média dos trabalhos. Por fim, imprima a matrícula do
* aluno com a maior nota final e a média aritmética das notas do 5 alunos
*/

#include <stdio.h>

int main() {
    // Declaração da matriz 5x4 (5 alunos, 4 informações)
    float alunos[5][4];
    float soma_notas_finais = 0, maior_nota_final = 0;
    int matricula_maior_nota;

    // Leitura das informações dos alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite o número de matricula do aluno %d: ", i + 1);
        scanf("%f", &alunos[i][0]);  // Primeira coluna: matrícula

        printf("Digite a média das provas do aluno %d: ", i + 1);
        scanf("%f", &alunos[i][1]);  // Segunda coluna: média das provas

        printf("Digite a média dos trabalhos do aluno %d: ", i + 1);
        scanf("%f", &alunos[i][2]);  // Terceira coluna: média dos trabalhos

        // Calcula a nota final (média das provas + média dos trabalhos)
        alunos[i][3] = alunos[i][1] + alunos[i][2];  // Quarta coluna: nota final
        soma_notas_finais += alunos[i][3];           // Soma para calcular a média depois

        // Verifica se a nota final atual é a maior
        if (alunos[i][3] > maior_nota_final) {
            maior_nota_final = alunos[i][3];
            matricula_maior_nota = (int)alunos[i][0];  // Guarda a matrícula do aluno com a maior nota
        }
    }

    // Calcula a média aritmética das notas finais
    float media_notas_finais = soma_notas_finais / 5;

    // Exibe os resultados
    printf("\nMatricula do aluno com a maior nota final: %d\n", matricula_maior_nota);
    printf("Media aritmetica das notas finais: %.2f\n", media_notas_finais);

    return 0;
}
