#include <stdio.h>
#include <stdlib.h>
// Aula 15 <=== Por que somar dos positivos votam como negativo? === >
int main () {
    int x = 2147483647; // < -- O valor máximo de um int é 2147483647, que é 2^31 - 1. O valor mínimo de um int é -2147483648, que é -2^31.
    printf("O valor da variavel x: %d\n", x);
    x++; // < -- Quando somamos 1 ao valor máximo de um int, ele ultrapassa o limite e volta para o valor mínimo(LImite dos negativos), que é -2147483648. Isso acontece porque o int é representado em complemento de dois, e quando somamos 1 ao valor máximo, ele "dá a volta" e volta para o valor mínimo.
    printf("O valor da variavel x: %d\n",x);
    // 4 * 8 = 32 bits.
    return 0;
}