#include <stdio.h>

#define MAX_TXT 256

int main (int argc, char* argv[]){  
 
    char texto[256];
    FILE *sexta = fopen("sexta.txt", "r");
 
    if(sexta == NULL){
        printf("erro ao abrir o arquivo");
        return 1;
    
    }

    while(fgets(texto,MAX_TXT, sexta)){ 
    fprintf(stdout, texto);
    }
    fclose(sexta);

    return 0;
 }