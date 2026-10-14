#include <stdio.h>
#include <stdlib.h>
/*
    O incremento funsiona assim ++oi(Soma primeiro depois mostrar o resultado exemplo oi = 10, ++oi = 11) ou oi++(Mostra o resultado antigo  depois soma mas nao mostra exemplo oi++ = 10 pois sera = 11 para o oi futuro)
*/ 
int main (){ 
    int resultado,contador = 10;
/*
    // aula 24 operador de incremento ++
    int contador = 10; // < -- valor  10
    // Sinonimos
    contador++;
    contador += 1;
    contador = contador + 1;
    printf("Valor do contador: %d\n", contador++);
    printf("Valor do contador: %d\n", contador);
*/  
    resultado = ++contador;
    printf("Valor do resultado: %d\n", resultado);

    return 0;
}