#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    float base_maior, base_menor, altura, area;
    
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
    
    return 0;
}