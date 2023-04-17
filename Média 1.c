#include <stdio.h>

int main() 
{
    double A,B,resultado;
    scanf("%f", &A);
    scanf("%f", &B);
    resultado = (A*3.5+B*7.5)/11;
    printf("MEDIA = %.5f", resultado);
    return 0;
}

