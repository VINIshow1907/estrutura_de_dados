#include <stdio.h>
float mediaIdade(int somaIdade, int totaldePessoas);
float mediaAltrura(float somaAltura, int totaldePessoas);
float percentual(int totaldePessoas, int totaldePessoas2);

int main()
{
    int idade, somaIdade = 0, totaldePessoas = 0, somaAltura = 0, totaldePessoas2 = 0;
    int maioridade = 0;
    float altura;
    
    do{
        printf("Digite a idade:");
        scanf("%d", &idade);
        
        if(idade > -1){
            printf("Digite a altura:");
            scanf("%f", &altura);
        
            somaIdade += idade;
            totaldePessoas++;
            
            somaAltura += altura;
            
            if(maioridade < idade)
            {
                maioridade = idade;
            }
            
            if(altura > 1.80){
                totaldePessoas2++;
            }
        } else
        {
            printf("Idade invalida! \n");
        }
    }while(idade > 0);
    
    float totalMediaIdade = mediaIdade(somaIdade, totaldePessoas);
    printf("A média das idades é: %g\n", totalMediaIdade);
    
    float totalMediaAltura = mediaAltrura(somaAltura, totaldePessoas); 
    printf("A média das alturas é: %.2f\n", totalMediaAltura);
    printf("A maior idade é: %d\n", maioridade);
    
    float totalPessoasAlt = percentual(totaldePessoas, totaldePessoas2); 
    printf("O percentual de pessoas que tem a altura maior que 1.80 é: %.2f%%\n", totalPessoasAlt);
   
}

float mediaIdade(int somaIdade, int totaldePessoas){
    return (float)somaIdade/totaldePessoas;
}

float mediaAltrura(float somaAltura, int totaldePessoas){
    return somaAltura/totaldePessoas;
}

float percentual(int totaldePessoas, int totaldePessoas2) {
    return (totaldePessoas2 * 100)/totaldePessoas;
}
