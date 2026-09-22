#include <stdio.h>
#include <stdlib.h>
// Aula 14 < === Redozindo o comsumo de memori usando operador short === >
int main () {
    int y = 0;
    short int x = 32767;
    // vendo o quanto de memoria que um short int ocupa, que é 2 bytes, ou seja, 16 bits.
    printf("Tamanho em memoia de um tipo short int: %dbytes\n", sizeof(x));
    printf("O tamanho da memoria short(variavel y) na memoria: %dbytes\n", sizeof(y));
    // vendo o limite de um short int, que é 2 bytes, ou seja, 16 bits. O valor máximo de um short int é 32767.
    printf("O valor da variavel x: %d\n", x);
    x++;
    // O  %hi é usado para imprimir o valor de uma variável do tipo short int. O valor máximo de um short int é 32767, então quando incrementamos o valor de x, ele ultrapassa esse limite e volta para o valor mínimo de um short int, que é -32768.
    // por que nao usar o %d ao inves do %hi? Porque o %d é usado para imprimir o valor de uma variável do tipo int, que é 4 bytes, ou seja, 32 bits. O valor máximo de um int é 2147483647, então quando incrementamos o valor de x, ele ultrapassa esse limite e volta para o valor mínimo de um int, que é -2147483648.
    printf("O valor da variavel x: %hi\n", x);
    return 0;
}