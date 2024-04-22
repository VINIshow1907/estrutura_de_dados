#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maximo 100

int main() {
    int vetor[maximo];
    int tamanho, i;
    int simetrico = 1; 

    srand(time(NULL));

    printf("Digite o tamanho do vetor (no máximo %d): ", maximo);
    scanf("%d", &tamanho);

    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; 
    }
    for (i = 0; i < tamanho / 2; i++) {
        if (vetor[i] != vetor[tamanho - 1 - i]) {
            simetrico = 0; 
            break;
        }
    }
    printf("Vetor: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    if (simetrico) {
        printf("O vetor é simétrico.\n");
    } else {
        printf("O vetor não é simétrico.\n");
    }

}
