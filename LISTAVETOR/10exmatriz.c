#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
    int matriz[N][N];
    int somasequencia = 0, soma = 0;
    
    srand(time(NULL));
    
    for (int linha = 0; linha < N; linha++) 
    {
        for (int coluna = 0; coluna < N; coluna++) 
        {
            matriz[linha][coluna] = rand() % 2;
            printf("%d ", matriz[linha][coluna]);
            
            if (linha == coluna)
                {
                    somasequencia += matriz[linha][coluna];
                }
                
            soma += matriz[linha][coluna];
        }
        
        printf("\n");
    }
    
        if(soma == 3 && somasequencia == 3)
        {
            printf("É uma matriz identidade!");
        }
        else 
        {
            printf("Não é uma matriz identidade!");
        }
}








