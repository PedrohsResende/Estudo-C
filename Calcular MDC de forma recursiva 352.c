#include <stdio.h>

int mdc(int num1, int num2)
{
    //euclides
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return mdc(num2, num1%num2);
    }
}

int main()
{
    int num1,num2,res;
    scanf("%d", &num1);
    scanf("%d", &num2);
    res = mdc(num1,num2);
    printf("%d", res);
    
}
