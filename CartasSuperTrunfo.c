#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char   cEstado;                  // Sigla do Estado : valores de 'A' a 'H' 
  char   sCodigo[4];               // Codigo da Cidade: Sigla do Estado seguida de um número de 01 a 04
  char   sCidade[30];              // Nome da Cidade, com ate 30 caracteres
  int    iPopulacao;               // Populacao da Cidade
  int    iPontosTurismo;           // Numero de pontos turisticos da Cidade
  float  fArea;                    // Area da Cidade em Quilometros quadrados 
  float  fPIB;                     // Produto Interno Bruto da Cidade ( em Bilhoes de Reais )
  float  fDensidade;               // Densidade populacional : Populacao da Cidade / Area da Cidade
  float  fPIBperCapita;            // PIB per Capita : Produto Interno Bruto da Cidade / Populacao da Cidade

  // Obtendo os dados da primeira Carta

  printf("Dados para a Primeira Carta:\n");
  printf("----------------------------\n");

  printf("Informe o Estado: ");
  scanf("%c", &cEstado); 

  printf("Informe o Código da Carta: ");
  scanf("%s", sCodigo);

  printf("Informe a Cidade: ");
  scanf(" %30[^\n]", sCidade);

  printf("Informe a População: ");
  scanf("%i", &iPopulacao); 

  printf("Informe a Área (em km²): ");
  scanf("%f", &fArea); 

  printf("Informe o PIB: ");
  scanf("%f", &fPIB); 

  printf("Informe o Nº de Pontos Turísticos: ");
  scanf("%i", &iPontosTurismo); 

  // Processamento dos dados para geracao da Densindade populacional e do PIB per Capita

  fDensidade    = iPopulacao / fArea;
  fPIBperCapita = ( fPIB / iPopulacao ) * 1000000000;    // como a entrada do fPIB está em bilhoes é preciso multiplicar por 1 bilhao

  // Exibindo os dados da primeira Carta

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", cEstado); 
  printf("Código da Carta: %s\n", sCodigo); 
  printf("Nome da Cidade: %s\n", sCidade); 
  printf("População: %i habitantes\n", iPopulacao); 
  printf("Área: %.2f km²\n", fArea); 
  printf("PIB: %.2f bilhões de reais.\n", fPIB); 
  printf("Nº de Pontos Turísticos: %i\n", iPontosTurismo); 
  printf("Densidade Populacional: %.2f hab/km²\n", fDensidade); 
  printf("PIB per Capita: R$ %.2f\n", fPIBperCapita); 


  // Obtendo os dados da segunda Carta

  printf("\n\nDados para a Segunda Carta:\n");
  printf("----------------------------\n");

  printf("Informe o Estado: ");
  scanf(" %c", &cEstado); 

  printf("Informe o Código da Carta: ");
  scanf("%s", sCodigo);

  printf("Informe a Cidade: ");
  scanf(" %30[^\n]", sCidade);

  printf("Informe a População: ");
  scanf("%i", &iPopulacao); 

  printf("Informe a Área (em km²): ");
  scanf("%f", &fArea); 

  printf("Informe o PIB: ");
  scanf("%f", &fPIB); 

  printf("Informe o Nº de Pontos Turísticos: ");
  scanf("%i", &iPontosTurismo); 

  // Processamento dos dados para geracao da Densindade populacional e do PIB per Capita

  fDensidade    = iPopulacao / fArea;
  fPIBperCapita = ( fPIB / iPopulacao ) * 1000000000;    // como a entrada do fPIB está em bilhoes é preciso multiplicar por 1 bilhao

  // Exibindo os dados da Segunda Carta

  printf("\n\nCarta 2:\n");
  printf("Estado: %c\n", cEstado); 
  printf("Código da Carta: %s\n", sCodigo); 
  printf("Nome da Cidade: %s\n", sCidade); 
  printf("População: %i habitantes\n", iPopulacao); 
  printf("Área: %.2f km²\n", fArea); 
  printf("PIB: %.2f bilhões de reais.\n", fPIB); 
  printf("Nº de Pontos Turísticos: %i\n", iPontosTurismo); 
  printf("Densidade Populacional: %.2f hab/km²\n", fDensidade); 
  printf("PIB per Capita: R$ %.2f\n\n\n", fPIBperCapita); 

  return 0;
} 
