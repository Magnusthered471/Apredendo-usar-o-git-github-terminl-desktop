#include <stdio.h>
#include <stdlib.h>
int main (){
    /*

=====  foco agora e uma funcao input, que e uma funcao de entrada e saber o que uma variavel, que recebe um valor do usuario.

    */
    // Primeiro vamos declarar uma variavel do tipo inteiro(int), que vai receber o valor atribuindo pelo usuario um 50.
    int valor, valor1; // < ---- O foco e uma variavel do tipo inteiro(int), que vai receber o valor digitado pelo usuario.
    valor = 50; // < ---- O foco e uma atribuicao(=) de valor a variavel valor, que recebe o valor 50.
    printf("\nO valor da minha variavel sera: %d\n", valor);
//-------------------------------------------------------------------------------------------------------------------------------/

    // Agora o foco e uma funcao input, undo o scanf, que e uma funcao de entrada, que vai receber um valor digitado pelo usuario e atribuir a variavel valor.
    printf("Digite um valor: \t");
    scanf("%d", &valor);
    printf("Esse e o valor digitado %d\t", valor);

    // Vamos declarar outra variavel do tipo inteiro(int), que vai receber o valor digitado pelo usuario.
    printf("Digite dois valores: ");
    scanf("%d", &valor);
    scanf("%d", &valor1);
    printf("Esse e o outro valor digitado %d %d\t", valor, valor1);

    printf("\nPressione qualquer tecla para continuar...\n");
    return 0;
}
