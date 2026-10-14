#include <stdio.h>
#include <stdlib.h>
    // Decremento mesma logica do incremento.
int main() {
    /*
    //   Sinonimos
    contador--;
    contador -= 1;
    contador = contador - 1;
    */
    int resultado,contador = 10;
    resultado = contador--;
    printf("Valor do resultado: %d\n", resultado);
    return 0;
}