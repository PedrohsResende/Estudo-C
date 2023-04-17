#include <stdio.h>

int coprimos(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    return coprimos(b, a % b);
}

int inverso(int a, int m) 
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
 
    if (m == 1) 
    {
        return 0;
    }
 
    while (a > 1) 
    {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
 
    if (x1 < 0) 
    {
        x1 += m0;
    }
 
    return x1;
}

int TeoremaChines(int a[], int m[], int n) 
{
    int num = 1, num2, resposta = 0;
    
    for (int i = 0; i < n; i++) 
    {
        num *= m[i];
    }
    
    for (int i = 0; i < n; i++) 
    {
        num2 = num / m[i];
        resposta += a[i] * inverso(num2, m[i]) * num2;
    }
    
    return resposta % num;
}

int main() 
{
    int n, a[100], m[100];
    
    printf("Digite o número de equações: ");
    scanf("%d", &n);
    printf("Digite os valores de a e m para as equações:\n");
    
    for (int i = 0; i < n; i++) 
    {
        printf("Equação %d: ", i + 1);
        scanf("%d %d", &a[i], &m[i]);
    }
    
    int mdc = m[0];
    for (int i = 1; i < n; i++) 
    {
        mdc = coprimos(mdc, m[i]);
    }
    if (mdc != 1) 
    {
        printf("O Teorema Chinês do Resto não pode ser aplicado.\n");
        return 0;
    }
    
    int resposta = TeoremaChines(a, m, n);
    printf("A solução é %d.\n", resposta);
    
    return 0;
}
