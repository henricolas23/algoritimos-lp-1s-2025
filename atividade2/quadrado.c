#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float lado, area; 

    //calcule o lado
printf("digite o lado do quuadrado");
scanf("%f", &lado);

    //calcula a área 
    area = lado * lado;
    
    //exibe o resultado 
    printf("area do quadrado é: %.2f\n", area);

  return 0;
}