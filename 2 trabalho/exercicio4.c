/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo;
    float preco;
    int quantidade;

    
    printf("Digite o código do item pedido: ");
    scanf("%d", &codigo);

  
    if (codigo == 100) {
        preco = 1.20;
    } else if (codigo == 101) {
        preco = 1.30;
    } else if (codigo == 102) {
        preco = 1.50;
    } else if (codigo == 103) {
        preco = 1.20;
    } else if (codigo == 104) {
        preco = 1.30;
    } else if (codigo == 105) {
        preco = 1.00;
    } else {
        printf("Código de item inválido.\n");
        return 1; 
    }

  
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    float valorTotal = preco * quantidade;

    printf("Valor a ser pago: R$ %.2f\n", valorTotal);
}

   

