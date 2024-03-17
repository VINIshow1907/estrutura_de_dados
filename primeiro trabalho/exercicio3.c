/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(){
    //Entrada de dados usando scanf();
    
    system("clear");                    
    float valordeposito, taxajuros, valrendimento, valortotalrendimento;
    //declaração das variáveis
    printf("Valor deposito: ");     
    scanf("%f",&valordeposito);
    printf("taxa de juros: ");     
    scanf("%f",&taxajuros);
    
    valrendimento = valordeposito * (taxajuros / 100) ;    
    valortotalrendimento = valordeposito + valrendimento;
    printf("valor do rendimento: %.2f\n",valrendimento);   
    printf("valor total do rendimento: %.2f\n",valortotalrendimento);   
    

    
    
    

}
