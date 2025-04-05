#include <stdio.h>

int main() {

    // Informações da carta 1
    char Estado1[50];1
    char codigoC1[50];2
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
    scanf("%d", &populacao1);
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

    return 0;
}