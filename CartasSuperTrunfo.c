#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaracao de todas a variaveis

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;


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

    printf("Carta 1 - Digite o PIB (em bilhoes): ");
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

    printf("Carta 2 - Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Carta 2 - Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos2);


    // Calculos

    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    int bilhao = 1000000000;
    pibPerCapita1 = pib1 * bilhao / (float) populacao1;
    pibPerCapita2 = pib2 * bilhao / (float) populacao2;


    // Output

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km\n²", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    return 0;
}
