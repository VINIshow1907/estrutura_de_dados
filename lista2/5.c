#include <stdio.h>
#include <string.h>
int main() {
    int idade, maior_idade = 0;
    char sexo, cor_olhos[20], cor_cabelo[20];
    int quantidade_mulheres = 0;
    printf("Informe a idade do habitante (-1 para terminar): ");
    scanf("%d", &idade);
    while (idade != -1) {
        if (idade > maior_idade) {
            maior_idade = idade;
        }
        printf("Informe o sexo do habitante (M/F): ");
        scanf(" %c", &sexo);
        printf("Informe a cor dos olhos do habitante: ");
        scanf("%s", cor_olhos);
        printf("Informe a cor do cabelo do habitante: ");
        scanf("%s", cor_cabelo);
        if (sexo == 'F' && idade >= 18 && idade <= 35 && strcmp(cor_olhos, "verdes") == 0 && strcmp(cor_cabelo, "louros") == 0) {
            quantidade_mulheres++;
        }
        printf("Informe a idade do próximo habitante (-1 para terminar): ");
        scanf("%d", &idade);
    }
    printf("\nA maior idade dos habitantes é: %d\n", maior_idade);
    printf("A quantidade de mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros é: %d\n", quantidade_mulheres);
}