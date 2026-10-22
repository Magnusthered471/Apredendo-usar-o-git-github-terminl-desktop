#include <stdio.h>
#include <stdint.h>
/* 
    8. Faça um programa que leia um número inteiro e um número real de precisão simples.Mostre na tela ambos os valores.
*/
int main (void) {
    int16_t num1; // < -- usar o %hd
    float num2;
    printf("Digite um numero inteiro e um real: ");
    scanf("%hd %f", &num1, &num2);
    printf("O numero inteiro: %hd\nReal: %.2f\n", num1, num2);
    return 0;
}