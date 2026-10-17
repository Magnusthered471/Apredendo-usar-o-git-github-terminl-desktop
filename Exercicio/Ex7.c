#include <stdio.h>
#include <stdlib.h>
/*
        ==Exercicio 7==
    7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
    versão para horas minutos e segundos.Exemplo:Entrada: 3672
*/
int main() {
    float horas, minutos, segundos;
    printf("Digite uma certa quantidads de segundos: ");
    scanf("%f", &segundos);
    minutos = segundos / 60;
    horas = minutos / 60;
    printf("Segundos: %.2f\nMinutos: %.2f\nHoras: %.2f\n", segundos, minutos, horas);
    return 0;
}