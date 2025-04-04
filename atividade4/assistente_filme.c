#include <stdio.h>

int main(int argc, char* argv []) {
    int tipo, genero, subgenero, escolha;
    
    printf("Escolha o tipo de filme:\n1 - Leve\n2 - Intenso\n");
    scanf("%d", &tipo);
    
    if (tipo == 1) {
        printf("Escolha o gênero:\n1 - Comédia\n2 - Animação\n");
        scanf("%d", &genero);
        
        if (genero == 1) {
            printf("Recomendamos assistir ao filme: As Branquelas\n");
        } else {
            printf("Recomendamos assistir ao filme: Toy Story\n");
        }
    } else {
        printf("Escolha o gênero:\n1 - Terror\n2 - Ação\n");
        scanf("%d", &genero);
        
        if (genero == 1) {
            printf("Escolha o subgênero de terror:\n1 - Psicológico\n2 - Sobrenatural\n");
            scanf("%d", &subgenero);
            
            if (subgenero == 1) {
                printf("Recomendamos assistir ao filme: Corra!\n");
            } else {
                printf("Recomendamos assistir ao filme: Invocação do Mal\n");
            }
        } else {
            printf("Escolha o tipo de ação:\n1 - Super-heróis\n2 - Aventura realista\n");
            scanf("%d", &subgenero);
            
            if (subgenero == 1) {
                printf("Recomendamos assistir ao filme: Vingadores: Ultimato\n");
            } else {
                printf("Recomendamos assistir ao filme: Mad Max: Estrada da Fúria\n");
            }
        }
    }
    
    return 0;
}
