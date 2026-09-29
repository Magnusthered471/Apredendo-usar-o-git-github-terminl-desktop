#include <stdio.h>
#include <stdlib.h>
    /* 
        ============O que e o operador unsigned?============
        trocar o %d por %u
        Limite para o tipo int: 2.147.483.647 | se ele receber + 1 vai dar int -2.147.483.648
        short int ---- %d ou %hi
        unsigned short int ----- %hu ou %d
        unsigned long int ----- %lu
        unsigned long long int ----- %llu
    */
int main() {
    
    int x = 2147483647; // < -- O novo limite sera 4.294.967.295
    x++;
    unsigned int w = 4294967295;
    unsigned short int y = 55000;
    unsigned long int d = 18446744073709551615;
    unsigned long long int f = 18446744073709551615;
    printf("Valor do x: %d\n", x);
    printf("Valor do w: %u\n", w);
    printf("Valor do y: %hu\n", y);
    // se meu linux fosse de 32 bits seria diferent veja os comentario.
    printf("Valor do d: %lu\n", d); // < -- 32 bits = 4294967295
    printf("Valor do f: %llu\n", f); // < -- 64 bits = 18446744073709551615
    // Mais isso aferta mais windons etc ja que meu linux sendo de 64 bits nao tem diferenca aparente.
    return 0;
}