#include <stdio.h>

int main()
{
    int totalPessoas = 15;
    float salario, somaSalario = 0, mediaSalario;
    int idade, maiorIdade = 0, menorIdade = 999, mulheresSalarioBaixo = 0;
    char sexo;

    for (int i = 1; i <= totalPessoas; i++) {
        printf("Informe os dados da pessoa %d:\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Salário: R$");
        scanf("%f", &salario);

        somaSalario += salario;

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }
        if (sexo == 'F' && salario <= 100.00) {
            mulheresSalarioBaixo++;
        }
    }
    mediaSalario = somaSalario / totalPessoas;
printf("\nResultados:\n");
    printf("Média de salário do grupo: R$%.2f\n", mediaSalario);
    printf("Maior idade do grupo: %d anos\n", maiorIdade);
    printf("Menor idade do grupo: %d anos\n", menorIdade);
    printf("Quantidade de mulheres com salário até R$100,00: %d\n", mulheresSalarioBaixo);

}
