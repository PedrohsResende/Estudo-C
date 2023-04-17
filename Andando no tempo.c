#include <stdio.h>

int main() 
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A+B+C==0) 
    {
        printf("N"); 
    }
    else if ((A<=0 && B<=0) || (A<=0 && C<=0) || (B<=0 && C<=0))
    {
        printf("S");
    }
    else if (A<=0 || B<=0 || C<=0)
    {
        printf("S");
    }
    else
    {
        printf("S");
    }
    return 0;
}
