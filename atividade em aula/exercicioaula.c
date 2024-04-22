#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
 
int main()
{
    int matriz[N][N];
    float media;
    srand((unsigned int)time(NULL));
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            matriz[l][c] = rand() % 10;
            printf("%d  ", matriz[l][c]);
        }
        printf("\n");
    }
    for(int l = 0; l < N; l++)
    {
        int somaLinha = 0;
        for(int c = 0; c < N; c++)
        {
            somaLinha += matriz[l][c];
        }
        printf("Soma linha %d: %d\n", l, somaLinha);
    }
    printf("\n");
    for(int l = 0; l < N; l++)
    {
        int somaColuna = 0;
        for(int c = 0; c < N; c++)
        {
            somaColuna += matriz[c][l];
        }
        printf("Soma coluna %d: %d\n", l, somaColuna);
    }
    int somadiagonalprincipal = 0;
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            if(l == c)
            {
                somadiagonalprincipal += matriz[l][c];
            }
        }
    }
    media = somadiagonalprincipal/N;
    printf("Média diagonal principal: %.2f\n", media);
    int maiorValor = 0;
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            if(maiorValor < matriz[l][c])
            {
                maiorValor = matriz[l][c];
            }
        }
    }
    printf("Maior valor da matriz: %d\n", maiorValor);
    printf("Diagonal secundária:  \n");
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            if(l + c == N - 1)
            {
                printf("%d\n", matriz[l][c]);
            }
        }
    }
}