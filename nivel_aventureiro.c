#include <stdio.h>

int main() {

    // Informações da carta 1
    char Estado1[50];
    char codigoC1[50];
    char nome_cidade1[50];
    int populacao1;
    float areakm1;
    float pib1;
    int numero_pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Informações da carta 2
    char Estado2[50];
    char codigoC2[50];
    char nome_cidade2[50];
    int populacao2;
    float areakm2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Apresentação de dados inseridos pelo usuário 1
    printf("Carta 1\n");
    printf("Insira o Estado (A-H)\n");
    scanf("%49s", Estado1);
    printf("Insira o código (ex: A01)\n");
    scanf("%49s", codigoC1);
    printf("Insira o nome da cidade\n");
    scanf("%49s", nome_cidade1);
    printf("Insira a população\n");
    scanf("%d", &populacao1);.
    printf("Insira a Área\n");
    scanf("%f", &areakm1);
    printf("Insira o PIB (em bilhões)\n");
    scanf("%f", &pib1);
    printf("Insira o N° de pontos turísticos\n");
    scanf("%d", &numero_pontos_turisticos1);

    // Apresentação de dados inseridos pelo usuário 2
    printf("\nCarta 2\n");
    printf("Insira o Estado (A-H)\n");
    scanf("%49s", Estado2);
    printf("Insira o código (ex: A01)\n");
    scanf("%49s", codigoC2);
    printf("Insira o nome da cidade\n");
    scanf("%49s", nome_cidade2);
    printf("Insira a população\n");
    scanf("%d", &populacao2);
    printf("Insira a Área\n");
    scanf("%f", &areakm2);
    printf("Insira o PIB (em bilhões)\n");
    scanf("%f", &pib2);
    printf("Insira o N° de pontos turísticos\n");
    scanf("%d", &numero_pontos_turisticos2);

    // Cálculos
    densidade1 = populacao1 / areakm1;
    densidade2 = populacao2 / areakm2;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Saída formatada
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", codigoC1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", areakm1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n",numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", codigoC2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", areakm2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n",numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}