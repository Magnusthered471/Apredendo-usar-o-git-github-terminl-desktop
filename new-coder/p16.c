#include <stdio.h>
#include <stdlib.h>
// Aula 16 < === Como aumentar um espco de memoria de um inteiro usando o operador long === >
int main () {
    long long int x = 2147483647; // < -- O valor máximo de um long int é 9223372036854775807, que é 2^63 - 1. O valor mínimo de um long int é -9223372036854775808, que é -2^63.
    // no long nao se imprime %d mas como um %ld ou %li (Fato interesante se usar o long long talves precose usar %lld ou %lli).
    printf("O tamanho de x m bytes: %zu\n", sizeof(x));
    // fato, certo sistema exemplo um linux 64 bits nao tem poblema de lld/lli ou ld/li pode ser usado de qualquer jeito mas, programas de 32 bits, como o windows 32 bits, precisao e aceitam o lld e lli e o ld ou li.

    printf("O valor da variavel x: %lld\n", x);
    x++;
    printf("O valor da variavel x: %lli\n",x);
    return 0;
}