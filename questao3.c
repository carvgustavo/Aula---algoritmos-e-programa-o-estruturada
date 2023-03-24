#include <stdio.h>
#include <stdlib.h>

//Leia dois valores inteiros. A seguir, calcule o produto 
//entre estes dois valores e atribua esta operação à variável PROD. 
//A seguir mostre a variável PROD com mensagem correspondente.

int main(){

    int num1, num2, prod;

    printf("Insira o primeiro numero: ");
    scanf("%d",&num1);

    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    prod = num1 * num2;

    printf("O produto eh %d", prod);

    return 0;
}