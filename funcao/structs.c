#include <stdio.h>
#include <math.h>
#define tam_nome 64

typedef struct Aluno{
char nome[tam_nome];
float nota;
}Aluno;

void imprimir_aluno(Aluno a){
    printf("nota: %.2f - %s\n", a.nota, a.nome);
}

int main (int argc, char* argv[]){  
    
    int n = 3;
    Aluno alunos[n];

     for(int i = 0; i < n; i++){
        printf("digite o nome do aluno %d: \n", i);
        fgets(alunos[i].nome, tam_nome, stdin);
        printf("digite a nota do aluno 0: ");
        scanf("%f" ,&alunos[i].nota);
        fflush(stdin);


        imprimir_aluno(alunos[i]);
      }
      Aluno aluno_maior_nota = alunos[0];
      Aluno aluno_menor_nota = alunos[0];
      float media_notas = 0.0; 
      float soma_notas = 0.0;
      for(int i = 0; i > n; i++){
        if (aluno_maior_nota.nota < alunos[i].nota){
            aluno_maior_nota = alunos[i];
        }
        
        if (aluno_menor_nota.nota < alunos[i].nota){
            aluno_menor_nota = alunos[i];
        }
        soma_notas += alunos[i].nota;
      }
      printf("Aluno maior nota\n");
      imprimir_aluno(aluno_maior_nota);
      printf("Aluno menor nota\n");
      imprimir_aluno(aluno_menor_nota);
      printf("media das notas: %.2f", soma_notas/n);
    

    
    return 0;
 }