#include <stdio.h>

int main()
{
    double nota1,nota2,nota3,resultado;
    
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    resultado = (nota1+nota2+nota3)/3;
    if (resultado >= 70 && resultado <=100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO", resultado);
    }
    else if (resultado >= 0 && resultado < 40)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO", resultado);
    }
    else if (resultado >= 40 && resultado < 70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL", resultado);
    }
    else
    {
        printf("Media invalida");
    }

}
