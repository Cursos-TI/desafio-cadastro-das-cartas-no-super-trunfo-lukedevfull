#include <stdio.h>

#include <stdio.h>
int main() {
  // declare global variables
  char cardId[50];
  char states[50];
  char code[50];
  char city[50];
  int population;
  float area;
  float pib;  
  int numberOfTuristcPoints;
  
  // Get user-1 input
  printf("Enter the card id: \n");
  scanf("%s", cardId);
  
  printf("Enter the state: \n");
  scanf("%s", states);
  
  printf("Enter the card code: \n");
  scanf("%s", code);
  
  printf("Enter the city: \n");
  scanf("%s", city);
  
  printf("Enter the population: \n");
  scanf("%d", &population);
  
  printf("Enter the area(KM): \n");
  scanf("%f", &area);
  
  printf("Enter the PIB: \n");
  scanf("%f", &pib);
  
  printf("Enter the number of tourist points in the city: \n");
  scanf("%d", &numberOfTuristcPoints);
  
  // Print the results
  printf("Card code: %s\n", code);
  printf("The state: %s\n", states);
  printf("City: %s\n", city);
  printf("Population: %d\n", population);
  printf("Area: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Number of tourist points: %d\n", numberOfTuristcPoints);
  
  // Get user-2 input
  printf("Enter the card id: \n");
  scanf("%s", cardId);
  
  printf("Enter the state: \n");
  scanf("%s", states);
  
  printf("Enter the card code: \n");
  scanf("%s", code);
  
  printf("Enter the city: \n");
  scanf("%s", city);
  
  printf("Enter the population: \n");
  scanf("%d", &population);
  
  printf("Enter the area(KM): \n");
  scanf("%f", &area);
  
  printf("Enter the PIB: \n");
  scanf("%f", &pib);
  
  printf("Enter the number of tourist points in the city: \n");
  scanf("%d", &numberOfTuristcPoints);
  
  
  // Print the results -2
  printf("The card id: %s\n", cardId);
  printf("The state: %s\n", states);
  printf("Card code: %s\n", code);
  printf("City: %s\n", city);
  printf("Population: %d\n", population);
  printf("Area: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Number of tourist points: %d\n", numberOfTuristcPoints);

  return 0;
}

}
