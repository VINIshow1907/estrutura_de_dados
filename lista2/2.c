#include <stdio.h>
 
int main()
{
    int numero, totalNumero = 0;
    float media, soma = 0;
    
    printf ("Digite um numero ou 0 para encerrar a operacao: ");
    scanf ("%d", &numero);
    while(numero != 0 ){
        if(numero % 2 == 0 ) {
            soma += numero;
        }  
        printf ("Digite outro numero ou 0 para encerrar a operacao: ");
        scanf ("%d", &numero );
        totalNumero++;
        if(numero == 0 ){
            printf("Operaçao encerrada!");
        }
     if(totalNumero > 0 ){
        media = soma / totalNumero;
        printf("A media dos numeros pares é %.2f: \n", media);
     }
     else {
         printf("Nenhum numero foi digitado! \n");
     }
    }
}
