#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração das variáveis para a Carta 1

    char estado1; //Letra de A - H
    char codigoCarta1[5]; // "01 - 04"
    char nomeCidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Arrays de caracters (strings) para o código e o nome da cidade

  // Área para entrada de dados

  // Coleta de dados da Carta 1
    printf("Cadastro da Primeira Carta\n");

    printf("Digite o estado da primeira carta (A-H): ");
    scanf("%s", &estado1);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //%s: Imprime uma cadeia (string) de caracteres.
    //%d: Imprime um inteiro no formato decimal.
    //%f: Imprime um número de ponto flutuante no formato padrão.

    printf("\n");

    //  Coleta de dados da Carta 2 
    printf("Cadastro da Segunda Carta\n");

    printf("Digite o estado da segunda carta (A-H): ");
    scanf("%s", &estado2);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    printf("\n\n");

  // Área para exibição dos dados da cidade

  // Exibição dos Dados Cadastrados
    printf("Dados das Cartas Cadastradas\n\n");

    // Exibe as informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibe as informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
