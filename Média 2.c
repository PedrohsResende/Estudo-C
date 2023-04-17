#include <stdio.h>

int main() 
{
    double A,B,C,resultado;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    resultado = (A*2+B*3+C*5)/10;
    printf("MEDIA = %.5f", resultado);
    return 0;
}

