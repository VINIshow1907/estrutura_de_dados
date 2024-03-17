/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    system("clear");
    
    float valor1,valor2,valor3;
    
    printf("Digite um valor:");
    scanf("%f",&valor1);
    
    printf("Digite um valor:");
    scanf("%f", &valor2);
    
    printf("Digite um valor:");
    scanf("%f", &valor3);
    
    if(valor1 >= valor2 && valor1 >= valor3){
        printf("O maior valor é: %f\n\n", valor1);
    } else if (valor2 >= valor1 && valor2 >=valor3){
        printf("O maior valor é: %f\n\n", valor2);
    } else{
        printf("O maior valor é: %f\n\n", valor3);
    }
    
}
