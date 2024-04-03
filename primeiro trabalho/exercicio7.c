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

  float base, altura, area;

  printf ("Digite o valor da base do triangulo: ");
  scanf ("%f", &base);
  
  printf ("Digite o valor da altura do triangulo: ");
  scanf ("%f", &altura);
  
  area = 0.5 * base * altura;
  
  printf("A média do triangulo é: %.2f\n", area);
  
}