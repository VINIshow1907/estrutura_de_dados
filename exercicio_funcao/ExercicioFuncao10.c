#include <stdio.h>
void inserirNumero(int cont, int linha);
void inserirEspaco(int espaco);
int main() {
    int numero;
    int base; 
    int linha = 1;
    int espaco;
    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &numero);
    base = (numero - 1) * 2 + 1;  
    espaco = base / 2;
    int cont = 1;
    int i, x, y;
    for(i = 0; i < numero; i++) {
        espaco--;
        inserirEspaco(espaco);
        inserirNumero(cont, linha);
        linha++;
        cont += 2;
        printf("\n");
    }
    return 0;
}
void inserirNumero(int cont, int linha) {
    int x;
    for(x = 0; x < cont; x++) {
        printf("%d", linha);
    }
}
void inserirEspaco(int espaco) {
    int y;
    for(y = 0; y < espaco; y++) {
       printf(" ");
    }
}