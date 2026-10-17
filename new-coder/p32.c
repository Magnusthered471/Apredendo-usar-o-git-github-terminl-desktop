#include <stdio.h>
#include <stdlib.h>
/* 
        ==Exercicio 6==
    6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
    como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares.
*/
int main (){
    float reais, dolares;
    printf("Digite o total que recebe por mes no seu emprego: ");
    scanf("%f", &reais);
    dolares = reais / 5.30;
    printf("O valor recebido por mes comvertido em dolar seria %.2f \n", dolares);
    return 0;
}