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

  int Numerointeiro;
  float Raiz;

  printf ("Digite um número inteiro: ");
  scanf ("%d", &Numerointeiro);
  
  Raiz = sqrt(Numerointeiro);
  
  printf("A raiz quadrada desse número é: %g\n", Raiz);
  
   printf("%d elvado ao quadrado é: %d\n", Numerointeiro, Numerointeiro * Numerointeiro);

}
