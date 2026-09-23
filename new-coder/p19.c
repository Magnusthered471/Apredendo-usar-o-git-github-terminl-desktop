#include <stdio.h>
#include <stdlib.h>
int main()  {
    float x = 3.14159265358979323846264338327950288;
    double y = 3.14159265358979323846264338327950288;
    long double z = 3.14159265358979323846264338327950288;
    // double -- > %lf
    // long double -- > %Lf
    // %zu -- > serve para imprimir o tamanho de uma variavel em bytes, ou seja, quantos bytes uma variavel ocupa na memoria. melhor para o sizeof, pois o sizeof retorna um valor do tipo size_t, que e um tipo de dado inteiro sem sinal, ou seja, ele nao pode ser negativo. e o %zu e o especificador de formato para imprimir um valor do tipo size_t(especificador de byte do sizeof).
    printf("Quantos bytes um tipo float possui: %zu\n", sizeof x);
    printf("Valor de x: %f\n", x);// < == 4 * 8 = 32 
    // ====================================================================================== >
    printf("Quantos bytes um tipo double possui: %zu\n", sizeof y);
    printf("Valor de y: %.10lf\n", y);// < == 8 * 8 = 64
    // ====================================================================================== >
    // se fose windons teria que usar o __mingw_printf, mas como meu e linux nao precisa.
    printf("Quantos bytes um tipo long double possui: %zu\n", sizeof z);
    printf("Valor de z: %.15Lf\n", z);// < == 16 * 8 = 128
    // ====================================================================================== >
    return 0;
}