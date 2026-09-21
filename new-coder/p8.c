#include <stdio.h>
#include <stdlib.h>
int main () {
    // Aula 8
    // aprendendo a usar a funcao fgetc para ler variavel de caractere.
    char letra;
    printf("Digite um caractere: ");
    letra = fgetc(stdin);
    printf("Caractere lido %c\n", letra);
    return 0;
}