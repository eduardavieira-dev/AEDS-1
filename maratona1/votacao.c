#include <stdio.h>

int main() {
    int voto;
    int voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, voto5 = 0, voto6 = 0, contador = 0;
    float votoNulo = 0;

    do {
        printf("----Votacao----");
        printf("\n1 – Candidato 1");
        printf("\n2 – Candidato 2");
        printf("\n3 – Candidato 3");
        printf("\n4 – Candidato 4");
        printf("\n5 - Voto nulo");
        printf("\n6 - Voto branco");
        printf("\n0 - Finalizar votacao\n");
        printf("\nInforme seu voto: "); 

        scanf("%d", &voto);

        switch (voto) {
            case 1:
                voto1++;
                break;
            case 2:
                voto2++;
                break;
            case 3:
                voto3++;
                break;
            case 4:
                voto4++;
                break;
            case 5:
                voto5++;
                break;
            case 6:
                voto6++;
                break;
            case 0:
                 printf("Finalizando votacao...\n");
                break;
            default:
                printf("Voto invalido.\n");
                continue; // Não contar voto inválido
        }

        // Incrementa o total de votos apenas para votos válidos
        if (voto >= 1 && voto <= 6) {
            contador++;
        }

    } while (voto != 0);

    // Cálculo da porcentagem de votos em branco
    votoNulo = ((float)voto6 / contador) * 100;

    // Impressão dos resultados
   printf("\n---Total de votos---");
    printf("Candidato 1: %d voto(s)", voto1);
    printf("\nCandidato 2: %d voto(s)", voto2);
    printf("\nCandidato 3: %d voto(s)", voto3);
    printf("\nCandidato 4: %d voto(s)", voto4);
    printf("\nVotos nulos: %d", voto5);
    printf("\nPorcentagem de votos em branco: %.2f%%\n", votoNulo);

    return 0;
}
