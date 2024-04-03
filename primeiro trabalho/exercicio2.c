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

int main(){
    //Entrada de dados usando scanf();
    
    system("clear");                    
    float Nota1, Nota2, Nota3, media;
    //declaração das variáveis
    printf("Nota primeiro aluno: ");     
    scanf("%f",&Nota1);
    printf("Nota segundo aluno: ");     
    scanf("%f",&Nota2);
    printf("Nota terceiro aluno: ");     
    scanf("%f",&Nota3);
    
    media = (Nota1+ Nota2 + Nota3) /3 ;               
    printf("Media: %.1f\n",media);   

    
    
    

}
