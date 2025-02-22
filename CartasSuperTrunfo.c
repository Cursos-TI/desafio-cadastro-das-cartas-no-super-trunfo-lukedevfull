#include <stdio.h>

// Declaração das variáveis globais 
char cardId[50];
char states[50];
char code[50];
char city[50];
int population;
float area;
float pib;  
float pibPerCapita;
float popDensity;
int numberOfTuristcPoints;

// Declaração das funções !!(fora da main)!!
void getCardDataInput() {
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
    scanf("%f", &area);

    popDensity = (float)population / area;
    
    printf("Enter the PIB: \n");
    scanf("%f", &pib);

    pibPerCapita = (float)pib / population;
    
    printf("Enter the number of tourist points in the city: \n");
    scanf("%d", &numberOfTuristcPoints);
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
}

int main() {
    getCardDataInput(); // Chama a função para ler os dados
    printCardData(); // Chama a função para exibir os resultados

    getCardDataInput();
    printCardData();
    // Finaliza o programa
    return 0;
}

//Tempo de porjeto 20min
