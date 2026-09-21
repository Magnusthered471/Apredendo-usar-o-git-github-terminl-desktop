#include <stdio.h>
#include <stdlib.h>
// aula 11 < ====== Ler dois caracteres ===== >
int main () {
    char a, b;
    printf("Digite dois caracteres: ");
    // O %c lê um caractere, mas o espaço antes do %c consome qualquer caractere de nova linha que possa ter sido deixado no buffer de entrada. Isso é importante para garantir que a leitura dos caracteres seja feita corretamente.
    scanf(" %c %c", &a, &b);
    printf("Primeira letra: %c\nSegunda letra: %c", a, b);
    return 0;
}