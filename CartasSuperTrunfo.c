#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades c1
  char estadoc1[50], codigoc1[4], cidadec1[50];
  unsigned long int populacaoc1;
  float areac1, pibc1;
  int pontosturc1;
  // Área para entrada de dados

  printf("Super Trunfo - Mestre\n\n");

   // cadastro da carta 1
   // adição de scanset para ler strings com espaços

  printf("CARTA 1\n\n");

  printf("Estado: ");
  scanf("%s", estadoc1);

  printf("Código: ");
  scanf("%s", codigoc1);

  printf("Cidade: ");
  scanf("%s", cidadec1);

  printf("População: ");
  scanf("%lu", &populacaoc1);

  printf("Área: ");
  scanf("%f", &areac1);

  printf("PIB: ");
  scanf("%f", &pibc1);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosturc1);

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoc2[50], codigoc2[4], cidadec2[50];
  unsigned long int populacaoc2;
  float areac2, pibc2;
  int pontosturc2;


   // cadastro da carta 2
   // adição de scanset para ler strings com espaços

  printf("\n\nCARTA 2\n\n");

  printf("Estado: ");
  scanf("%s", estadoc2);

  printf("Código: ");
  scanf("%s", codigoc2);
  
  printf("Cidade: ");
  scanf("%s", cidadec2);

  printf("População: ");
  scanf("%lu", &populacaoc2);

  printf("Área: ");
  scanf("%f", &areac2);

  printf("PIB: ");
  scanf("%f", &pibc2);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosturc2);


return 0;
} 
