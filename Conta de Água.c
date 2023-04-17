#include <stdio.h>

int main() {
    int consumo, valor;
    scanf("%d", &consumo);
    if (consumo <= 10) 
    {
        valor = 7;
    } 
    else if (consumo <= 30) 
    {
        valor = 7 + (consumo - 10) * 1;
    }
    else if (consumo <= 100) 
    {
        valor = 7 + 20 + (consumo - 30) * 2;
    }
    else 
    {
        valor = 7 + 20 + 140 + (consumo - 100) * 5;
    }
    printf("%d", valor);
    return 0;
}
