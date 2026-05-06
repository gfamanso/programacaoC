#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1 = 'A';
  char codigoCarta1[10] = "01";
  char cidade1[30] = "GOIANIA";
  unsigned long int populacao1 = 189325;
  float area1 = 739;
  float PIB1 = 75800000000;
  int pontosTuristicos1 = 121;
  float densidade1;
  float PIBpc1;
  float superPoder1;

  char estado2 = 'H';
  char codigoCarta2[10] = "04";
  char cidade2[30] = "RIO DE JANEIRO";
  unsigned long int populacao2 = 17200000;
  float area2 = 1200;
  float PIB2 = 1170000000;
  int pontosTuristicos2 = 203;
  float densidade2;
  float PIBpc2;
  float superPoder2;
  // Área para entrada de dados

/*
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
  
  */

  densidade1 = populacao1 / area1;
  PIBpc1 = PIB1 / populacao1;
  superPoder1 = (unsigned long int) populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBpc1 + (1 / densidade1);

/*

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
  
  */

  densidade2 = populacao2 / area2;
  PIBpc2 = PIB2 / populacao2;
  superPoder2 = (unsigned long int) populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBpc2 + (1 / densidade2);

  // Área para exibição dos dados da cidade

  printf("\n- Informações da CARTA 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigoCarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.1f km²\n", area1);
  printf("PIB: R$ %.2f\n", PIB1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: R$ %.2f\n", PIBpc1);
  printf("Super Poder: %lu.\n", superPoder1);

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
  printf("Super Poder: %lu.\n", superPoder2);

  //Área para comparação dos valores das cartas

  printf("**** Comparação de Cartas ****\n");
  if (populacao1 > populacao2) {
    printf("População: \n Carta 1 venceu(%d).\n", populacao1 > populacao2);
}  else {
    printf("População: \n Carta 2 venceu(%d).\n", populacao1 > populacao2);
}

 if (area1 > area2) {
    printf("Área: \n Carta 1 venceu(%d).\n", area1 > area2);
}  else {
    printf("Área: \n Carta 2 venceu(%d).\n", area1 > area2);
}

 if (PIB1 > PIB2) {
    printf("PIB: \n Carta 1 venceu(%d).\n", PIB1 > PIB2);
}  else {
    printf("PIB: \n Carta 2 venceu(%d).\n", PIB1 > PIB2);
}

if (pontosTuristicos1 > pontosTuristicos2) {
    printf("Pontos Turísticos: \n Carta 1 venceu(%d).\n", pontosTuristicos1 > pontosTuristicos2);
}  else {
    printf("Pontos Turísticos: \n Carta 2 venceu(%d).\n", pontosTuristicos1 > pontosTuristicos2);
}

if (densidade1 < densidade2) {
    printf("Densidade Populacional: \n Carta 1 venceu(%d).\n", densidade1 < densidade2);
}  else {
    printf("Densidade Populacional: \n Carta 2 venceu(%d).\n", densidade1 < densidade2);
}

if (PIBpc1 > PIBpc2) {
    printf("PIB per Capita: \n Carta 1 venceu(%d).\n", PIBpc1 > PIBpc2);
}  else {
    printf("PIB per Capita: \n Carta 2 venceu(%d).\n", PIBpc1 > PIBpc2);
}

if (superPoder1 > superPoder2) {
    printf("Super Poder: \n Carta 1 venceu(%d).\n", superPoder1 > superPoder2);
}  else {
    printf("Super Poder: \n Carta 2 venceu(%d).\n", superPoder1 > superPoder2);
}
/*
Área: Carta 1 venceu (1)

PIB: Carta 1 venceu (1)

Pontos Turísticos: Carta 1 venceu (1)

Densidade Populacional: Carta 2 venceu (0)

PIB per Capita: Carta 1 venceu (1)

Super Poder: Carta 1 venceu (1) */
  return 0;
}
