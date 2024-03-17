/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int A, B, C;

    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &A, &B, &C);
   
    if(A>=B && A>=C){
        if(B >=C ){
             printf("Em ordem decrescente: %d, %d, %d\n", A, B, C);
        }
        else{
             printf("Em ordem decrescente: %d, %d, %d\n", A, C, B);
        }
    }
    else if(B>=A && B>=C){
        if(A >= C){
             printf("Em ordem decrescente: %d, %d, %d\n", B, A, C);
        }
        else{
             printf("Em ordem decrescente: %d, %d, %d\n", B, C, A);
        }
    }
    else {
        if (A >= B) {
            printf("Em ordem decrescente: %d, %d, %d\n", C, A, B);
        } else {
            printf("Em ordem decrescente: %d, %d, %d\n", C, B, A);
        }
    }
}

   

