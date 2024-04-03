#include <stdio.h>
int main()
{
   int i = 14, soma = 0, totalValores = 0;
   float media;
   for(i = 14; i < 73; i++)
   {
       soma += i;
       totalValores++;
   }
   media = soma / totalValores;  
   printf("A média dos números é: %.2f", media);
}