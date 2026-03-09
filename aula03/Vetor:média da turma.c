#include <stdio.h>

#define TOTAL_ALUNOS 30

int main() {
    // declaração dos vetores
    float nota1[TOTAL_ALUNOS];
    float nota2[TOTAL_ALUNOS];
    float media[TOTAL_ALUNOS];
    
    float somaMedias = 0;
    float mediaTurma = 0;

    // leitura das notas e calculo da media individual
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        
        printf("Nota 1 (Peso 2): ");
        scanf("%f", &nota1[i]);
        
        printf("Nota 2 (Peso 3): ");
        scanf("%f", &nota2[i]);

        // calculo da media ponderada: (N1*2 + N2*3) / (2+3)
        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5;
        
        // acumulando para calcular a media da turma depois
        somaMedias += media[i];
        printf("Media calculada: %.2f\n", media[i]);
        printf("---------------------------\n");
    }

    // calculo da média da turma
    mediaTurma = somaMedias / TOTAL_ALUNOS;

    printf("\n--- RESULTADOS FINAIS ---\n");
    printf("Media Geral da Turma: %.2f\n", mediaTurma);
    printf("---------------------------\n");

    printf("Alunos com média acima da media da turma:\n");
    printf("ID\tNota 1\tNota 2\tMedia\n");

    // impressão dos alunos que estão acima da média da turma
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        if (media[i] > mediaTurma) {
            printf("%d\t%.2f\t%.2f\t%.2f\n", i + 1, nota1[i], nota2[i], media[i]);
        }
    }

    return 0;
}