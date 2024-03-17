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

 float basecommaior, basecommenor, altura, area;
 
 printf ("Digite o comprimento da base maior do trápezio:");
 scanf ("%f", &basecommaior);
 
 printf ("Digite o comprimento da base menor do trápezio:");
 scanf ("%f", &basecommenor);
 
 printf ("Digite a altura do trapézio:");
 scanf ("%f", &altura);
 
 area = ((basecommaior + basecommenor) * altura) /2;
 printf("A área de um trapezio é: %.2f\n", area);
 
}