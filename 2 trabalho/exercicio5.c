/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char sexo;
    float altura;

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);


    printf("Digite a altura em metros: ");
    scanf("%f", &altura);


    float pesoIdeal;
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido.\n");
        return 1; 
    }

   
    printf("Peso ideal: %.2f kg\n", pesoIdeal);
}

   

