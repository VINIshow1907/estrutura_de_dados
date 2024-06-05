#include <stdio.h>
#include <stdlib.h>

struct TipoNodo{
    char url[100];
    struct TipoNodo *elo;
};

typedef struct TipoNodo TipoNodo;

int menu(void);
int pagina(TipoNodo **ponteiroLista, char url[]);
void voltarpagina(TipoNodo **ponteiroLista);
void historico(TipoNodo *ponteiroLista);

int main()
{
    TipoNodo *ponteiroLista = NULL;
    char url[100];
    int opcao;

    do {
        opcao = menu();

        switch(opcao) {
            case 1:
                printf("Digite a URL: ");
                scanf("%s", url);
                pagina(&ponteiroLista, url);
                break;
            case 2:
                voltarpagina(&ponteiroLista);
                break;
            case 3:
                historico(ponteiroLista);
                break;
            case 0:
                printf("Saindo do navegador.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);

    return 0;
}

int menu(void)
{
    int opcao;
    printf("*--------- MENU ---------*\n");
    printf("|  [1] Digitar URL: |\n");
    printf("|  [2] Voltar atrás:             |\n");
    printf("|  [3] Exibir janelas:   |\n");
    printf("|  [0] Sair!               |\n");
    printf("*-------------------------*\n");
    printf("Digite uma opção: \n");
    scanf("%d", &opcao);
    return opcao;
}

int pagina(TipoNodo **ponteiroLista, char url[])
{
    TipoNodo* novo = (TipoNodo*) malloc(sizeof(TipoNodo));
    if(novo == NULL)
        return 1;
    else {
        int i = 0;
        while(url[i] != '\0' && i < 99) {
            novo->url[i] = url[i];
            i++;
        }
        novo->url[i] = 0; // esse e o terminador nulo
        novo->elo = *ponteiroLista;
        *ponteiroLista = novo;
        return 0;
    }
}

void voltarpagina(TipoNodo **ponteiroLista)
{
    if(*ponteiroLista == NULL)
        printf("Histórico vazio!\n");
    else {
        TipoNodo* temp = *ponteiroLista;
        *ponteiroLista = (*ponteiroLista)->elo;
        printf("Apagando URL: %s\n", temp->url);
        free(temp);
    }
}

void historico(TipoNodo *ponteiroLista)
{
    if(ponteiroLista == NULL)
        printf("Histórico vazio!\n");
    else {
        printf("\nHistórico de Navegação:\n");
        while(ponteiroLista != NULL) {
            printf("%s\n", ponteiroLista->url);
            ponteiroLista = ponteiroLista->elo;
        }
    }
}
