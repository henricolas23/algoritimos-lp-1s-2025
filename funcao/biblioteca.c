int maior_2n(int a, int b){
    int maior;
    if (a > b){
        maior = a;
    }
    else{
        maior = b;
}
return maior;
}

/*
retorna o maior entre 3 numeros interios
*/
int maior_3n(int a, int b, int c){  
    return maior_2n(maior_2n,(a, b, c));



 return maior;
}
