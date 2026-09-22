#include <stdio.h>
#include <stdlib.h>
// Aula 17 < --- tamanho de memoria de um float --- > 
int main()  {
    float x = 3.1415;
    //  o short  o large so valem para inteiros, o float e um tipo de dado diferente, ele e usado para numeros com casas decimais, ou seja, numeros reais.
    printf("Quantos byts um tipo float possui: %d\n", sizeof x);
    return 0;
}