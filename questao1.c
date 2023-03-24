#include <stdio.h> 
#include <stdlib.h>

//Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. 
//Imprima X conforme exemplo apresentado abaixo. 
//Não apresente mensagem alguma além daquilo que está sendo especificado.

int main(){
    
    int a, b, x;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    printf("Insira o valor de b: ");
    scanf("%d", &b);

    x = a + b;

    printf("O valor de x eh: %d", x);

    return 0;
}