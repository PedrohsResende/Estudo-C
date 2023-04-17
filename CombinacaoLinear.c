#include <stdio.h>

int mdc(int a, int b, int* s, int* t);

int main() 
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int s, t;
    int d = mdc(a, b, &s, &t);
    printf("O MDC de %d e %d é: %d\n", a, b, d);
    printf("Os coeficientes s e t da combinação linear mdc(%d, %d) = s * %d + t * %d são: s = %d, t = %d\n", a, b, a, b, s, t);

    return 0;
}


int mdc(int a, int b, int* s, int* t) 
{
    if (b == 0) {
        *s = 1;
        *t = 0;
        return a;
    }
    int s1, t1;
    int d = mdc(b, a % b, &s1, &t1);
    *s = t1;
    *t = s1 - (a / b) * t1;
    return d;
}