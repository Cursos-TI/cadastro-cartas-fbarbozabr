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

  
  // Área para entrada de dados
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


  // Área para exibição dos dados da cidade

return 0;
} 
