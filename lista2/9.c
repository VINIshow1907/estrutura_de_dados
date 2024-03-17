#include <stdio.h>
int main() 
{
   int i = 100;  
   for(i = 100; i < 200; i++)
   {
       if(i % 2 != 0){
           printf("O número %d é ímpar! \n", i);
       }
   }
}