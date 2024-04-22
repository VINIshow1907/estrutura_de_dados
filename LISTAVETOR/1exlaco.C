#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int tamanho = 10;
    int vetor[tamanho];
    int contPares = 0;
    
    printf("Valores gerados aleatoriamente:\n");

    
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 50; 
        printf("%d ", vetor[i]);
    }
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            contPares++;
        }
    }
    printf("\n\nO vetor possui %d elementos pares.\n", contPares);

}