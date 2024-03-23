#include <stdio.h>
float media(float soma, int totaldePessoas);
float percentual(int total, int totaldePessoas);
int main()
{
    int nivelSatis, somaNivel = 0, total;
    float tempResid, somaResid = 0, soma;
    int totaldePessoas = 0, totaldePessoasIns = 0, totaldePessoa10 = 0;
    
    printf("Insira o nível de satisfação com a cidade de 1 a 10: ");
    scanf("%d", &nivelSatis);
    while(nivelSatis != -1)
    {
        printf("Insira o tempo de residência em anos: ");
        scanf("%f", &tempResid);
        somaNivel += nivelSatis;
        totaldePessoas++;
        somaResid += tempResid;
        if(nivelSatis < 5)
        {
            totaldePessoasIns++;
        }
        if(tempResid > 10)
        {
            totaldePessoa10++;
        }
        printf("Insira o nível de satisfação com a cidade de 1 a 10 (-1 termina a operação): ");
        scanf("%d", &nivelSatis);
    }
    printf("\n");
    float resultMediaNivel = media(somaNivel, totaldePessoas);
    printf("A média do nivel de satisfação da população é: %.1f\n", resultMediaNivel);
    
    float resultMediaResid = media(somaResid, totaldePessoas);
    printf("A média do tempo de residência da população é: %.1f anos\n", resultMediaResid);
   
    float resulPercInsats = percentual(totaldePessoasIns, totaldePessoas);
    printf("O percentual de pessoas insatisfeitas com a cidade é: %g%%\n", resulPercInsats);
    
    float resulPercAcima10 = percentual(totaldePessoa10, totaldePessoas);
    printf("O percentual de pessoas que redidem na cidade há mais de 10 anos é: %g%%\n", resulPercAcima10);
   
}float media(float soma, int totaldePessoas){
    return soma / totaldePessoas;
}
float percentual(int total, int totaldePessoas){
    return (float)(total * 100)/ totaldePessoas;
}