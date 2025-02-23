#include <stdio.h>

// Declaração das variáveis globais 
char cardId[50];
char states[50];
char code[50];
char city[50];
int population;
double area;
double pib;  
float pibPerCapita;
float popDensity;
int numberOfTuristcPoints;
double cardPower;

// Declaração das funções !!(fora da main)!!
void getCardData() {
  printf("Enter the card id: \n");
  scanf("%49s", cardId); // Limita a 49 caracteres para evitar !!overflow
  
  printf("Enter the state: \n");
  scanf("%49s", states);
  
  printf("Enter the card code: \n");
  scanf("%49s", code);
  
  printf("Enter the city: \n");
  scanf("%49s", city);
  
  printf("Enter the population: \n");
  scanf("%d", &population);
  
  printf("Enter the area(KM): \n");
  scanf("%lf", &area);
  
  popDensity = (float)population / area;
  
  printf("Enter the PIB: \n");
  scanf("%lf", &pib);
  
  pibPerCapita = (float)pib / population;
  
  printf("Enter the number of tourist points in the city: \n");
  scanf("%d", &numberOfTuristcPoints);
  
  cardPower = ((int)( 1 / popDensity) - 
  ((int)(pibPerCapita +
    numberOfTuristcPoints +
    area +
    pib +
    population + 
    numberOfTuristcPoints)
  ));
}

void printCardData() {
  printf("\nThe card id: %s\n", cardId);
  printf("The state: %s\n", states);
  printf("Card code: %s\n", code);
  printf("City: %s\n", city);
  printf("Population: %d\n", population);
  printf("Area: %.2f\n", area);
  printf("Population density: %.2f hab/KM2\n", popDensity);
  printf("PIB: %.2f\n", pib);
  printf("PIB per capita: $ %.2f\n", pibPerCapita);
  printf("Number of tourist points: %d\n", numberOfTuristcPoints);
  printf("The card power is: %.2d\n", cardPower);
}


int main() {
  // Variáveis para a Carta 1
  unsigned long int pop1;
  double area1, pib1;
  int pontos1;
  float densidade1, pibPerCapita1, superPoder1;
  
  // Variáveis para a Carta 2
  unsigned long int pop2;
  double area2, pib2;
  int pontos2;
  float densidade2, pibPerCapita2, superPoder2;

  getCardData();
  pop1 = population;
  area1 = area;
  pib1 = pib;
  pontos1 = numberOfTuristcPoints;
  densidade1 = popDensity;
  pibPerCapita1 = pibPerCapita;
  superPoder1 = cardPower;

  getCardData();
  pop2 = population;
  area2 = area;
  pib2 = pib;
  pontos2 = numberOfTuristcPoints;
  densidade2 = popDensity;
  pibPerCapita2 = pibPerCapita;
  superPoder2 = cardPower;
  
  printf("Batalha entre as cartas:\n");
  printf("População: %s \n", (pop1 > pop2 ? "Carta 1" : "Carta 2"));
  printf("Área: %s \n", (area1 > area2 ? "Carta 1" : "Carta 2"));
  printf("PIB: %s \n", (pib1 > pib2 ? "Carta 1" : "Carta 2"));
  printf("Pontos turísticos: %s \n", (pontos1 > pontos2 ? "Carta 1" : "Carta 2"));
  printf("Densidade populacional: %s \n", (densidade1 > densidade2 ? "Carta 1" : "Carta 2"));
  printf("PIB per capita: %s \n", (pibPerCapita1 > pibPerCapita2 ? "Carta 1" : "Carta 2"));
  printf("Poder da carta: %s \n", (superPoder1 > superPoder2 ? "Carta 1" : "Carta 2"));
  
  return 0;
}

//Tempo de projeto de 1,5 horas
