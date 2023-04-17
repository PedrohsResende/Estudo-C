#include <stdio.h>
#include <math.h>

int main() 
{
    double F,C;
    scanf("%lf", &F);
    C = (F-32) * 5/9;
    printf("%.2lf\n", C);
    return 0;
}