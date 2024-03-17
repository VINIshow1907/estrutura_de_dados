/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int i;
    float a, b, c; 
    float temp; // Declaração de temp aqui

    printf("Digite o valor de i (1, 2 ou 3): ");
    scanf("%d", &i);

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
        
    if (i == 1) {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        printf("Valores em ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
        
    } else if (i == 2) {
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        printf("Valores em ordem decrescente: %.2f, %.2f, %.2f\n", a, b, c);
        
    } else if (i == 3) {
        if (a < b && a < c) {
            if (b < c) {
                temp = b;
                b = c;
                c = temp;
            } else {
                temp = a;
                a = c;
                c = b;
                b = temp;
            }
        } else if (b < a && b < c) {
            if (a < c) {
                temp = a;
                a = c;
                c = temp;
            } else {
                temp = b;
                b = c;
                c = a;
                a = temp;
            }
        } else {
            if (a < b) {
                temp = a;
                a = c;
                c = b;
                b = temp;
            } else {
                temp = b;
                b = c;
                c = a;
                a = temp;
            }
        }
        printf("Maior valor entre a, b e c no meio: %.2f, %.2f, %.2f\n", a, b, c);
    } else {
        printf("Valor de i inválido.\n");
    }
}

   

