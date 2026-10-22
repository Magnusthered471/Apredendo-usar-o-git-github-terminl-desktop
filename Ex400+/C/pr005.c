#include <stdio.h>
#include <stdlib.h>
/*
    5. Faça um programa que declare uma variável inteira, atribua a essa variável o valor 2.97 e mostre na tela o conteúdo da variável.
    * Que valor é mostrado na tela? Por que isso acontece?
    * Como pode ser evitado esse tipo de problema?
*/
int main(void) {
    int num = 2.97;
    printf("O valor da variavel seria %d", num);
    // O valor seria 2 pois inteiro so mostra numero da frente, e para evitar isso so usar um tipo float ue mostra decimais ou senao usar numeros inteiro sem decimais.
    return 0;
}