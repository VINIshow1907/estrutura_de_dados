#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numeroaleatorio 3
#define numeromaior 3

int main() {
    int matriz[numeroaleatorio][numeromaior];
    int i, j;
    int maior_elemento;

    srand(time(NULL));
    
    printf("Matriz:\n");
    for (i = 0; i < numeroaleatorio; i++) {
        for (j = 0; j < numeromaior; j++) {
            matriz[i][j] = rand() % 100; 
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    maior_elemento = matriz[0][0];
    for (i = 0; i < numeroaleatorio; i++) {
        for (j = 0; j < numeromaior; j++) {
            if (matriz[i][j] > maior_elemento) {
                maior_elemento = matriz[i][j];
            }
        }
    }

    printf("O maior elemento da matriz é: %d\n", maior_elemento);
}
