#include <stdio.h>
#include <math.h>
int main(int agrc, char* argv[]){

    float n1, n2;

    printf("digite o valor de n1:");
    scanf("%f", &n1);
    
    printf("digite o valor de n2:");
    scanf("%f", &n2);
    
    //adição 
    float soma = n1 +n2;
    printf("%.2f + %.2f =%.2f\n", n1, n2, soma);

    //subtrção 
float difenrenca = n1 - n2;
printf("%.2f - %.2f = %.2f\n", n1, n2, difenrenca);

    //multiplicação
float produto = n1 * n2;
printf("%.2f * %.2f = %.2f\n", n1 , n2, produto);

    //divisão 
float quociente = n1 / n2;
printf("%.2f / %.2f = %.2f\n", n1, n2, quociente);

    //potenciação 
float resultado_potenciacao = pow(n1, n2); 
printf("%.2f^%.2f = %.2f\n", n1, n2, resultado_potenciacao);

    //radiciação
float raiz_quadrada = sqrtf(n1);
printf("%.2f^1/2%.2f = %.2f\n", n1, n2, raiz_quadrada);

    //resto da divisão 
int resto = (int) n1 % (int) n2;
printf("%.2f %% %.0f = %.d\n", n1, n2, resto);
    
    // quociente inteiro da divisão
    int quociente_inteiro =n1 / (int) n2;
    printf("%.2f // %.2f = %.d\n", n1, n2, quociente_inteiro);

    //incremento 
n1++;
printf("%.2f++ = %.2f\n", n1-1, n1);

    //decremento 
n1--;
printf ("%.2f-- = %.2f\n", n1+1, n1);

    return 0;
}