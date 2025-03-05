#include <stdio.h>

// Declaração das variáveis globais 
char cardId[50];          // Armazena o ID da carta
char states[50];          // Armazena o estado associado à carta
char code[50];            // Armazena o código da carta
char city[50];            // Armazena a cidade associada à carta
int population;           // Armazena a população da cidade
double area;              // Armazena a área da cidade em KM²
double pib;               // Armazena o PIB da cidade
float pibPerCapita;       // Armazena o PIB per capita da cidade
float popDensity;         // Armazena a densidade populacional da cidade (hab/KM²)
int numberOfTuristcPoints; // Armazena o número de pontos turísticos da cidade
double cardPower;         // Armazena o poder da carta, calculado com base em vários fatores

// Declaração das funções !!(fora da main)!!

// Função para coletar os dados da carta
void getCardData() {
  printf("Enter the card id: \n");
  scanf("%49s", cardId); // Limita a 49 caracteres para evitar overflow
  
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
  
  // Calcula a densidade populacional
  popDensity = (float)population / area;
  
  printf("Enter the PIB: \n");
  scanf("%lf", &pib);
  
  // Calcula o PIB per capita
  pibPerCapita = (float)pib / population;
  
  printf("Enter the number of tourist points in the city: \n");
  scanf("%d", &numberOfTuristcPoints);
  
  // Calcula o poder da carta com base em uma fórmula específica
  cardPower = (1.0 / popDensity) + pibPerCapita + numberOfTuristcPoints;
}

// Função para imprimir os dados da carta
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
  printf("The card power is: %.2f\n", cardPower); 
}

// Função para exibir as instruções do jogo
void printHowToPlay() {
  printf("How to play:\n");
  printf("1 - Enter the card id\n");
  printf("2 - Enter the state\n");
  printf("3 - Enter the card code\n");
  printf("4 - Enter the city\n");
  printf("5 - Enter the population\n");
  printf("6 - Enter the area(KM)\n");
  printf("7 - Enter the PIB\n");
  printf("8 - Enter the number of tourist points in the city\n");
  printf("9 - Enter the card power\n");
}

// Função principal
int main() {
  // Variáveis para a Carta 1
  unsigned long int pop1;        // População da Carta 1
  double area1, pib1;            // Área e PIB da Carta 1
  int pontos1;                   // Pontos turísticos da Carta 1
  float densidade1, pibPerCapita1, superPoder1; // Densidade, PIB per capita e poder da Carta 1
  
  // Variáveis para a Carta 2
  unsigned long int pop2;        // População da Carta 2
  double area2, pib2;            // Área e PIB da Carta 2
  int pontos2;                   // Pontos turísticos da Carta 2
  float densidade2, pibPerCapita2, superPoder2; // Densidade, PIB per capita e poder da Carta 2

  // Variável para armazenar a escolha do usuário
  unsigned int option;
  printf("Escolha uma opção:\n");
  printf("1 - Jogar\n");
  printf("2 - Como Jogar\n");
  printf("3 - Sair\n");
  scanf("%u", &option);

  int cont = 0; // Variável para controle de fluxo (exibir ou não cartas)
  int battle = 0; // Variável para controle de comparação individual

  switch (option) {
    case 1:
      // Coleta os dados da primeira carta
      getCardData();
      pop1 = population;
      area1 = area;
      pib1 = pib;
      pontos1 = numberOfTuristcPoints;
      densidade1 = popDensity;
      pibPerCapita1 = pibPerCapita;
      superPoder1 = cardPower;

      // Pergunta se o usuário deseja ver os dados da primeira carta
      printf("Deseja ver a carta cadastrada?\n 1 - Sim\n 2 - Não\n");
      scanf("%u", &cont);

      if (cont == 1) {
        printCardData(); // Exibe os dados da primeira carta
      }

      printf("Carta Rival:\n");

      // Coleta os dados da segunda carta
      getCardData();
      pop2 = population;
      area2 = area;
      pib2 = pib;
      pontos2 = numberOfTuristcPoints;
      densidade2 = popDensity;
      pibPerCapita2 = pibPerCapita;
      superPoder2 = cardPower;

      // Pergunta se o usuário deseja ver os dados da segunda carta
      printf("Deseja ver a carta cadastrada?\n 1 - Sim\n 2 - Não\n");
      scanf("%u", &cont);
      
      if (cont == 1) {
        printCardData(); // Exibe os dados da segunda carta
      }

      // Pergunta se o usuário deseja comparar os valores de forma individual
      printf("Deseja comparar os valores de forma individual? \n 1 - Sim\n 2 - Não\n");
      scanf("%u", &cont);

      if (cont == 1) {
        int continueComparison = 1; // Controle do loop de comparação
        while (continueComparison == 1) { // Loop enquanto o usuário quiser comparar
          printf("Selecione uma opção:\n");
          printf("1 - População\n");
          printf("2 - Área\n");
          printf("3 - PIB\n");
          printf("4 - Pontos turísticos\n");
          printf("5 - Densidade populacional\n");
          printf("6 - PIB per Capita\n");
          printf("7 - Poder da carta\n");
          scanf("%u", &battle); 

          // Compara os valores selecionados
          switch (battle) {
            case 1:
              printf("População: %s \n", (pop1 > pop2 ? "Carta 1 vence" : "Carta 2 vence"));
              break;
            case 2:
              printf("Área: %s \n", (area1 > area2 ? "Carta 1 vence" : "Carta 2 vence"));
              break;
            case 3:
              printf("PIB: %s \n", (pib1 > pib2 ? "Carta 1 vence" : "Carta 2 vence"));
              break;
            case 4:
              printf("Pontos turísticos: %s \n", (pontos1 > pontos2 ? "Carta 1 vence" : "Carta 2 vence"));
              break;
            case 5:
              printf("Densidade populacional: %s \n", (densidade1 > densidade2 ? "Carta 1 vence" : "Carta 2 vence"));
              break;
            case 6:
              printf("PIB per capita: %s \n", (pibPerCapita1 > pibPerCapita2 ? "Carta 1 vence" : "Carta 2 vence"));
              break;
            case 7:
              printf("Poder da carta: %s \n", (superPoder1 > superPoder2 ? "Carta 1 vence" : "Carta 2 vence"));
              break;
            default:
              printf("Opção inválida!\n");
          }
    
          // Pergunta se deseja continuar comparando
          printf("Deseja comparar novamente? \n 1 - Sim\n 2 - Não\n");
          scanf("%u", &continueComparison); // Atualiza a variável de controle
        }
      }

      // Pergunta se o usuário deseja iniciar a batalha geral
      printf("Deseja iniciar a batalha geral?\n 1 - Sim\n 2 - Não\n");
      scanf("%u", &cont);

      if (cont == 1) {
        // Exibe o resultado da batalha geral entre as cartas
        printf("Batalha entre as cartas:\n");
        printf("População: %s \n", (pop1 > pop2 ? "Carta 1" : "Carta 2"));
        printf("Área: %s \n", (area1 > area2 ? "Carta 1" : "Carta 2"));
        printf("PIB: %s \n", (pib1 > pib2 ? "Carta 1" : "Carta 2"));
        printf("Pontos turísticos: %s \n", (pontos1 > pontos2 ? "Carta 1" : "Carta 2"));
        printf("Densidade populacional: %s \n", (densidade1 > densidade2 ? "Carta 1" : "Carta 2"));
        printf("PIB per capita: %s \n", (pibPerCapita1 > pibPerCapita2 ? "Carta 1" : "Carta 2"));
        printf("Poder da carta: %s \n", (superPoder1 > superPoder2 ? "Carta 1" : "Carta 2"));
      } else {
        printf("Batalha cancelada!\n");
      }
      break;

    case 2:
      // Exibe as instruções do jogo
      printHowToPlay();
      break;

    case 3:
      // Encerra o programa
      printf("Saindo...\n");
      break;

    default:
      // Mensagem para opção inválida
      printf("Opção inválida!\n");
      break;
  }
  return 0;
}

// Tempo de projeto de 1,5 horas