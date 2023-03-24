#include <stdio.h>
#include <stdlib.h>

// Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
//unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
//de cada peça 2. Após, calcule e mostre o valor a ser pago.

int main (){

    int codPeca1, codPeca2, numPecas1, numPecas2;
    float valorPeca1, valorPeca2, total;

    printf("Insira o codigo da peca 1: ");
    scanf("%d", &codPeca1);

    printf("Informe a quant. de pecas: ");
    scanf("%d", &numPecas1);

    printf("Insira o valor da peca 1: ");
    scanf("%f", &valorPeca1);

    printf("Insira o codigo da peca 2: ");
    scanf("%d", &codPeca2);

    printf("Informe a quant. de pecas: ");
    scanf("%d", &numPecas2);

    printf("Insira o valor da peca 2: ");
    scanf("%f", &valorPeca2);

    total = (numPecas1 * valorPeca1) + (numPecas2 * valorPeca2);    
    
    printf("\n\nValor a ser pago: %.2f", total);

    return 0;

}