#include <stdio.h>
#include <math.h>

int main (int argc, char* argv[]){
float altura, peso, imc;

 printf("digite a altura: ");
 scanf("%f", &altura);
 printf("digite o peso: ");
 scanf("%f",&peso);

 imc = peso / (altura*altura);
 printf("o imc eh: %.2f\n", imc);
 
 if (imc <= 18.5) {
    printf("abaixodo do peso\n");
 }
 else if (imc > 18.5 && imc <= 24.9) {
    printf("peso normal\n");
 }
 else if (imc >18.5 && imc <= 29.9) {
    printf("sobrepeso\n");
 }
 else if (imc > 29.9 && imc <= 34.9) {
    printf("obesidade I\n");
 }
 else if (imc >34.9 && imc <=39.9) {
    printf("obesidade II\n");
 }
 else if (imc > 39.9) {
    printf("obesidade III\n");
 }
 return 0;
}