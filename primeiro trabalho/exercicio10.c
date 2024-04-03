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
#include <math.h>

int main ()
{
  system ("clear");

 float salariofuncionario,valorimpostoderenda;
 
 printf ("Digite o valor do seu salário agora:");
 scanf ("%f", &salariofuncionario);
 
 valorimpostoderenda = salariofuncionario * 0.05;
 
 printf("O valor do imposto de renda a ser pago é: %.2f\n", valorimpostoderenda);
 
 
}