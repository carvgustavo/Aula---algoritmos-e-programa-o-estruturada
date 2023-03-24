#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

//Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e mostre:
//a) a área do triângulo retângulo que tem A por base e C por altura.
//b) a área do círculo de raio C. (pi = 3.14159)
//c) a área do trapézio que tem A e B por bases e C por altura.
//d) a área do quadrado que tem lado B.
//e) a área do retângulo que tem lados A e B

int main() {

    float a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;

    printf("Insira o valor de a: ");
    scanf("%f", &a);

    printf("/nInsira o valor de b: ");
    scanf("%f", &b);

    printf("/nInsira o valor de c: ");
    scanf("%f", &c);

    triangulo = (a*c)/2;
    circulo = 3.14159*(c*c);
    trapezio = ((a+b)*c)/2;
    quadrado = b*b;
    retangulo = a*b;

    printf("\n\nTRIANGULO: %.3f\n",triangulo);
    printf("CIRCULO: %.3f\n",circulo);
    printf("TRAPEZIO: %.3f\n",trapezio);
    printf("QUADRADO: %.3f\n",quadrado);
    printf("RETANGULO: %.3f\n",retangulo);

}