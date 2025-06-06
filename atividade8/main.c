#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define o tipo Ponto
typedef struct {
    float x;
    float y;
} Ponto;

// Função para calcular a distância entre dois pontos
float calcularDistancia(Ponto a, Ponto b) {
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    return sqrt(dx * dx + dy * dy);
}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Uso: %s Xa Ya Xb Yb\n", argv[0]);
        return 1;
    }

    // Cria os pontos com base nos argumentos
    Ponto a, b;
    a.x = atof(argv[1]);
    a.y = atof(argv[2]);
    b.x = atof(argv[3]);
    b.y = atof(argv[4]);

    // Calcula e imprime a distância
    float distancia = calcularDistancia(a, b);
    printf("Distância entre os pontos: %.2f\n", distancia);

    return 0;
}
