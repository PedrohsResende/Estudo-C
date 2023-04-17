#include <stdio.h>

int main()
{
    double aumento,salario;
    scanf("%lf", &salario);
    if (salario >= 500)
    {
        aumento = salario+(salario*10/100);
        printf("%.2lf", aumento);
    }
    else if (salario >= 300)
    {
        aumento = salario+(salario*7/100);
        printf("%.2lf", aumento);
    }
    else 
    {
        aumento = salario+(salario*5/100);
        printf("%.2lf", aumento);
    }
    return 0;
}   
