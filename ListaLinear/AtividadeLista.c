#include <stdio.h>
#include <string.h>
#define N 5

struct Paciente 
{
    char telefone[11];
    char nome[20];
    char cidade[20];
};

typedef struct Paciente Paciente;

int menu(int *opcao);
int inserirFila(Paciente lista[], int IA, int FA, int *IL, int *FL, Paciente infoNodo);
int atenderPaciente(Paciente listaEmergencia[], int *IL_E, int *FL_E, Paciente listaNormal[], int *IL_N, int *FL_N);
void visualizarFilas(Paciente listaEmergencia[], int IL_E, int FL_E, Paciente listaNormal[], int IL_N, int FL_N);


int main()
{
    Paciente listaNormal[N], listaEmergencia[N], infoNodo;
    int IA = 0, FA = N - 1, IL_N = -1, FL_N = -1, IL_E = -1, FL_E = -1, opcao;

    do {
        menu(&opcao);
        switch (opcao) {
            case 1:
                printf("Inserindo fila normal...\n");
                printf("Telefone...: "); scanf("%s", infoNodo.telefone);
                printf("Nome...: "); scanf("%s", infoNodo.nome);
                printf("Cidade...: "); scanf("%s", infoNodo.cidade);
                if (inserirFila(listaNormal, IA, FA, &IL_N, &FL_N, infoNodo) == 1)
                    printf("Fila normal cheia! Não é possível inserir o paciente.\n");
                else
                    printf("Paciente colocado na fila normal!\n");
                break;
            case 2:
                printf("Inserindo fila de emergência...\n");
                printf("Telefone...: "); scanf("%s", infoNodo.telefone);
                printf("Nome...: "); scanf("%s", infoNodo.nome);
                printf("Cidade...: "); scanf("%s", infoNodo.cidade);
                if (inserirFila(listaEmergencia, IA, FA, &IL_E, &FL_E, infoNodo) == 1)
                    printf("Fila de emergência cheia! Não é possível inserir o paciente.\n");
                else
                    printf("Paciente colocado na fila de emergência!\n");
                break;
            case 3:
                if (atenderPaciente(listaEmergencia, &IL_E, &FL_E, listaNormal, &IL_N, &FL_N) == 1)
                    printf("Não há pacientes para atender.\n");
                else
                    printf("Paciente atendido com sucesso!\n");
                break;
            case 4:
                visualizarFilas(listaEmergencia, IL_E, FL_E, listaNormal, IL_N, FL_N);
                break;
            case 0:
                printf("Tchau! Até logo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

int menu(int *opcao)
{
    printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
    printf(":::::::::::::::::::TRIAGEM:::::::::::::::::::\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("[1]Inserir paciente na fila normal:\n");
    printf("[2]Inserir paciente na fila de emergencia:\n");
    printf("[3]Atender paciente:\n");
    printf("[4]Visualizar fila:\n");
    printf("[0]Sair da triagem:\n");
    printf("Escolha uma opção!!!:\n");
    scanf("%d", opcao);
    return 0;
}

int inserirFila(Paciente lista[], int IA, int FA, int *IL, int *FL, Paciente infoNodo) {
    if ((*FL == FA && *IL == IA) || (*FL > *IL)) {
        return 1;
    } else {
        if (*IL == -1) {
            *IL = *FL = IA;
        } else if (*FL < FA) {
            *FL = *FL + 1;
        } else {
            for (int i = *IL; i >= *FL; i--) {
                lista[i + 1] = lista[i];
            }
            *FL = *FL + 1;
        }
        lista[*FL] = infoNodo;
        return 0;
    }
}

int atenderPaciente(Paciente listaEmergencia[], int *IL_E, int *FL_E, Paciente listaNormal[], int *IL_N, int *FL_N) {
    if (*IL_E != -1) {
        printf("Atendendo paciente de emergência: %s\n", listaEmergencia[*IL_E].nome);
        if (*IL_E == *FL_E) {
            *IL_E = *FL_E = -1;
        } else {
            (*IL_E)++;
        }
        return 0;
    } else if (*IL_N != -1) {
        printf("Atendendo paciente normal: %s\n", listaNormal[*IL_N].nome);
        if (*IL_N == *FL_N) {
           *IL_N = *FL_N = -1;
        } else {
            (*IL_N)++;
        }
        return 0;
    } else {
        return 1;
    }
}

void visualizarFilas(Paciente listaEmergencia[], int IL_E, int FL_E, Paciente listaNormal[], int IL_N, int FL_N) {
    printf("Fila de Emergência:\n");
    if (IL_E == -1) {
        printf("Nenhum paciente na fila de emergência.\n");
    } else {
        for (int i = IL_E; i <= FL_E; i++) {
            printf("Nome: %s, Telefone: %s, Cidade: %s\n", listaEmergencia[i].nome, listaEmergencia[i].telefone, listaEmergencia[i].cidade);
        }
    }

    printf("\nFila Normal:\n");
    if (IL_N == -1) {
        printf("Nenhum paciente na fila normal.\n");
    } else {
        for (int i = IL_N; i <= FL_N; i++) {
            printf("Nome: %s, Telefone: %s, Cidade: %s\n", listaNormal[i].nome, listaNormal[i].telefone, listaNormal[i].cidade);
        }
    }
}
