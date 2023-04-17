#include <stdio.h>

int main()
{
    int num1,num2,num3,num4,num5,todos,palindromo;
   scanf("%d %d %d %d %d", &num1,&num2,&num3,&num4,&num5);
   todos = num1*10000+num2*1000+num3*100+num4*10+num5;
   // palindromo, numero igual de trás pra frente e de frente pra trás
   palindromo = num5*10000+num4*1000+num3*100+num2*10+num1;
   if ( todos == palindromo)
   {
        printf("Feldspato, de um esporro no Gabro por mim");
   }
   // perigoso , /2 and !/7 - gemeo calido
    else if (todos % 7 == 1 && todos % 2 == 0)
    {
        printf("Feldspato, va para Gemeo Calido");
    }
   // perigoso , /7 and !/2 - gemeo cinzento
   else if (todos % 2 == 1 && todos % 7 == 0)
   {
        printf("Feldspato, va para Gemeo Cinzento");
   }
   // perigoso [50000,00000] - vale incerto
   else if (todos >= 50000 && todos <=99999)
   {
        printf("Feldspato, va para Vale Incerto");
   }
   // perigoso [100,49999] - profundezas do gigante
   else if (todos >= 100 && todos <= 49999)
   {
        printf("Feldspato, va para Profundezas do Gigante");
   }
   // perigoso (0,3) - abrolho sombrio
   else if (todos >= 0 && todos <= 3)
   {
        printf("Feldspato, va para Abrolho Sombrio");
   }
   else
   {
        printf("Feldspato, foi um erro de leitura");
   }
    return 0;
}   

