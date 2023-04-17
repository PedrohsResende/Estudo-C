#include <stdio.h>

int main()
{
    int inteiro1,inteiro2,inteiro3;
    scanf("%d", &inteiro1);
    scanf("%d", &inteiro2);
    scanf("%d", &inteiro3);
    if (inteiro1 <= inteiro2 && inteiro1 <= inteiro3)
        printf("%d", inteiro1);

    else if (inteiro2 <= inteiro1 && inteiro2 <= inteiro3)
        printf("%d", inteiro2);
    
    else 
        printf("%d", inteiro3);

    return 0;
}