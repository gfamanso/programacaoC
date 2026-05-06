#include <stdio.h>

int main () {
    char nome[10];
    int idade, matricula;
    float nota;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);
    scanf("%f", &nota);

    printf("O aluno %s tem %d anos, matricula %d e nota %.1f.", nome, idade, matricula, nota);
    return 0;

}