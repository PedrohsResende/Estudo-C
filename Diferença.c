#include <stdio.h>

int main() 
{
    int A,B,C,D,resultado;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    resultado = A*B - C*D;
    printf("DIFERENCA = %d", resultado);
    return 0;
}