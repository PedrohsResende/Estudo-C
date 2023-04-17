#include <stdio.h>

int main()
{
    double salario, comprometimento, resultado;
    scanf("%lf", &salario);
    scanf("%lf", &comprometimento);
    resultado = salario*0.3 - comprometimento;
    if (salario*0.3 > comprometimento)
    {
        printf("%.2lf", resultado);
    }
    else
    {
        printf("0.00");
    }
    return 0;
}   
