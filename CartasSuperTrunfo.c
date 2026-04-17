#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // OBS PESSOAL: REFAZENDO POIS O OUTRO FOI DELETADO POR ENGANO
  // Área para definição das variáveis para armazenar as propriedades das cidades c1
  char estadoc1[50], codigoc1[4], cidadec1[50];
  unsigned long int populacaoc1;
  float areac1, pibc1;
  int pontosturc1;
  // adição de densidade e pib per capita
  float densc1, pibpcc1;
  // adição de superpoderes
  float superc1;
  // Área para entrada de dados carta1

  printf("Super Trunfo - Mestre\n\n");

  // cadastro da carta 1
  // adição de scanset no scanf para ler string com espaços
  printf("CARTA 1\n\n");

  printf("Estado: ");
  scanf(" %[^\n]", estadoc1);

  printf("Código: ");
  scanf("%s", codigoc1);

  printf("Cidade: ");
  scanf(" %[^\n]", cidadec1);

  printf("População: ");
  scanf("%lu", &populacaoc1);

  printf("Área: ");
  scanf("%f", &areac1);

  printf("PIB: ");
  scanf("%f", &pibc1);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosturc1);

  // adição de cálculos

  densc1 = (float)populacaoc1 / areac1;
  printf("Densidade Populacional: %.2f hab/km²\n", densc1);

  pibpcc1 = pibc1 / areac1;
  printf("PIB per Capita: %.2f reais\n", pibpcc1);

  superc1 = populacaoc1 + areac1 + pibc1 + pibpcc1 + (1 / densc1) + pontosturc1;
  printf("Superpoder: %.2f\n", superc1);



  // Área para definição das variáveis para armazenar as propriedades das cidades c2
  char estadoc2[50], codigoc2[4], cidadec2[50];
  unsigned long int populacaoc2;
  float areac2, pibc2;
  int pontosturc2;
  // adição de densidade e pib per capita
  float densc2, pibpcc2;
  // adição de superpoderes
  float superc2;

  // Área para entrada de dados carta2
  // cadastro da carta 2
  // adição de scanset no scanf para ler string com espaços
  printf("\n\nCARTA 2\n\n");

  printf("Estado: ");
  scanf(" %[^\n]", estadoc2);

  printf("Código: ");
  scanf("%s", codigoc2);
  
  printf("Cidade: ");
  scanf(" %[^\n]", cidadec2);

  printf("População: ");
  scanf("%lu", &populacaoc2);

  printf("Área: ");
  scanf("%f", &areac2);

  printf("PIB: ");
  scanf("%f", &pibc2);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontosturc2);

  // adição de cálculos

  densc2 = (float)populacaoc2 / areac2;
  printf("Densidade Populacional: %.2f hab/km²\n", densc2);

  pibpcc2 = pibc2 / areac2;
  printf("PIB per Capita: %.2f reais\n", pibpcc2);

  superc2 = populacaoc2 + areac2 + pibc2 + pibpcc2 + (1 / densc2) + pontosturc2;
  printf("Superpoder: %.2f\n", superc2);

  // pontuação das cartas

  printf("\n\nPONTUAÇÃO!\n\n");

  printf("População → Carta 1 venceu Carta 2: %d\n", populacaoc1 > populacaoc2);
  printf("Área → Carta 1 venceu Carta 2: %d\n", areac1 > areac2);
  printf("PIB → Carta 1 venceu Carta 2: %d\n", pibc1 > pibc2);
  printf("Pontos Turísticos → Carta 1 venceu Carta 2: %d\n", pontosturc1 > pontosturc2);
  printf("PIB per Capita → Carta 1 venceu Carta 2: %d\n", pibpcc1 > pibpcc2);
  printf("Densidade Populacional → Carta 1 venceu Carta 2: %d\n", densc1 < densc2);
  printf("Superpoder → Carta 1 venceu Carta 2: %d\n", superc1 > superc2);


return 0;
} 
