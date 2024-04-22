#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5 

int main() {
    int vetor[N]; 
    int i;
    srand(time(NULL));

    printf("Vetor inicial: ");
    for (i = 0; i < N; i++) {
        vetor[i] = rand() % 20 - 10; 
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Vetor com valores negativos substituídos por zero: ");
    for (i = 0; i < N; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
        printf("%d ", vetor[i]);
    }
    printf("\n");

}