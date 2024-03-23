#include <stdio.h>
void menu();
float percentual(int parc, int totaldePessoa);

int main()
{
    char sexo, estadoCivil; 
    int totaldeSolteiro = 0, totaldeCasado = 0, totaldeDivorciado = 0;
    int totalF = 0, totalM = 0;
    int totaldePessoa = 0;
    printf("Digite o sexo (F-feminino / M-masculino): ");
    scanf("%c", &sexo);
    while(sexo != 'X')
    {
        menu();
        
        printf("Digite o código referente ao estado civíl: ");
        scanf(" %c", &estadoCivil);
        switch(sexo)
        {
            case 'F':
                totalF++;
                break;
            case 'M':
                totalM++;
                break;
            default:
                break;
        }
        switch(estadoCivil)
        {
            case 'A':
                totaldeSolteiro++;
                break;
            case 'B':
                totaldeCasado++;
                break;
            case 'C':
                totaldeDivorciado++;
            default:
                break;
        }
            totaldePessoa++;
            printf("Digite o sexo (F-feminino / M-masculino):");
            scanf(" %c", &sexo);   
    }
    printf("\n\n");
    printf("A distribuição da população por sexo é:\n Feminino: %d\n Masculino: %d\n", totalF, totalM);
    float percentualSolteiro = percentual(totaldeSolteiro, totaldePessoa);
    float percentualDivorciado = percentual(totaldeDivorciado, totaldePessoa);
    printf("O percentual de pessoas solteiras é: %g%%\n", percentualSolteiro);
    printf("A quantidade de pessoas casadas é: %d\n", totaldeCasado);
    printf("O percentual de pessoas divorciadas é: %g%%\n", percentualDivorciado);
}
void menu()
{
    printf("Estado civíl\tCódigo\n");
    printf("Solteiro(a)\tA\n");
    printf("Casado(a)\tB\n");
    printf("Divorciado(a)\tC\n");
}
float percentual(int parc, int totaldePessoa){
    return (float)(parc * 100)/totaldePessoa;
}