#include <stdio.h>


int rick(int num, int tempo, int i)
{
    if (tempo == i)
    {
        printf("%d\n", num);
    }
    else
    {
        i++;
        int somar = num + 3;
        if (i == tempo)
        {
            printf("%d\n", somar);
        }
        else
        {
            i++;
            int res5 = (somar%5)+somar;
            if (i == res5)
            {
                printf("%d\n", res5);
            }
            else
            {
                rick(res5, tempo, i);
            }
        }
    }
}


int main()
{
    int num, tempo;
    scanf("%d %d",&num, &tempo);
    rick(num,tempo,0);
    return 0;

}