#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/* 
    4. Faça um programa que leia um número inteiro e depois o imprima com ziseof.
    * int (com sinal): Divide o espaço para aceitar números negativos e positivos (ex: de $-128$ a $127$).
    * uint (sem sinal / unsigned): Ignora os negativos e usa toda a capacidade dos bits só para números positivos, dobrando o limite máximo (ex: de $0$ a $255$).
*/
int main(void) {
    int16_t num;
    int32_t num2;
    printf("Digite um num inteiro: ");
    scanf("%hd %d", &num, &num2);
    printf("O bytes de num seria %hd\n", sizeof(num));
    printf("O bytes de num2 seria %d\n", sizeof(num2));
    return 0;
}