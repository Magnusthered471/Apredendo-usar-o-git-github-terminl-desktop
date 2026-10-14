#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 
        ===Exercicio 4 ====
    4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente.
*/
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float gojeta, despesa;
    int pessoa;
    printf("Digite o valor da despesa: ");
    scanf("%f", &despesa);
    printf("\nDigite o valor da gorjeta(porcentagem): ");
    scanf("%f", &gojeta);
    gojeta = despesa * (gojeta / 100);
    printf("\nDigite o número de pessoas: ");
    scanf("%d", &pessoa);
    despesa = (gojeta + despesa) / pessoa;
    printf("\nO valor por pessoa e: R$ %.2f\n", despesa);

    return 0;   
}
