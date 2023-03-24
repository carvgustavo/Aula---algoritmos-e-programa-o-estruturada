#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
//vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15%
//de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.

int main(){

    char nome[30];
    float salarioFixo, vendas, comissao, salarioTotal;

    printf("Informe o nome do vendedor: ");
    gets(nome);

    printf("\nInsira o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("\nInforme o total em vendas: ");
    scanf("%f", &vendas);

    comissao = (15 / 100.0) * vendas;

    salarioTotal = salarioFixo + comissao;

    printf("\n O salario do vendedor %s", nome);
    printf("\n A comissao do vendedor no mes eh: %.2f", comissao);
    printf("\n O total a receber eh: %.2f", salarioTotal);

    return 0;
}