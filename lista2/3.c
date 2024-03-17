#include <stdio.h>

int main(){
    int numero, inter1 = 0, inter2 = 0, inter3 = 0, inter4 = 0, total_numero = 0;

    do 
    {
        printf("Digite um numero (digite um numero negativo para encerrar)");
        scanf("%d", &numero);
    
    if(numero >= 0) {
        if (numero <=25){
            inter1++;
        } else if (numero <=50) {
            inter2++;
        } else if (numero <=75) {
            inter3++;
        }else if (numero <=100) {
            inter4++;
        }
        total_numero++;

                    }
    }
    while (numero >=0);
printf("Quantidade de numeros no intervalo [0,25]: %d\n", inter1);
    printf("Quantidade de numeros no intervalo [26,50]: %d\n", inter2);
    printf("Quantidade de numeros no intervalo [51,75]: %d\n", inter3);
    printf("Quantidade de numeros no intervalo [76,100]: %d\n", inter4);
    printf("Total de numeros digitados: %d\n", total_numero);
        }
