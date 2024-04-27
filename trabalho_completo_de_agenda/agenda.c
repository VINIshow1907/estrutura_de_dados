#include <stdio.h>
#include <string.h>
#define N 10


struct Pessoa
{
    int codigo;
    char nome[20];
    int telefone;
};

void Cadastrar(struct Pessoa pessoas[], int *totalPessoas)
{
    printf("---------- Cadastrar Pessoas ----------\n");
    if (*totalPessoas >= N)
    {
        printf("Máximo de 10 pessoas cadastradas atingido! \n");
        return;
    }
        printf("Código: ");
        scanf("%d", &pessoas[*totalPessoas].codigo);
        printf("Nome: ");
        scanf("%s",pessoas[*totalPessoas].nome);
        fflush(stdin);
        printf("Telefone: ");
        scanf("%d", &pessoas[*totalPessoas].telefone);
        
        (*totalPessoas)++;
    }

void Listar(const struct Pessoa pessoas[], int totalPessoas)
{
    printf("---------- Lista de Pessoas ----------\n");
    for (int i= 0; i<totalPessoas; i++)
    {
        printf("Código: %d, Nome: %s, Telefone: %d \n", pessoas[i].codigo, pessoas[i].nome, pessoas[i].telefone);
    }
}

void Editar (struct Pessoa pessoas[], int totalPessoas)
{
    int codigo;
    printf("Digite o código da pessoa, para poder editar:");
    scanf("%d", &codigo);
    
    for (int i = 0; i < totalPessoas; i++)
    {
        if (pessoas[i].codigo == codigo)
        {
            printf("Novo nome: ");
            scanf("%s", pessoas[i].nome);
            printf("Novo telefone: ");
            scanf("%d", &pessoas[i].telefone);
            return;
        }
    }
    printf("Pessoa não localizada! \n");
}

void Excluir (struct Pessoa pessoas[], int *totalPessoas)
{
    int codigo;
    printf("Digite o código da pessoa para excluir: ");
    scanf("%d", &codigo);
    
    for (int i = 0; i <*totalPessoas; i++)
    {
        if (pessoas[i].codigo == codigo)
        {
            for (int j = i; j < *totalPessoas - 1; j++)
            {
                pessoas[j] = pessoas [j + 1];
            }
            (*totalPessoas)--;
            printf("Pessoa excluida com sucesso! \n");
            return;
        }
    }
    printf("Pessoa não encontrada! \n");
}

void OrdenarPorNome(struct Pessoa pessoas[], int totalPessoas)
{
    struct Pessoa temp;
    for(int i = 0; i < totalPessoas - 1; i++)
    {
        for (int j = 0; j < totalPessoas - i - 1; j++)
        {
            if (strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0)
            {
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }
    printf("Lista de pessoas ordenada por nome: \n");
    for (int i = 0; i < totalPessoas; i++)
    {
        printf("Código: %d, Nome: %s, Telefone: %d \n", pessoas[i].codigo, pessoas[i].nome, pessoas[i].telefone);
    }
}

int main()
{
     struct Pessoa pessoas[N];
     int totalPessoas = 0;
     int opcao;
     
    do
    {
        printf("--------------------AGENDA-------------------- \n");
        printf("Digite o número 1 para CADASTRAR \n");
        printf("Digite o número 2 para LISTAR \n");
        printf("Digite o número 3 para EDITAR\n");
        printf("Digite o número 4 para EXCLUIR\n");
        printf("Digite o número 5 para ORDENAR POR NOME\n");
        printf("Digite o número 0 para SAIR\n");
        printf("Número digitado: ");
        scanf("%d", &opcao);
        
        
    switch (opcao)
    {
        case 1:
            Cadastrar(pessoas, &totalPessoas);
            break;
        case 2:
            Listar(pessoas, totalPessoas);
            break;
        case 3:
            Editar(pessoas, totalPessoas);
            break;
        case 4:
            Excluir(pessoas, &totalPessoas);
            break;
        case 5:
            OrdenarPorNome(pessoas, totalPessoas);
            break;
        case 0:
            printf("Saindo do sistema!!! \n");
            break;
        default:
            printf("Opção Invalida. Tente Novamente! \n");
        }  
    } while (opcao != 0);
    
    return 0;
}

