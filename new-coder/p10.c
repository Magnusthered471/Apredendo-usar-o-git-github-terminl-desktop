#include <stdio.h>
#include <stdlib.h>
// Aula 10 < ====== Exercicio: Ler sua idade, peso, altura, sexo.
int main () {
    int idade;
    float peso, altura;
    char sexo;
    printf("Digite o numero da sua idade nesse momento anual: ");
    scanf("%d", &idade);
    printf("Digite o seu genero (M ou F): ");
    scanf(" %c", &sexo); // Note the space before %c to consume any leftover newline character
    printf("Digite a sua altura e peso: ");
    scanf("%f %f", &altura, &peso);
    printf("Sua idade: %d anos, sexo: %c, altura: %.2f m, peso: %.2f kg\n", idade, sexo, altura, peso);
    return 0;
}
