#include <stdio.h>

int main() {
    // Informações da carta 1
    char Estado1[50], codigoC1[50], nome_cidade1[50];
    unsigned long int populacao1;
    float areakm1, pib1;
    int numero_pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Informações da carta 2
    char Estado2[50], codigoC2[50], nome_cidade2[50];
    unsigned long int populacao2;
    float areakm2, pib2;
    int numero_pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada Carta 1
    printf("Carta 1\n");
    printf("Insira o Estado (A-H): ");
    scanf("%49s", Estado1);
    printf("Insira o código (ex: A01): ");
    scanf("%49s", codigoC1);
    printf("Insira o nome da cidade: ");
    scanf("%49s", nome_cidade1);
    printf("Insira a população: ");
    scanf("%lu", &populacao1);
    printf("Insira a Área: ");
    scanf("%f", &areakm1);
    printf("Insira o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Insira o N° de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Entrada Carta 2
    printf("\nCarta 2\n");
    printf("Insira o Estado (A-H): ");
    scanf("%49s", Estado2);
    printf("Insira o código (ex: A01): ");
    scanf("%49s", codigoC2);
    printf("Insira o nome da cidade: ");
    scanf("%49s", nome_cidade2);
    printf("Insira a população: ");
    scanf("%lu", &populacao2);
    printf("Insira a Área: ");
    scanf("%f", &areakm2);
    printf("Insira o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Insira o N° de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    // Cálculos
    densidade1 = populacao1 / areakm1;
    densidade2 = populacao2 / areakm2;

    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    super_poder1 = populacao1 + areakm1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);
    super_poder2 = populacao2 + areakm2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           Estado1, codigoC1, nome_cidade1, populacao1, areakm1, pib1, numero_pontos_turisticos1, densidade1, pib_per_capita1, super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           Estado2, codigoC2, nome_cidade2, populacao2, areakm2, pib2, numero_pontos_turisticos2, densidade2, pib_per_capita2, super_poder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", areakm1 > areakm2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numero_pontos_turisticos1 > numero_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);  // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
