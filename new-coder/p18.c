#include <stdio.h>
#include <stdlib.h>
   // tipo primitivo double para numeros reais, com maior precisao que o float, ou seja, ele e usado para numeros com casas decimais, ou seja, numeros reais.
int main()  {
    float x = 3.1415;
    double y = 3.1415;// < -- substitudo do float, para maior precisao, ou seja, ele e usado para numeros com casas decimais, ou seja, numeros reais.
    printf("Quantos bytes um tipo float possui: %zu\n", sizeof x);
    printf("Quantos bytes um tipo double possui: %zu\n", sizeof y);
    return 0;
}