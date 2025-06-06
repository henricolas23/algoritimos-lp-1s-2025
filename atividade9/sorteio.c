#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <min> <max> <esperado>\n", argv[0]);
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    // Validações
    if (min >= max) {
        printf("Erro: o número mínimo deve ser menor que o máximo.\n");
        return 1;
    }

    if (esperado < min || esperado > max) {
        printf("Erro: o número esperado deve estar entre o mínimo e o máximo (inclusive).\n");
        return 1;
    }

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    int sorteado = min + rand() % (max - min + 1);

    // Verifica se foi sorteado
    int foi_sorteado = (sorteado == esperado);

    // Mostra resultado na tela
    printf("Número sorteado: %d\n", sorteado);
    if (foi_sorteado) {
        printf("Parabéns! Você foi sorteado.\n");
    } else {
        printf("Que pena! Você não foi sorteado.\n");
    }

    // Escreve no log
    FILE *arquivo = fopen("log.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo de log");
        return 1;
    }

    fprintf(arquivo, "número mínimo: %d\n", min);
    fprintf(arquivo, "número máximo: %d\n", max);
    fprintf(arquivo, "número esperado: %d\n", esperado);
    fprintf(arquivo, "número sorteado: %d\n", sorteado);
    fprintf(arquivo, "resultado: %s\n", foi_sorteado ? "sorteado" : "não sorteado");
    fprintf(arquivo, "-----------------------------\n");

    fclose(arquivo);
    return 0;
}
