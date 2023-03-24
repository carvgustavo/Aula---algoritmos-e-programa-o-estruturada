#include <stdio.h>
#include <stdlib.h>

//Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma 
//entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

int main(){
    
    int a, b, soma;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    printf("Insira o valor de b: ");
    scanf("%d", &b);

    soma = a + b;

    printf("A soma eh: %d", soma);

    return 0;
}





