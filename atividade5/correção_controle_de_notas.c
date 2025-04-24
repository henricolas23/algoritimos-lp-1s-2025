#include <stdio.h>
#include <math.h>

int main (int argc, char* argv[]){

int qtdAlunos = 0;

printf( "informe a qauntidade de alunos: ");
scanf("%d", &qtdAlunos);

float notas [qtdAlunos];

for(int i = 0; i < qtdAlunos; i++){
    do{
    printf("\ndigite a nota do aluno %d: ", i);
    scanf("%f" , &notas[i]);
 }while (notas[i] > 10.0 || notas[i] < 0.0);
  
}

int posiciaoNota; 
printf("\ninforme a posicao da nota a ser apresentada: ");
scanf("%d", &posiciaoNota) ;

float somaNotas = 0.0;
float mediaNota = 0.0;
float menorNota = notas[0];
float maiorNota = notas[0];
int qtdAlunosaprovados = 0;
for( int i = 0; i < qtdAlunos; i++){
    somaNotas += notas[i];

    if(menorNota > notas[i]){
        menorNota = notas[i];
    }

    if(maiorNota > notas[i]){
        maiorNota = notas[i];
    }

    if(notas[i] >= 6.0){
        qtdAlunosaprovados++;
    }
}

mediaNota = somaNotas / qtdAlunos; 
printf("\nmedia das notas: %.2f", mediaNota);
printf("\nmenor nota: %.2f", menorNota);
printf("\nmaior nota: %.2f", maiorNota);
printf("\nqtd. alunos aprovados: %d", qtdAlunosaprovados);
printf("\nnota do aluno %d: %2f", posiciaoNota, notas[posiciaoNota]);

    return 0;
}