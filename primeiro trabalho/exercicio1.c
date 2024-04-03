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
    int num1, num2;
    float valor;
    //declaração das variáveis
    printf("Digite um número: ");     
    scanf("%hd",&num1);
    printf("Digite um número: ");     
    scanf("%hd",&num2);
    valor = num1+num2;               
    printf("Soma é: %g\n",valor);   

    valor = num1-num2;               
    printf("Subtração primeiro pelo segundo é: %g\n",valor);  
    
    valor = num2-num1;               
    printf("Subtração segundo pelo primeiro: %g\n",valor);  
    
    valor = num1*num2;               
    printf("Multiplicação: %g\n",valor);
    
     valor = (float)num1/num2;               
    printf("Divisão primeiro pelo segundo : %.3f\n",valor);
    
     valor = (float)num2/num1;               
    printf("Divisão segundo pelo primeiro : %.3f\n",valor);
    
     valor = num1/num2 ;               
    printf("Quociente inteiro da divisão do primeiro número pelo segundo : %g\n",valor);
    
     valor = num2/num1 ;               
    printf("Quociente inteiro da divisão do segundo número pelo primeiro : %g\n",valor);
    
     valor = num1 - (num1 / num2) * num2 ;               
    printf("resto da primeiro número pelo segundo : %f\n",valor);
    
     valor = num2 - (num2 / num1) * num1 ;               
    printf("resto da primeiro número pelo segundo : %f\n",valor);
    
    
    
    

}
