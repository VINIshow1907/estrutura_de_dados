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
    printf("Vetor A: \n");
    for(int A = 0; A < N; A++)
    {
        vet1[A]=rand()%11;
        printf("%d\n", vet1[A]);
    }
    printf("\n");
    printf("Vetor B: \n");
    for(int B = 0; B < N; B++)
    {
        vet2[B]=rand()%11;
        printf("%d\n", vet2[B]);
    }
    printf("\n");
    printf("Vetor C: \n");
    for(int C = 0; C < N; C++)
    {
        vet3[C] = vet1[C] + vet2[C];
        printf("%d\n", vet3[C]);
    }
}
 