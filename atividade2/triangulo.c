#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){ 
    
    float area, base, altura;

    //calcula a base e a altura  
    printf("digite a base do triangulo");
    scanf("%f", &base);
    printf("digite a altura do triangulo");
    scanf("%f", &altura);

    //calcula a area 
    area  = base * altura / 2;

    //exibe os resultados 
    printf("a area do trianfgulo é %.2f\n", area);

    return 0;
}