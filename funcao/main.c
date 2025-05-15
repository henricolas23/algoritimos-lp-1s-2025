#include <stdio.h>

/***
declaração de função
a função tem objetivo: ler um valor dentre 2 opções validas 
a função deve retornar o valor lido
**/
int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1, char* texto_opcao2, char* texto_adicional){
    //codigo da função 
    int opcao_valida;
    
    do{
printf("%s\nescolha uma opcao:\n%d - %s\n ", texto_adicional, opcao1, texto_opcao1, opcao2, texto_opcao2);
scanf("%d", &opcao_valida);
    }
    while(opcao_valida !=opcao1 && opcao_valida != opcao2 );
    return opcao_valida;
}
int main(int argc, char* argv[]){

int opcao, resposta;

opcao = ler_valor_valido(1,0, "iniciar quiz", "sair", "");

if(opcao == 1){
    resposta = ler_valor_valido(1,2,"rio de janeiro", "brasilia", "qual eh a capital do brasil?");
}
do{  
printf("escolha uma opcao:\n1 - Iniciar quiz\n0 - Sair");
scanf("%d", &opcao);
}while (opcao != 1 && opcao != 0);


if(opcao == 1 ){
    do{  
printf("qual a capital do brasil?\n1- rio de janeiro\n2 - brasilia\n");
scanf("%d", &resposta);
}
while (resposta != 1 && opcao != 0);

if(resposta == 2){
    printf("voce acertou!\n");
}
else{
    printf("podemelhorar");
}

}


    return 0;
}