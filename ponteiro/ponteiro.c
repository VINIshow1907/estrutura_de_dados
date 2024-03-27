void preencher (int *valor);
int main()
{
    int valor = 0;
    preencher(&valor);
    printf("%d",valor);
}

void preencher (int *valor){
    *valor = 10;
    
}