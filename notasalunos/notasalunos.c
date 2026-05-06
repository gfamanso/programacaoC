#include <stdio.h>

int main () {
    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    
    printf("Primeira nota: %.1f. \n", nota1);
    printf("Segunda nota: %.1f. \n", nota2);
    printf("Terceira nota: %.1f. \n", nota3);
    printf("A média é: %.1f. \n", media);

    return 0;

}