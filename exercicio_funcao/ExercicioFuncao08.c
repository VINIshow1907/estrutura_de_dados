#include <stdio.h>
int coferirA(int ano);

int main()
{
    int ano;
   
    printf("Digite o ano, para encerrar a operação digite 0: ");
    scanf("%d", &ano);
     while(ano > 0)
     {
        coferirA(ano);
        printf("Digite o ano, para encerrar a operação digite 0: ");
        scanf("%d", &ano);
    }
}
int coferirA(int ano){
    if(ano % 4 == 0){
           return printf("O ano %d é bissesto!\n", ano);
        }else
        {
           return printf("O ano %d não é bissesto!\n", ano);     
        }
}