
#include <stdio.h>

// Declaração das variáveis globais para armazenar os dados da carta
char cardId[50];          // ID da carta (máximo 49 caracteres)
char states[50];          // Sigla do estado (UF)
char code[50];            // Código da carta
char city[50];            // Nome da cidade
int population;           // População da cidade
double area;              // Área em KM²
double pib;               // Produto Interno Bruto
float pibPerCapita;       // PIB per capita (calculado)
float popDensity;         // Densidade populacional (calculada)
int numberOfTuristcPoints;// Número de pontos turísticos
double cardPower;         // Poder calculado da carta

// Função para coletar dados da carta via entrada do usuário
void getCardData() {
  printf("Enter the card id: \n");
  scanf("%49s", cardId); // Limita a 49 caracteres para evitar estouro de buffer
  
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
  
  // Calcula densidade populacional (população/área)
  popDensity = (float)population / area;
  
  printf("Enter the PIB: \n");
  scanf("%lf", &pib);
  
  // Calcula PIB per capita (PIB/população)
  pibPerCapita = (float)pib / population;
  
  printf("Enter the number of tourist points in the city: \n");
  scanf("%d", &numberOfTuristcPoints);
  
  // Fórmula complexa para cálculo do poder da carta
  cardPower = ((int)( 1 / popDensity) - 
  ((int)(pibPerCapita +
    numberOfTuristcPoints +
    area +
    pib +
    population + 
    numberOfTuristcPoints)
  ));
}

// Função para exibir todos os dados da carta formatados
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

// Função principal
int main() {
  // Variáveis para armazenar dados da Carta 1
  unsigned long int pop1;
  double area1, pib1;
  int pontos1;
  float densidade1, pibPerCapita1, superPoder1;
  
  // Variáveis para armazenar dados da Carta 2
  unsigned long int pop2;
  double area2, pib2;
  int pontos2;
  float densidade2, pibPerCapita2, superPoder2;

  // Coleta e armazena dados da primeira carta
  getCardData();
  pop1 = population;
  area1 = area;
  pib1 = pib;
  pontos1 = numberOfTuristcPoints;
  densidade1 = popDensity;
  pibPerCapita1 = pibPerCapita;
  superPoder1 = cardPower;

  // Coleta e armazena dados da segunda carta
  getCardData();
  pop2 = population;
  area2 = area;
  pib2 = pib;
  pontos2 = numberOfTuristcPoints;
  densidade2 = popDensity;
  pibPerCapita2 = pibPerCapita;
  superPoder2 = cardPower;
  
  // Comparação entre as duas cartas em diferentes categorias
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