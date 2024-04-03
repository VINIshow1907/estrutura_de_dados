#include <stdio.h>
int numeroImpar(int i);
int main()
{
    int i;
    for(i = 1; i < 51; i++){
        numeroImpar(i);
    }
}
int numeroImpar(int i)
{
    if (i % 2 != 0)
    {
            return printf("Número: %d\n", i);
    }
}