#include <stdio.h>
struct card {
    int population, touristattractions;
    float area, GDP;
    char name[50];
    char code [3];
} State;

int main () {
    struct card  card1, card2;

    // Frist regsitration of the card
    printf("Register card#1 \n");

    printf("Name of the state: \n", card1.name);
    scanf("%s", card1.name);

    printf("Code of the state: \n", card1.code);
    scanf("%s", card1.code);

    printf("Population of the state: \n", card1.population);
    scanf("%d", &card1.population);

    printf("Area of the state: \n", card1.area);
    scanf("%f", &card1.area);

    printf("Touristattractions: \n", card1.touristattractions);
    scanf("%d", &card1.touristattractions);

    printf("GDP: \n", card1.GDP);
    scanf("%f", &card1.GDP); 

    // Second regsitration of the card
    printf("Register card#2 \n");

    printf("Name of the state: \n", card2.name);
    scanf("%s", card2.name);

    printf("Code of the state: \n", card2.code);
    scanf("%s", card2.code);

    printf("Population of the state: \n", card2.population);
    scanf("%d", &card2.population);

    printf("Area of the state: \n", card2.area);
    scanf("%f", &card2.area);

    printf("Touristattractions: \n", card2.touristattractions);
    scanf("%d", &card2.touristattractions);

    printf("GDP: \n", card2.GDP);
    scanf("%f", &card2.GDP); 

      // Display both cards
    printf("\nRegistered Cards:\n");
    printf("Card #1: Name: %s - Code: %s - Population: %d - Area: %.2f - Tourist attractions: %d - GDP: %.2f\n",
           card1.name, card1.code,card1.population, card1.area, card1.touristattractions, card1.GDP);
    printf("Card #2: Name: %s - Code: %s - Population: %d - Area: %.2f - Tourist attractions: %d - GDP: %.2f\n",
           card2.name, card2.code,card2.population, card2.area, card2.touristattractions, card2.GDP);    
    return 0;
}