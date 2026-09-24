#include <stdio.h>
#include <stdlib.h>
/*
    =========Caracteres de escape=========
    \a  -->  Alerta (alerta sonoro)
    \b  -->  Retrocesso (backspace)
    \f  -->  Avanço de página (form feed)
    \n  -->  Nova linha (line feed)
    \r  -->  Retorno de carro (carriage return)
    \t  -->  Tabulação horizontal (horizontal tab)
    \v  -->  Tabulação vertical (vertical tab)
    \\  -->  Barra invertida (backslash)
    \'  -->  Aspas simples (single quote)
    \"  -->  Aspas duplas (double quote)
    \n -->  Nova linha (line feed)
==================ETC========================

*/
int main() {
    printf("Hello, World!\n");
    printf("Hello, world\t\n");
    printf("Hello, World!\'\n");
    printf("Hello, World!\"\n");
    printf("Hello, World!\\\n");
    return 0;
}