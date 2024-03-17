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

  float NumeroReal, ParteFracionaria, NumeroArredondado;
  int ParteInteira;

  printf ("Digite um número real: ");
  scanf ("%f", &NumeroReal);
  
  ParteInteira = (int)NumeroReal;
  
  printf("O valor inteiro desse número é: %d\n", ParteInteira);

  ParteFracionaria = modf(NumeroReal, &ParteFracionaria);
  
  printf("A parte fracionária desse número é: %.2f\n", ParteFracionaria);
  
  NumeroArredondado = round(NumeroReal);
  
  printf("Este número real arredondado para um número inteiro é: %.0f\n", NumeroArredondado);
}
