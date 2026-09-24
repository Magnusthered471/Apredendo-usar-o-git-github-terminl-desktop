#include <stdio.h>
#include <stdlib.h>
    /* 
        ============O que e o operador unsigned?============
        trocar o %d por %u
        Limite para o tipo int: 2.147.483.647 | se ele receber + 1 vai dar int -2.147.483.648
    */
int main() {
    
    int x = 2147483647; // < -- O novo limite sera 4.294.967.295
    x++;
    unsigned int w = 4294967295;
    w++;
    printf("Valor do x: %d\n", x);
    printf("Valor do w: %u\n", w);
    return 0;
}