#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanhovetor 10

int main() {
    int vetor[tamanhovetor];
    int i, j, temp;

    srand(time(NULL));
    
    printf("Vetor inicial: ");
    for (i = 0; i < tamanhovetor; i++) {
        vetor[i] = rand() % 100; 
        printf("%d ", vetor[i]);
    }
    printf("\n");
    for (i = 0; i < tamanhovetor - 1; i++) {
        for (j = 0; j < tamanhovetor - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {

                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    printf("Vetor ordenado: ");
    for (i = 0; i < tamanhovetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

}
