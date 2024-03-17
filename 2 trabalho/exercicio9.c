/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int anos, meses, dias, idadeEmDias;

    printf("Digite a idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idadeEmDias = anos * 365;

    idadeEmDias += meses * 30;

    idadeEmDias += dias;

    printf("A idade expressa apenas em dias é: %d dias\n", idadeEmDias);

}

   

