#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numeroaleatorio  3
#define numeroordenado 3

int main() {
    int matriz[numeroaleatorio][numeroordenado];
    int i, j;
    int soma = 0;

    srand(time(NULL));

    printf("Matriz:\n");
    for (i = 0; i < numeroaleatorio; i++) {
        for (j = 0; j < numeroordenado; j++) {
            matriz[i][j] = rand() % 100; 
            printf("%d ", matriz[i][j]);
            soma += matriz[i][j]; 
        }
        printf("\n");
    }


    printf("A soma de todos os elementos da matriz é: %d\n", soma);

}
