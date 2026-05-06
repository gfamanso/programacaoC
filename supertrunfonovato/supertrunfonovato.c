#include <stdio.h>

int main(){
    printf("Digite as informações da carta 1:\n");
    char estado1;
    char codigoCarta1[3];
    char cidade1[10];
    int populacao1;
    float area1;
    float PIB1;
    int pontosTuristicos1;
    
    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf("%c", &estado1); 
    printf("Digite o código a letra digitada anteriormente seguida de um número de 01 a 04: ");
    scanf("%s", &codigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    
    printf("Digite as informações da carta 2:\n");
    char estado2;
    char codigoCarta2[3];
    char cidade2[10];
    int populacao2;
    float area2;
    float PIB2;
    int pontosTuristicos2;
    
    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf("%c", &estado2); 
    printf("Digite o código a letra digitada anteriormente seguida de um número de 01 a 04: ");
    scanf("%s", &codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", pontosTuristicos2);

}