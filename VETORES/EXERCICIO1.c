/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet[N];
    int media;
    int soma = 0;
    
    srand(time(NULL));
    for(int i=0; i<N; i++){
        
        vet[i]=rand()%51;
        printf("%d\n",vet [i]);
        
        soma += vet[i];
    }
    
        media = soma / N;
        printf("Media dos valores: %d\n",media);
        
    
   
}
