#include <stdio.h>
#include <stdlib.h>
int main() {
    char rainha, rei = 'K'; // < --- atribuindo uma caracere para umas da minha variavel.

    printf("Valor da variavel: %c\n", rei);
    printf("Digite um caractere(a & A, b & B): ");
    scanf("%c", &rainha);
    printf("A variavel chamada rainha tem um caractere salvo como: %c\n", rainha);
    return 0;

}