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
    int vet1 [N]; 
    int vet2 [N];
    int vet3 [N];
    srand(time(NULL));
    for(int a = 0; a < N; a++)
    {
        vet1[a]=rand()%51;
        printf("%d\n", vet1[a]);
    }
printf("\n");
    for(int b = 0; b < N; b++)
    {
        vet1[b]=rand()%11;
        printf("%d\n", vet1[b]);
    }
  printf("\n");
    for(int c = 0; c < N; c++)
    {
        if(vet1[c] > vet2[c])
        {
            vet3[c] = vet1[c];
        }
        else 
        {
            vet3[c] = vet2[c];
        }
        printf("%d\n", vet3[c]);
    }
}