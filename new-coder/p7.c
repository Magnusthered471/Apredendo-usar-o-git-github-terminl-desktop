#include <stdio.h>
#include <stdlib.h>
// Ler cararateres com a funcao getchar().
int main() {
    char letra;
    printf("Digite uma letra amigo: ");
    letra = getchar();
    printf("Caractere lido: %c\n", letra);
}
