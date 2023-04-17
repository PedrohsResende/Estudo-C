#include <stdio.h>

int main()
{
    int num,sucessor,antecessor;
    scanf("%d", &num);
    sucessor = num + 1;
    antecessor = num - 1;
    printf("%d %d\n", antecessor,sucessor);
    return 0;
}