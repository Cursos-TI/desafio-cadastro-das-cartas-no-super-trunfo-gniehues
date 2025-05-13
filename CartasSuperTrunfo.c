#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    
    // Input carta 1
    
    printf("Carta 1 - Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Carta 1 - Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Carta 1 - Digite a cidade: ");
    getchar();
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Carta 1 - Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Carta 1 - Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Carta 1 - Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Carta 1 - Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos1);

    
    // Input carta 2
    
    printf("Carta 2 - Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Carta 2 - Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Carta 2 - Digite a cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Carta 2 - Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Carta 2 - Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Carta 2 - Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Carta 2 - Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos2);

    
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    
    return 0;
}
