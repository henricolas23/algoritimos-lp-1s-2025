#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    int n, i, aprovados = 0, k;
    float soma = 0.0, maiorNota, menorNota;

    // Solicita o número de alunos
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    // Verifica se o número de alunos é válido
    if (n <= 0) {
        printf("Número de alunos inválido.\n");
        return 1;
    }

    float notas[n];

    // Leitura das notas
    for (i = 0; i < n; i++) {
        do {
            printf("Digite a nota do aluno %d (0.0 a 10.0): ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0.0 || notas[i] > 10.0) {
                printf("Nota inválida. Tente novamente.\n");
            }
        } while (notas[i] < 0.0 || notas[i] > 10.0);

        // Soma para cálculo da média
        soma += notas[i];

        // Conta aprovados
        if (notas[i] >= 6.0) {
            aprovados++;
        }

        // Define maior e menor nota
        if (i == 0) {
            maiorNota = menorNota = notas[i];
        } else {
            if (notas[i] > maiorNota)
                maiorNota = notas[i];
            if (notas[i] < menorNota)
                menorNota = notas[i];
        }
    }

    // Solicita a posição k
    printf("Digite a posição k (0 a %d) para ver a nota do aluno: ", n - 1);
    scanf("%d", &k);

    if (k >= 0 && k < n) {
        printf("Nota do aluno na posição %d: %.2f\n", k, notas[k]);
    } else {
        printf("Posição inválida.\n");
    }

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("Média geral da turma: %.2f\n", soma / n);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
