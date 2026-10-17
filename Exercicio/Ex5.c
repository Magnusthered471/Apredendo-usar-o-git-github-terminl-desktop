#include <stdio.h>
#include <stdlib.h>
/*
        ==Exercicio 5==
    5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faca um programa que solicite o
numero de dias trabalhados pelo encanador e imprima a quantia liquida que devera ser paga,
sabendo que sao descontados 8% para imposto de renda.
*/     
int main() {
    float encanador = 45.0, dias;
    int imposto = 8;
    printf("Quantos dias voce traalhou nesse mes: ");
    scanf("%f", &dias);
    encanador = encanador * dias;
    imposto = imposto / 100;
    encanador = encanador * imposto;
    printf("O resultado foi %f\n", encanador);
    return 0;
}