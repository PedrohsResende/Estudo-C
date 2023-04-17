#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int primo(int x)
{
    int i, divisor = 0;
    for (i=1; i <= x; i++)
    {
        if (x % i == 0)
        divisor ++;
    }

    if (divisor == 2)
        //primo
        return 1;
    else
        //não primo
        return 0;
} 

int main() {
    time_t tempo, fimtempo;
    int eprimo = 0;
    int num = 2; 
    
    time(&tempo); 
    
    while (1) 
    {
        if (primo(num)) 
        {
            eprimo++;
        }
        time(&fimtempo);
        if (fimtempo - tempo >= 60) 
        { 
            printf("Primos em 60 segundos: %d\n", eprimo);
            break;
        }
        num++;
    }
    
    return 0;
}