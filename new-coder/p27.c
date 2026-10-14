#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
        /*
        Acetuacao e a tabela ASCII
        1 caractre tem 1 byter (8 bits) -> -128 ate 127
        unsigned 1 byte -> 0 ate 255
======================================================================
        9 e o caractere de tabulacao \t.
        10 e o caractre de nova linha \n (enter)
        48 e o caractere 0
        57 e o caractere 9
        65 e a letra A maiuscula
        66 e o letra B maiuscula
        90 e a letra Z maiuscula
        97 e a letra a minusculo
        122 e a letra z minusculo


=======================================================================

        */
int main () {
    char letra = 'f';// < -- Usar para caracteres ''
    //   setlocale(LC_ALL,NULL);< --- O padrao natural do c
    //   setlocale(LC_ALL,""); < ---- Vai mudar para o padrao do sistema operacional depedendo do  sistema do usuario
    setlocale(LC_ALL,"portuguese");// < -- os as caractere portugues brasileiro.
    return 0; 
}