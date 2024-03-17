/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    system("clear");
    
   int a,b;
   
   
   printf("Digite o valor de a:");
   scanf("%d", &a);
   
   printf("Digite o valor de b:");
   scanf("%d", &b);
   
   if (a > b) {
       printf("%d e %d são multiplos. \n", a,b );
   } 
   if(a%b ==0 ){
       printf("são multiplos ");
   }
     else{
       printf("Não são multiplos.\n ", a,b); 
   }
}
