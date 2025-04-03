#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(int argc, char* argv[]) {
    float raio, area;
    
    // Solicita o raio ao usuário
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    // Calcula a área
    area = PI * raio * raio;
    
    // Exibe o resultado
    printf("A área do círculo é: %.2f\n", area);
    
    return 0;
}
