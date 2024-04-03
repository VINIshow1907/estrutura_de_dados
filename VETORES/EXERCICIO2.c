/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet[N];
    int maior= 0;
    int menor= 0;
    
    srand(time(NULL));
    for(int i=0; i<N; i++)
    {
        vet[i]=rand()%51;
        printf("%d\n",vet [i]);
         
         if(vet[i] < menor)
         {
             menor = vet[i];
         }
         if (vet[i] > maior)
         {
             maior = vet[i];
         }
    }
    printf("O menor valor é:%d \n", menor);
    printf("O maior valor é:%d \n", maior);
}