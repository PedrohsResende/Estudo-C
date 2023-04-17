#include <stdio.h>
#include <math.h>

int main() 
{
    double A,pi,resultado;
    scanf("%lf",&A);
    pi = 3.14159;
    resultado = (pi * pow(A,2))/10000;
    printf("Area = %.4lf", resultado);
    return 0;
}