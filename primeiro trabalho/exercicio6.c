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

  int IdadeemAnos, IdadeemMeses, IdadeemDias, IdadeemHoras, IdadeemMinutos;

  printf ("Digite sua idade em anos: ");
  scanf ("%d", &IdadeemAnos);
  
  IdadeemMeses = IdadeemAnos * 12;
  
  printf("A sua idade em meses é: %d\n", IdadeemMeses);
  
  IdadeemDias = IdadeemAnos * 365;
  
  printf("A sua idade em dias é: %d\n", IdadeemDias);
   
  IdadeemHoras = IdadeemDias * 24;
  
  printf("A sua idade em horas é: %d\n", IdadeemHoras);
  
  IdadeemMinutos = IdadeemHoras * 60;
  
  printf("A sua idade em minutos é: %d\n", IdadeemMinutos);
}