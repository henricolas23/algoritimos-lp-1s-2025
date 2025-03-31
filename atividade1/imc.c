#include <stdio.h>

int main (int argc, char* argv[]){
float altura;
 float peso;
 printf("digite a altura: ");
 scanf("%f", &altura);
 printf("digite o peso: ");
 scanf("%f",&peso);
 printf("a altura eh %.2f\nO pseo eh %.2f", altura, peso);
 float dobro_peso = peso * 2.0;
 printf("o dobro do peso eh %f", dobro_peso);
 return 0;
}