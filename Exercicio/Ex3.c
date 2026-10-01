#include <stdio.h>
#include <stdlib.h>
/*  
        ====Exercicio 3 ====
    3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma variável auxiliar.
*/
int main() {
    int a, b;
    printf("Digite dois valores, primeiro variavel A: ");
    scanf("%d", &a);
    printf("Digite o segundo valor, variavel B: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("O valor de A: %d e o valor de B: %d\n", a, b);
    return 0;
}