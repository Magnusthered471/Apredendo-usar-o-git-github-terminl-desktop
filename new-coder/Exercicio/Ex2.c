#include <stdio.h>
#include <stdlib.h>
/* 
        ====Exercicio 2 ====
    2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável "a" e um para a variável "b". Em seguida, faça os passos que julgar necessário para que ao final, a variável "a" possua o valor que inicialmente estava em "b" e a variável "b" possua o valor que inicialmente estava em "a". Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/
int main () {
    short int valor1, valor2, Auxiliar; // < -- Para menor uso de bits.
    printf("Digite de 0 a 1000: ");
    scanf("%hd %hd",&valor1, &valor2); // < -- O %hd serve para o short int sabe.
    Auxiliar = valor1;
    valor1 = valor2;
    valor2 = Auxiliar;
    printf("O primeiro valor seria: %hd e o segundo: %hd\n", valor1, valor2);

    return 0;
}