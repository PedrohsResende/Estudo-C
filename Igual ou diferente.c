#include <stdio.h>

int main()
{
    int resultado, primeiro, segundo, terceiro;
    scanf("%d", &primeiro);
    scanf("%d", &segundo);
    scanf("%d", &terceiro);
    resultado = analizar(primeiro,segundo,terceiro);
    return 0;
}

int analizar(int primeiro, int segundo, int terceiro)
{
    if (primeiro == segundo && segundo == terceiro)
        printf("1");
    else if (primeiro != segundo && segundo != terceiro && primeiro != terceiro)
        printf("2");
    else
        printf("3");
}   
