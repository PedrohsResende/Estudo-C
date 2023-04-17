#include <stdio.h>

int main() 
{
    int num, horas;
    double valor, resultado;
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &valor);
    resultado = valor * horas;
    printf("NUMBER = %d\n", num);
    printf("SALARY = R$ %.2lf", resultado);
}
