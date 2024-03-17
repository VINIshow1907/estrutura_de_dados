#include <stdio.h>

int main(){
    int codigo, total_alunos = 0;
    float nota1, nota2, nota3, media, soma_notas;

printf("Digite o codigo do aluno (digite 0 para encerrar): ");
    scanf("%d", &codigo);
    while (codigo != 0) {
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &nota3);

        soma_notas = nota1 + nota2 + nota3;
        media = soma_notas / 3;

        printf("A media do aluno de codigo %d é %.2f\n", codigo, media);

        total_alunos++;

        printf("Digite o codigo do proximo aluno (digite 0 para encerrar): ");
        scanf("%d", &codigo);
    }
    if (total_alunos == 0) {
        printf("Nenhum aluno foi inserido.\n");
    } 
}
