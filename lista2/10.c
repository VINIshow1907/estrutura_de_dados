#include <stdio.h>
int main() 
{
   float i, numDigitado;
   int NumDentro = 0, NumFora = 0;
   for(i = 0; i < 10; i++)
   {
       printf("Digite um número: ");
       scanf("%f", &numDigitado);   
       if(numDigitado > 10 && numDigitado < 20){
           NumDentro++;
       }
       else{
           NumFora++;
       }
   }  
    printf("Existem %d números dentro do intervalo! \n", NumDentro);
    printf("Existem %d números fora do intervalo! \n", NumFora);
}