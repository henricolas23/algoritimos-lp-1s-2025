#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    
    float area, diagonal_maior, diagonal_menor;

    //calcule a diagonal maior e a diagonal menor
    printf("digite a diagonal maior");
    scanf("%f", &diagonal_maior);
    printf("digite a diagonal menor");
    scanf("%f", &diagonal_menor);

    //calcula a area 
    area = diagonal_maior * diagonal_menor / 2;

    //exibe os resultados
    printf("a area do losango é %.2f\n", area);

   return 0; 
}