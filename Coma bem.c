#include <stdio.h>
#include <math.h>

int main() 
{
    double conta,resultado, resultado2;
    scanf("%lf", &conta);
    resultado = conta*0.10;
    resultado2 = resultado+conta;
    printf("%.2lf", resultado2);
}