#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1;
  char codigoCarta1[10];
  char cidade1[30];
  int populacao1;
  float area1;
  float PIB1;
  int pontosTuristicos1;
  float densidade1;
  float PIBpc1;

  char estado2;
  char codigoCarta2[10];
  char cidade2[30];
  int populacao2;
  float area2;
  float PIB2;
  int pontosTuristicos2;
  float densidade2;
  float PIBpc2;

  // Área para entrada de dados

  printf("Digite as informações da CARTA 1:\n");
  printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
  scanf(" %c", &estado1);
  printf("Digite o código da cidade, sendo um número de 01 a 04: ");
  scanf("%s", &codigoCarta1);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]s", &cidade1);
  printf("Digite o número de habitantes: ");
  scanf("%d", &populacao1);
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area1);
  printf("Digite o PIB da cidade: ");
  scanf("%f", &PIB1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  densidade1 = populacao1 / area1;
  PIBpc1 = PIB1 / populacao1;


  printf("Digite as informações da CARTA 2:\n");
  printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
  scanf(" %c", &estado2);
  printf("Digite o código da cidade, sendo um número de 01 a 04: ");
  scanf("%s", &codigoCarta2);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]s", &cidade2);
  printf("Digite o número de habitantes: ");
  scanf("%d", &populacao2);
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area2);
  printf("Digite o PIB da cidade: ");
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  densidade2 = populacao2 / area2;
  PIBpc2 = PIB2 / populacao2;

  // Área para exibição dos dados da cidade

  printf("\n- Informações da CARTA 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigoCarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.1f km²\n", area1);
  printf("PIB: R$ %.2f\n", PIB1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: R$ %.2f\n", PIBpc1);

  printf("\n- Informações da CARTA 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigoCarta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.1f km²\n", area2);
  printf("PIB: R$ %.2f\n", PIB2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: R$ %.2f\n", PIBpc2);

  return 0;
}
