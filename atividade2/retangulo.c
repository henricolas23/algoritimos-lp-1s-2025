#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float area, base, altura;

    //calcule a base e a altura  
    printf("digite a base do retangulo");
    scanf("%f", &base);
    printf("digite a altura do retangulo");
    scanf("%f", &altura);

    //calcula a area
    area = base * altura;

    //exibe os resultados 
    printf("a area do retangulo é %.2f\n", area);
    
    
    
    return 0;
    }