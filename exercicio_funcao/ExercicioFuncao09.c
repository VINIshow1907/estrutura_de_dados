#include <stdio.h>
double calcularaPotencia(double base, int expoente); 
int main()
{
    int expoente;
    double base;
    printf("Digite a base da potência, digite 0 para encerrar a operação: ");
    scanf("%lf", &base);
    while(base > 0) {
        printf("Digite o expoente da potência: ");
        scanf("%d", &expoente);
        calcularaPotencia(base, expoente);
        printf("Digite a base da potência, digite 0 para encerrar a operação: ");
        scanf("%lf", &base);
    }
}
double calcularaPotencia(double base, int expoente)
{
    double result = 1;
    int i;
        for(i = 1; i <= expoente; i++){
            result *= base;   
        }
        return printf("A potência do número %.1lf elevado por %d é: %.1lf\n", base, expoente, result);
}