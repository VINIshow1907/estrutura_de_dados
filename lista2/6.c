#include <stdio.h>
int main()
{
   int i = 1000, resto; 
   for(i = 1000; i < 2000; i++)
   {
       resto = i % 11;      
       if(resto == 5){
           printf("Número %d!\n", i);
       }
   }
}