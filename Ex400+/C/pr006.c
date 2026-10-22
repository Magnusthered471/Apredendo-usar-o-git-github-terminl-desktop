#include <stdio.h>
/* 
    6. Faça um programa que declare uma variável real com precisão dupla, atribua a essa variável a expressão 123/456 e mostre o resultado que está armazenado na variável? Que valor é mostrado na tela? Por que isso acontece? Como pode ser evitado esse tipo de problema?
*/
int main (void) {
    double num = 123 / 456;
    printf("O valor da variavel seria %f\n", num); 
    // < -- O valor da variavel seria 0.000000
    // Pois 123 e 456 sao inteiros  o resultado forcadamente sera de um inteiro, e para evitar e s usar mros reais xemplo 123.0 / 456.0
    return 0;
}