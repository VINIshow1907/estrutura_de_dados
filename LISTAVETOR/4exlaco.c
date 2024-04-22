#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 

int main() {
    int vetor[N]; 
    int valorProcurado, encontrado = 0; 
    int i;

    srand(time(NULL));

    printf("Vetor: ");
    for (i = 0; i < N; i++) {
        vetor[i] = rand() % 100; 
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valorProcurado);

    for (i = 0; i < N; i++) {
        if (vetor[i] == valorProcurado) {
            encontrado = 1; 
            break;
        }
    }

    if (encontrado) {
        printf("O valor %d foi encontrado no vetor.\n", valorProcurado);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valorProcurado);
    }
}