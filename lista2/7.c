#include <stdio.h>
int main()
{
    float valSalario, somaSalario = 0, mediaSalario, maior = 0, percentual;
    int numFilhos, totalPessoas = 0, somaNumFilhos = 0, mediaNumFilhos, totalPessoas2 = 0;
        printf("Digite o valor do salário (se desejar encerrar a operação digite -1): ");
        scanf ("%f", &valSalario);
    while(valSalario > 0){
        printf("Digite o número de filhos: ");
        scanf("%d", &numFilhos);
        somaSalario += valSalario;
        totalPessoas++; 
        somaNumFilhos += numFilhos;
        if(valSalario > maior){
            maior = valSalario;
        }
        if(valSalario <= 100){
            totalPessoas2++;
        }   
        printf("Digite o valor do salário (se desejar encerrar a operação digite -1): ");
        scanf ("%f", &valSalario);
    }
    if(totalPessoas > 0){
        mediaSalario = somaSalario / totalPessoas;
        printf("A média de salários é: %.2f\n", mediaSalario);
        mediaNumFilhos = somaNumFilhos / totalPessoas;
        printf("A média do número de filhos por pessoa é: %d\n", mediaNumFilhos);
        printf("O maior salário é: %.2f\n", maior);       
        percentual = ((float)totalPessoas2 / totalPessoas) * 100;
        printf("O percentual de pessoas que recebem até R$100,00 é =: %.2f %%\n", percentual);
    }
    else{
        printf("Não há dados inseridos!");
    }
}