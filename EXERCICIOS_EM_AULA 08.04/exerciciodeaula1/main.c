#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vetA [N]; 
    int vetB[N];
    int vetC [N];
    srand(time(NULL));
    
        printf("Primeiro vetor \n");
    for(int a = 0; a < N; a++)
    {
        vetA[a]=rand()%51;
        printf("%d\n", vetA[a]);
    }
printf("\n");
    
        printf("Valor puxado \n");
  
  
  for(int b = 0; b < 1; b++)
    {
       
       vetB[5]= vetA[1];
        printf("%d\n", vetA[4]);
        
        vetB[4]= vetA[2];
        printf("%d\n", vetA[3]);
        
        vetB[3]= vetA[3];
        printf("%d\n", vetA[2]);
        
        vetB[1]= vetA[4];
        printf("%d\n", vetA[1]);

        vetB[0]= vetA[5];
        printf("%d\n", vetA[0]);
        
    }
  printf("\n");
}