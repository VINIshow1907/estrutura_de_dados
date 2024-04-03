/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int idadeEmDias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idadeEmDias);

    anos = idadeEmDias / 365;

    int diasRestantes = idadeEmDias % 365;

    meses = diasRestantes / 30;

    diasRestantes %= 30;

    int anoAtual = 0;
    while (diasRestantes >= 365) {
        
        if ((anoAtual % 4 == 0 && anoAtual % 100 != 0) || anoAtual % 400 == 0) {
            diasRestantes -= 366;
        } else {
            diasRestantes -= 365;
        }
        anoAtual++;
    }

    dias = diasRestantes;

    printf("A idade expressa em anos, meses e dias é: %d anos, %d meses, %d dias\n", anos, meses, dias);
}

   

