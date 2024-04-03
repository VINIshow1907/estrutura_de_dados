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
    int tab ;
    int vet[N];
    
    srand(time(NULL));
    for(int i=0; i<N; i++)
    {
        vet[i]=rand()%11;
        printf("%d\n",vet [i]);
    
        for(int k = 1; k < 11; k++)
        {
            tab = vet[i] * k;
            printf("%d\n tabuada X ", tab);
        }
    
    }    
   
}     