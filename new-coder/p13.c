#include <stdio.h>
#include <stdlib.h>
// Aula 13 < ====== Como ver tamanho em memoria de um arquivo "sizeof" ===== >
int main () {
    float x = 1.0;
    printf("Tamanho em memoia de um tipo int: %dbytes\n", sizeof(int));
    // 4 * 8 = 32 bits. Um int vale 32 bits que equivale a 4 bytes.
    printf("O tamanho da memoria float(variavel x) na memoria: %d\n", sizeof x);
    return 0;
}