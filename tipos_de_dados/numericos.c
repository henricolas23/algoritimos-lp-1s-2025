#include <stdio.h>

int main (int argc, char* argv[]){
int idade;
float altura;
 float peso;
 printf("digite a idade: ");
 scanf("%d", &idade);
 printf("digite a altura: ");
 scanf("%f", &altura);
 printf("digite o peso: ");
 scanf("%f",&peso);
 printf("a idade eh %d\n", idade);
 printf("a altura eh %.2f\nO pseo eh %.2f", altura, peso);

 float dobro_peso = peso * 2.0;
 printf("o dobro do peso eh %f", dobro_peso);
 return 0;
}

