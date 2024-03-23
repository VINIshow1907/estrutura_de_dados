#include <stdio.h>
void menu();
float media(float somadeRenda, int quantPessoa);
float percentualDesempregado(int totaldeDesempregado, int quantdePessoa);
float percentualRenda5000(int totaldeRenda5000, int quantdePessoa);
int main()
{
    int profissao, quantdePessoa = 0;
    float renda, somaRenda = 0, somaContador = 0, somaMedico = 0; 
    char opcao;
    int totaldeContador = 0, totaldeMedico = 0, totaldeDesempregado = 0;
    int totaldeRenda5000 = 0;
    printf("Digite a renda: ");
    scanf("%f", &renda);
    scanf("%c", &opcao);
    
    while(opcao != 'x')
    {
        menu();
        printf("Digite o código referente a profissão: ");
        scanf("%d", &profissao);
        somaRenda += renda;
        quantdePessoa++;
        switch(profissao)
        {
            case 1:
                totaldeContador++;
                somaContador += renda;
                break;
            case 2:
                totaldeMedico++;
                somaMedico += renda;
                break;
            case 3:
                totaldeDesempregado++;
                break;
            default:
                break;
        }
        if(renda > 5000)
        {
            totaldeRenda5000++;
        }
        printf("Digite a renda: ");
        scanf("%f", &renda);
        scanf("%c", &opcao);
    }
    printf("\n\n");
    float resultMediaRenda = media(somaRenda, quantdePessoa);
    printf("A média da renda mensal da população é: %.2f\n", resultMediaRenda);
    float resultMediaContador = media(somaContador, quantdePessoa);
    float resultMediaMedico = media(somaMedico, quantdePessoa);
    if(resultMediaContador > resultMediaMedico){
        printf("Contador possui a maior média!\n");
    }else
    {
        printf("Médico possui a maior média!\n");
    }
    float resultPercentualDes = percentualDesempregado(totaldeDesempregado, quantdePessoa);
    printf("O percentual de pessoas desempregradas é: %g%%\n", resultPercentualDes);
    float resultPercentualRenda = percentualRenda5000(totaldeRenda5000, quantdePessoa);
    printf("O percentual de pessoas que possuem a renda acima de 5000,00 é: %g%%\n", resultPercentualRenda);
}
void menu()
{
    printf("Profissão\tCódigo\n");
    printf("Contador\t1\n");
    printf("Médico  \t2\n");
    printf("Desempregado\t3\n");
}
float media(float soma, int quantdePessoa){
    return soma/quantdePessoa; 
}
float percentualDesempregado(int totaldeDesempregado, int quantdePessoa){
    return (float)(totaldeDesempregado * 100)/ quantdePessoa;
}
float percentualRenda5000(int totalRenda5000, int quantdePessoa){
    return (float)(totalRenda5000 * 100)/ quantdePessoa;
}