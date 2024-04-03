#include <stdio.h>
int somadosPares(int i, int soma);
int main()
{
    int soma = 0; 
    int i; 
    for (i = 1; i < 101; i++){
        if(i % 2 == 0){
           soma = somadosPares(i, soma);
        }
    }
    printf("A soma dos números pares de 1 a 100 é: %d", soma);
}
int somadosPares(int i, int soma){
    return soma += i;
}