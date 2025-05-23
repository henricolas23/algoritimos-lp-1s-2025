#include <stdio.h>
#include <string.h>
#include "biblioteca.h"
#include <stdlib.h>

int mian(int argc, char* argv[]){

    if(argc < 3){
        printf("argumentos invalidos");
        return 1;
    }

    if (strcmp(argv[1], "maior") == 0){
        if(argc < 4){ 
        printf("argumentos invalidos");
        return 1;
    }
       }
    
    int z = atoi(argv[1]);
    int x = atoi(argv[2]);
    printf("%d", maior_2n(x,z));
    
    return 0;
}