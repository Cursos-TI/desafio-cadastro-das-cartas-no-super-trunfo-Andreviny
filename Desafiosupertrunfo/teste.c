#include <stdio.h>

int main() {
    int population, touristattractions;
    float area, GDP;
    char name[50];

    printf("Name of the state: \n");
    scanf("%49s", name);

    printf("Population of the state: \n");
    scanf("%d", &population);

    printf("Area of the state: \n");
    scanf("%f", &area);

    printf("Number of tourist attractions: \n");
    scanf("%d", &touristattractions);

    printf("GDP: \n");
    scanf("%f", &GDP);

    printf("Name of the state: %s - Population: %d \n", name, population);
    printf("Area: %.2f - Tourist attractions: %d \n", area, touristattractions);
    printf("GDP: %.2f\n", GDP);

    return 0;
}
