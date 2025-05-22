#include <stdio.h>
#include <math.h>
#define tam_nome 64

typedef struct Aluno{
char nome[tam_nome];
float nota;
}Aluno;

void imprimir_aluno(Aluno a){
    printf("nome: %s \tnota: %2f\n", a.nome, a.nota);
}

int main (int argc, char* argv[]){  
    
    int n = 5;
    Aluno alunos[n];

    printf("digite o nome do aluno 0: \n");
    fgets(alunos[0]. nome, tam_nome, stdin);
    printf("digite a nota do aluo na posicao 0: \n");
    scanf("%f", &alunos[0].nota);

    imprimir_aluno(alunos[0]);

    
    return 0;
 }