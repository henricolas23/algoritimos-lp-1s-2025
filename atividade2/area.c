#include <stdio.h>
#include <math.h>
#define PI 3.14

int main (int argc, char* argv []){
   float raio, area;
   float diagonal_maior, diagonal_menor;
   float lado; 
   float  base, altura;
   float base_maior, base_menor;
   
    char opcao;

    printf("area.c\n");
    printf("escolha uma opcao: \n");
    printf("c - circulo\n");
    printf("l - losngo\n");
    printf("q - quadrado\n");
    printf("r - retagulo\n");
    printf("t - triangulo\n");
    printf("z - trapezio\n");

    scanf("%c", &opcao);

    switch (opcao) {

        case 'c':
        printf("circulo\n");
        // Solicita o raio ao usuário
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
         // Calcula a área
    area = PI * raio * raio;
    
    // Exibe o resultado
    printf("A área do círculo é: %.2f\n", area);
        break;
        case 'l':
         //calcule a diagonal maior e a diagonal menor
    printf("digite a diagonal maior");
    scanf("%f", &diagonal_maior);
    printf("digite a diagonal menor");
    scanf("%f", &diagonal_menor);
        printf("losango\n");
         //calcula a area 
    area = diagonal_maior * diagonal_menor / 2;

    //exibe os resultados
    printf("a area do losango é %.2f\n", area);
        break;
        case 'q':
        //calcule o lado
printf("digite o lado do quuadrado");
scanf("%f", &lado);

        printf("quadrado\n");
        //calcula a área 
    area = lado * lado;
    
    //exibe o resultado 
    printf("area do quadrado é: %.2f\n", area);
        break;
        case 'r':
       //calcule a base e a altura  
    printf("digite a base do retangulo");
    scanf("%f", &base);
    printf("digite a altura do retangulo");
    scanf("%f", &altura);
        printf("retangulo\n");
         //calcula a area
    area = base * altura;

    //exibe os resultados 
    printf("a area do retangulo é %.2f\n", area);
    
        break;
        case 't':
        //calcula a base e a altura  
    printf("digite a base do triangulo");
    scanf("%f", &base);
    printf("digite a altura do triangulo");
    scanf("%f", &altura);

        printf("triangulo\n");
        //calcula a area 
    area  = base * altura / 2;

    //exibe os resultados 
    printf("a area do trianfgulo é %.2f\n", area);

        break;
        case 'z':
        printf("trapezio\n");
        // Solicita as bases e a altura ao usuário
    printf("Digite a base maior do trapézio: ");
    scanf("%f", &base_maior);
    printf("Digite a base menor do trapézio: ");
    scanf("%f", &base_menor);
    printf("Digite a altura do trapézio: ");
    scanf("%f", &altura);
        // Calcula a área
    area = ((base_maior + base_menor) * altura) / 2;
    
    // Exibe o resultado
    printf("A área do trapézio é: %.2f\n", area);
    
        break;
        default:
        printf("opcao invalida");
    }
    printf(" area = %2.f\n, area"); 
    return 0;  
}
