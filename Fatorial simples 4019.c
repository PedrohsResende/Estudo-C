#include <stdio.h>

int fatorial(int num)
{
    if (num == 0) 
        {
            return 1;
        }
    else
    return(num*fatorial(num-1));
}

int main()
{
    int num,res;
    scanf("%d", &num);
    res = fatorial(num);
    printf("%d", res);
}
