#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 

int main() {
    int vetor[N]; 
    int i, ordenado = 1; 
    
    srand(time(NULL));

    printf("Numeros do Vetor: ");
    for (i = 0; i < N; i++) {
        vetor[i] = rand() % 100; 
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (i = 0; i < N - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            ordenado = 0; 
            break;
        }
    }

    if (ordenado) {
        printf("O vetor está ordenado de forma crescente.\n");
    } else {
        printf("O vetor não está ordenado de forma crescente.\n");
    }

  
}