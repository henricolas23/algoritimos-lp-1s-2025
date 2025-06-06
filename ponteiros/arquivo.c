#include <stdio.h>


/*
modos de abertura de arquivo 
'r' -> para leitura
'w' -> criar e escrever no arquivo
'a' -> criar, se não existir, e adicionar ao final do arquivo
*/

int main (int argc, char* argv[]){ 

    FILE *sexta = fopen("sexta.txt", "w");

    if(sexta == NULL){
        printf("erro ao abrir arquivo.");
        return 1;
    }

    fprintf(stdout, "hollo, word");
    
    fclose(sexta);
    return 0;
 }
