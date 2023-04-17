#include <stdio.h>
#include <stdbool.h>

int main()
{
    int estudante, idoso;
    scanf("%d", &estudante);
    scanf("%d", &idoso);
    int resultado = verificar(estudante,idoso);
    if (resultado == 1)
        printf("1");
    else
        printf("0");
    return 0;
}

int verificar(int estudante, int idoso)
{
    if (estudante == 1 || idoso ==1)
    {
        return 1;
    }
    else
        return 0;
}