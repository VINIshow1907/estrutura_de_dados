/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int codigoProduto;
    float precoUnitario;
    int quantidade;

 
    printf("Digite o código do produto: ");
    scanf("%d", &codigoProduto);

    
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

   
    if (codigoProduto == 1001) {
        precoUnitario = 5.32;
    } else if (codigoProduto == 1324) {
        precoUnitario = 6.45;
    } else if (codigoProduto == 6548) {
        precoUnitario = 2.37;
    } else if (codigoProduto == 987) {
        precoUnitario = 5.32;
    } else if (codigoProduto == 7623) {
        precoUnitario = 6.45;
    } else {
        printf("Código de produto inválido.\n");
        return 1; 
    }

   
    float precoTotal = precoUnitario * quantidade;

 
    printf("Preço total: R$ %.2f\n", precoTotal);
}

   

