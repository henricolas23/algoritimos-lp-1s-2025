#include <stdio.h>
#include <string.h>
#define TAM 255

int main(int argc, char* argv[]){
  
  //declaração de strings
  char palavra1[] = "conhecimento";
  char palavra2[] = {'c', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o','\0'};
  char frase1[TAM];
  char palavra3[TAM];
  char palavra4[TAM];

printf("%s\n", palavra1);
printf("%s\n", palavra2);

printf("%c\n", palavra2[4]);

printf("digite uma frase: ");
fgets(frase1, TAM, stdin);

printf("%s\n", frase1);

printf("digite uma palavra: ");
fflush(stdin);
fgets(palavra3, TAM, stdin);

printf("digite uma palavra: ");
fgets(palavra4, TAM, stdin);

if(strcmp(palavra3, palavra4) == 0){
printf("as palavras sao iguais\n");
}
else{
  printf("as palavras nao sao igauis\n");
}

printf("tamanho da palavra3 eh: %d\n", strlen(palavra3));

for(int i = 0; i < strlen(palavra3); i++){
  printf("%c\n", palavra3[i]);
}

//imprima a palavra 3 ao contrario

for(int i = strlen(palavra3) -1; i>=0; i--) {
  printf("%c\n", palavra3[i]);
 }


//concatena palavra3 e palavra4
strcat(palavra3, palavra4);
printf("palavra 3 concatenada = %s", palavra3);


return 0;
}
