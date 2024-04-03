#include <stdio.h>
void menu();
float percentualSuperior(int totalSuperior, int totaldePessoas);
float percentualMedio(int totalMedio, int totaldePessoas);
int main()
{
    int codCorPele, codGrauEsc;
    int totalPreta = 0, totalParda = 0, totalBanca = 0;
    int totalSuperior = 0, totalMedio = 0, totaldePessoas = 0;
    do{
        menu(); 
        printf("Digite o código refente a cor da pele: \n");
        scanf("%d", &codCorPele);
        if (codCorPele == -1) {
            break; 
        }
        if(codCorPele == 1 || codCorPele == 3 || codCorPele == 5){
        printf("Digite o código refente ao grau de estudo: \n");
        scanf("%d", &codGrauEsc);
            switch(codCorPele) {
                case 1:
                    totalPreta++;
                    break;
                case 3:
                    totalParda++;
                    break;
                case 5:
                    totalBanca++;
                    break;
                default:
                    printf("Opção inválida.\n");
            }
            if (codGrauEsc == 6){
                totalSuperior++;
            }
            if (codGrauEsc == 2){
                totalMedio++;
            }
            totaldePessoas++;
        }else {
            printf("Código inválido!\n");    
              }
    }while(codCorPele != -1);

    printf("A distribuição da população por cor é de: \nPessos pretas: %d\nPessoas pardas: %d\nPessoas brancas: %d\n", totalPreta, totalParda, totalBanca);
    float totaldePessoasSuperior = percentualSuperior(totalSuperior, totaldePessoas);
    printf("O percentual de pessoas com o ensino superior completo é: %g%%\n", totaldePessoasSuperior);
    float totaldePessoasMedio = percentualMedio(totalMedio, totaldePessoas);
    printf("O percentual de pessoas com o ensino médio incompleto é: %g%%", totaldePessoasMedio);
    
}
void menu() {
    printf("Cor da pele\tCódigo\tGrau de Escolaridade\tCódigo \n");
    printf("Preta      \t1     \tFundamental completo\t2 \n");
    printf("Parda      \t3     \tMédio completo      \t4 \n");
    printf("Branca     \t5     \tSuperior completo   \t6 \n");
}
float percentualSuperior(int totalSuperior, int totaldePessoas){
    return (float)(totalSuperior * 100)/totaldePessoas;     
}
float percentualMedio(int totalMedio, int totaldePessoas){
    return (float)(totalMedio * 100)/totaldePessoas; 
}