#include <stdio.h>
#include <stdlib.h>
    // Uso do oprador long para tipo primitivo double.
int main() {
    float x = 3.14159265358979323846;
    double z = 3.14159265358979323846;
    long double y = 3.14159265358979323846;
    printf("Quantos bytes um float pussui: %.10lf\n", x);
    printf("Quantos bytes um double pussui %d\n", sizeof z);
    printf("Quantos bytes um tipo long double possui: %d\n", sizeof y);
    return 0;
}