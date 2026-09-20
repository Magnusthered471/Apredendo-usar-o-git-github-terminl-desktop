#include <stdio.h>
#include <stdlib.h>
int main () {
             //   Aula 5
    // vamos aprender ler numeros reais com a funcao scanf
    // float num = 3.14; < --- primeio fomato.
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num); // < --- quando for um float sempre sera o (%f) e se for o int sera(%d)
    printf("Voce digitou: %.1f\n", num); // < --- Por padrao sempre irar mostrar um total 6 casas decimais, colocando um . e um numero etre o % e o f pode decidir a quantade de casas que pode aparecer exemplo %.1f = (1.1) = so vai mostrar uma casa.
    return 0;
}