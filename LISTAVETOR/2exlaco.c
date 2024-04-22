#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 

int produtoEscalar(int vetor1[], int vetor2[]) {
    int resultado = 0;
    for (int i = 0; i < N; i++) {
        resultado += vetor1[i] * vetor2[i];
    }
    return resultado;
}

int main() {
    int vetor1[N], vetor2[N]; 
    int i;

    srand(time(NULL));

    printf("Vetor 1: ");
        for (i = 0; i < N; i++) {
        vetor1[i] = rand() % 10; 
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
        for (i = 0; i < N; i++) {
        vetor2[i] = rand() % 10; 
    printf("%d ", vetor2[i]);
    }
    printf("\n");

    int resultado = produtoEscalar(vetor1, vetor2);
    printf("O produto escalar dos vetores é: %d\n", resultado);

   
}
