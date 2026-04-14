#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char   cEstado1;                  // Sigla do Estado da Primeira Carta: valores de 'A' a 'H' 
  char   cEstado2;                  // o mesmo para a Segunda Carta
  char   sCodigo1[4];               // Codigo da Cidade da Primeira Carta: Sigla do Estado seguida de um número de 01 a 04
  char   sCodigo2[4];               // O mesmo para a Segunda Carta
  char   sCidade1[30];              // Nome da Cidade da Primeira Carta, com ate 30 caracteres
  char   sCidade2[30];              // O mesmo para a Segunda Carta
  int    iPopulacao1;               // Populacao da Cidade da Primeira Carta
  int    iPopulacao2;               // O mesmo para a Segunda Carta
  int    iPontosTurismo1;           // Numero de pontos turisticos da Cidade da Primeira Carta
  int    iPontosTurismo2;           // O mesmo para a Segunda Carta
  float  fArea1;                    // Area da Cidade da Primeira Carta em Quilometros quadrados
  float  fArea2;                    // O mesmo para a Segunda Carta
  float  fPIB1;                     // Produto Interno Bruto da Cidade da Primeira Carta ( em Bilhoes de Reais )
  float  fPIB2;                     // O mesmo para a Segunda Carta
  float  fDensidade1;               // Densidade populacional da Cidade da Primeira Carta : Populacao da Cidade / Area da Cidade
  float  fDensidade2;               // O mesmo para a Segunda Carta
  float  fPIBperCapita1;            // PIB per Capita da Cidade da Primeira Carta: Produto Interno Bruto da Cidade / Populacao da Cidade
  float  fPIBperCapita2;            // O mesmo para a Segunda Carta

  // Obtendo os dados da primeira Carta

  printf("Dados para a Primeira Carta:\n");
  printf("----------------------------\n");

  printf("Informe o Estado: ");
  scanf("%c", &cEstado1); 

  printf("Informe o Código da Carta: ");
  scanf("%s", sCodigo1);

  printf("Informe a Cidade: ");
  scanf(" %30[^\n]", sCidade1);

  printf("Informe a População: ");
  scanf("%i", &iPopulacao1); 

  printf("Informe a Área (em km²): ");
  scanf("%f", &fArea1); 

  printf("Informe o PIB: ");
  scanf("%f", &fPIB1); 

  printf("Informe o Nº de Pontos Turísticos: ");
  scanf("%i", &iPontosTurismo1); 

  
  // Obtendo os dados da segunda Carta

  printf("\n\nDados para a Segunda Carta:\n");
  printf("----------------------------\n");

  printf("Informe o Estado: ");
  scanf(" %c", &cEstado2); 

  printf("Informe o Código da Carta: ");
  scanf("%s", sCodigo2);

  printf("Informe a Cidade: ");
  scanf(" %30[^\n]", sCidade2);

  printf("Informe a População: ");
  scanf("%i", &iPopulacao2); 

  printf("Informe a Área (em km²): ");
  scanf("%f", &fArea2); 

  printf("Informe o PIB: ");
  scanf("%f", &fPIB2); 

  printf("Informe o Nº de Pontos Turísticos: ");
  scanf("%i", &iPontosTurismo2); 
  
  
  // Processamento dos dados para geracao da Densindade populacional e do PIB per Capita

  fDensidade1    = iPopulacao1 / fArea1;
  fPIBperCapita1 = ( fPIB1 / iPopulacao1 ) * 1000000000;    // como a entrada do fPIB está em bilhoes é preciso multiplicar por 1 bilhao

  fDensidade2    = iPopulacao2 / fArea2;
  fPIBperCapita2 = ( fPIB2 / iPopulacao2 ) * 1000000000;    // como a entrada do fPIB está em bilhoes é preciso multiplicar por 1 bilhao


  // Exibindo os dados das Cartas

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", cEstado1); 
  printf("Código da Carta: %s\n", sCodigo1); 
  printf("Nome da Cidade: %s\n", sCidade1); 
  printf("População: %i habitantes\n", iPopulacao1); 
  printf("Área: %.2f km²\n", fArea1); 
  printf("PIB: %.2f bilhões de reais.\n", fPIB1); 
  printf("Nº de Pontos Turísticos: %i\n", iPontosTurismo1); 
  printf("Densidade Populacional: %.2f hab/km²\n", fDensidade1); 
  printf("PIB per Capita: R$ %.2f\n", fPIBperCapita1); 


  // Exibindo os dados da Segunda Carta

  printf("\n\nCarta 2:\n");
  printf("Estado: %c\n", cEstado2); 
  printf("Código da Carta: %s\n", sCodigo2); 
  printf("Nome da Cidade: %s\n", sCidade2); 
  printf("População: %i habitantes\n", iPopulacao2); 
  printf("Área: %.2f km²\n", fArea2); 
  printf("PIB: %.2f bilhões de reais.\n", fPIB2); 
  printf("Nº de Pontos Turísticos: %i\n", iPontosTurismo2); 
  printf("Densidade Populacional: %.2f hab/km²\n", fDensidade2); 
  printf("PIB per Capita: R$ %.2f\n\n\n", fPIBperCapita2); 

  return 0;
} 