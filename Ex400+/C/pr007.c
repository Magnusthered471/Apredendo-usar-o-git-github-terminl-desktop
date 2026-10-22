#include <stdio.h>
/*
    7. Faça um programa capaz de ler um carectere,informado pelo usuário, e mostrar o caractere escolhido pelo usuário.
*/
int main (void) {
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    printf("O caractere digitado foi: %c\n", letra);
    return 0;
}