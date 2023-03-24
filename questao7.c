#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

//Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o
//valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³
//. Considere
//(atribua) para pi o valor 3.14159.

int main(){

    float raio, volume; 

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0*pi*(raio*raio*raio))/3;

    printf("O volume da esfera eh %.3f.\n", volume);

}
