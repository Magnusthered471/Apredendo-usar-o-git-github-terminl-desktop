#include <stdio.h>
/*
    3. Faca um programa que declare uma variavel real com precisao simples, atribua a essa variavel o valor do numero pi (3.1415) e mostre, para o usuario, o conteudo dessa variavel.
========================================================
    * CONST: Garante imutabilidade. Forca o compilador a alocar o dado diretamente na ROM/Flash, poupando RAM e permitindo otimizacoes.
    * VOID:  Representa ausencia de tipo/retorno.Em funcoes (ex: main(void)): elimina argumentos lixo e limpa a stack.Como ponteiro (void*): ponteiro generico para manipular memoria bruta.
    * F: (ex: 12.890f): Forca o literal a ser tratado como float (32 bits) de imediato.Evita que o compilador o crie como double (64 bits) e faca conversao desnecessaria.    
*/
int main(void) {
    const float pi = 3.1415f; 
    printf("O valor do pi seria %f\n", pi);
    return 0;
}