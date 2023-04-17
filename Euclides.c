#include <stdio.h>

int mdc(int a, int b) 
{
    int resto;
    while (b != 0) 
    {
        resto = a % b;
        a = b;
        b = resto;
    }
    
    return a;
}

int main() 
{
    int a, b;
    printf("Dois números:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("O mdc de %d e %d é %d.\n", a, b, mdc(a, b));
}


//RECURSIVO:

/*

#include <stdio.h>

int mdc(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    } 
    else 
    {
        return mdc(b, a % b);
    }
}

int main() 
{
    int a, b;
    
    printf("dois números: ");
    scanf("%d %d", &a, &b);
    
    printf("O mdc de %d e %d é %d.\n", a, b, mdc(a, b));
    
    return 0;
}


*/