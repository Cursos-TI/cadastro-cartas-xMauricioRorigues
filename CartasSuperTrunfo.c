#include <stdio.h>

int main() {

  // **Área para definição das variáveis para armazenar as propriedades das cidades**

  // Declaração das variáveis para a Carta 1

    char estado1; //Letra de A - H
    char codigoCarta1[5]; // "01 - 04"
    char nomeCidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densipop1;
    float pibpc1;

  // Declaração das variáveis para a Carta 2

    char estado2; //Letra de A - H
    char codigoCarta2[5]; // "01 - 04"
    char nomeCidade2[50]; 
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densipop2;
    float pibpc2;  

   // Arrays de caracters (strings) para o código e o nome da cidade

  // **Área para entrada de dados**

  // Coleta de dados da Carta 1
    printf("Cadastro da Primeira Carta\n");

    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);

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

    printf("\n\n");

    // Coleta de dados da Carta 2
    printf("Cadastro da Segunda Carta\n");

    printf("Digite o estado da Segunda carta (A-H): ");
    scanf(" %c", &estado2);

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
    
    //%s: Imprime uma cadeia (string) de caracteres.
    //%d: Imprime um inteiro no formato decimal.
    //%f: Imprime um número de ponto flutuante no formato padrão.
    // %c: Foi usado para ignorar caracteres em branco (como espaços, quebras de linha) antes de ler o próximo caractere.

    printf("\n");


    //Calculo da Densidade populacional e Pib PerCapita
    densipop1 = populacao1 / area1;
    pibpc1 = (float) (pib1 * 1000000000) / populacao1;

    // Foi multiplicado o PIB por 1 bilhão para obter o valor total antes de dividir para obter o valor real do PibPercapita



    // **Área para a exibição dos Dados Cadastrados**
    printf("Dados das Cartas Cadastradas\n\n");

    // Exibe as informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densipop1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    printf("\n");

    densipop2 = populacao2 / area2;
    pibpc2 = (float) (pib2 * 1000000000) / populacao2;

    // Exibe as informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densipop2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);



return 0;
    }