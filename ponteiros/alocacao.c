#include <stdio.h>
#include <stdlib.h>

int main(int argv, char* argc[]){
  
    int qtd_linhas = 0;
    float n;
    float *numeros;

    FILE *arq = fopen("dados.txt", "r");

    if(arq == NULL){
        printf("erro ao abrir arquivo.");
        return 1;
        }

        while  (fscanf(arq, "%f", &n) != EOF)
        {
            qtd_linhas++;
        }


        numeros = malloc(sizeof(float) * qtd_linhas); 

        printf("qtd_linhas = %d\n", qtd_linhas);
        
        if(numeros != NULL){
            int i = 0;
            while (fscanf(arq, "%f", &n) != EOF)
        {
           numeros[i] = n;
           i++


        }
    }


    




        fclose(arq);


    return 0;
}