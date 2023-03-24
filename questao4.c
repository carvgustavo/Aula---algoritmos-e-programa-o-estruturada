#include <stdio.h>
#include <stdlib.h>

// Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
//de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

int main(){

    int a, b, c, d, dif;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    printf("Insira o valor de b: ");
    scanf("%d", &b);

    printf("Insira o valor de c: ");
    scanf("%d", &c);

    printf("Insira o valor de d: ");
    scanf("%d", &d);

    dif = (a*b - c*d);

    printf("A diferenca eh: %d", dif);
}
