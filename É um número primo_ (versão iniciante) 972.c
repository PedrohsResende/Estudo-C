#include <stdio.h>

int primo(int num, int i)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 0;
    }
    else if (i<=1)
    {
        return 1;
    }
    else if (num % i == 0)
    {
        return 0;
    }
    else
    {
        return primo(num, i-1);
    }
}

void lerprint()
{
    int num;
    scanf("%d", &num);

    if (num == -1)
    {
        return;
    }
    int result;
    result = primo(num,num/2);
    printf("%d\n", result);
    lerprint();
}

int main()
{
    lerprint();
}