#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char   cEstado; 
  char   sCodigo[4];
  char   sCidade[30];
  int    iPopulacao;
  float  fArea;
  float  fPIB; 
  int    iPontosTurismo;

  // Obtendo os dados da primeira Carta

  printf("Dados para a Primeira Carta:\n");
  printf("----------------------------\n");

  printf("Informe o Estado: ");
  scanf("%c", &cEstado); 

  printf("Informe o Código da Carta: ");
  scanf("%s", sCodigo);

  printf("Informe a Cidade: ");
  scanf("%s", sCidade);

  printf("Informe a População: ");
  scanf("%i", &iPopulacao); 

  printf("Informe a Área (em km²): ");
  scanf("%f", &fArea); 

  printf("Informe o PIB: ");
  scanf("%f", &fPIB); 

  printf("Informe o Nº de Pontos Turísticos: ");
  scanf("%i", &iPontosTurismo); 

  // Exibindo os dados da primeira Carta

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", cEstado); 
  printf("Código da Carta: %s\n", sCodigo); 
  printf("Nome da Cidade: %s\n", sCidade); 
  printf("População: %i habitantes\n", iPopulacao); 
  printf("Área: %.2f km²\n", fArea); 
  printf("PIB: %.2f bilhões de reais.\n", fPIB); 
  printf("Nº de Pontos Turísticos: %i\n", iPontosTurismo); 


  // Obtendo os dados da segunda Carta

  printf("\n\nDados para a Segunda Carta:\n");
  printf("----------------------------\n");

  printf("Informe o Estado: ");
  scanf("%c", &cEstado); 

  printf("Informe o Código da Carta: ");
  scanf("%s", sCodigo);

  printf("Informe a Cidade: ");
  scanf("%s", sCidade);

  printf("Informe a População: ");
  scanf("%i", &iPopulacao); 

  printf("Informe a Área (em km²): ");
  scanf("%f", &fArea); 

  printf("Informe o PIB: ");
  scanf("%f", &fPIB); 

  printf("Informe o Nº de Pontos Turísticos: ");
  scanf("%i", &iPontosTurismo); 

  // Exibindo os dados da Segunda Carta

  printf("\n\nCarta 2:\n");
  printf("Estado: %c\n", cEstado); 
  printf("Código da Carta: %s\n", sCodigo); 
  printf("Nome da Cidade: %s\n", sCidade); 
  printf("População: %i habitantes\n", iPopulacao); 
  printf("Área: %.2f km²\n", fArea); 
  printf("PIB: %.2f bilhões de reais.\n", fPIB); 
  printf("Nº de Pontos Turísticos: %i\n\n\n", iPontosTurismo); 

  return 0;
} 
