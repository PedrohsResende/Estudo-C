#include <stdio.h>

int divisor (int num, int i, int resultado)
{
    if (i == num)
    {
        return resultado;
    }
    else
    {
        if (i%num == 0)
        {
            resultado++;
        }
        return divisor(num,i+1,resultado);
    }
}

int main ()
{  
    int num;
    scanf("%d", &num);
    divisor(num, 1, 0);
    return 0;
}