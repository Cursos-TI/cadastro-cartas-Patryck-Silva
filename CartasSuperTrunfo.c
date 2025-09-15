#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, pturisticos1, populacao2, pturisticos2;
    float area1, area2;
    char pib1[50], pib2[50];

    //
    printf("\n\n%30s\n\n", "\033[1mSuper-Trunfo\033[0m");

    //CARTA 1
    printf("Carta 1:\n"); //Deixei conforme esta pedindo com o numero antes dos prontos ": 1"

    //ESTADO
    do {
        printf("Digite o Estado de (A até H) em MAIÚSCULA: ");  //Achei esse bug que ele não entende minuscula como uma letra correta mesmo estando conforme solicitado kkk
        scanf(" %c", &estado1);
        getchar();

        if (estado1 < 'A' || estado1 > 'H') {
            printf("Entrada inválida! Tente novamente digitando de (A até H) em MAIÚSCULA.\n");
        }

    } while (estado1 < 'A' || estado1 > 'H');

    //CODIGO
    do {
        printf("Digite o Codigo de (01 ate 04): ");
        scanf("%2s", codigo1);
        getchar();

        if (!(strcmp(codigo1, "01") == 0 ||
              strcmp(codigo1, "02") == 0 ||
              strcmp(codigo1, "03") == 0 ||
              strcmp(codigo1, "04") == 0)) {
            printf("Codigo invalido! Tente novamente digitando de (01 ate 04).\n");
        }

    } while (!(strcmp(codigo1, "01") == 0 ||
               strcmp(codigo1, "02") == 0 ||
               strcmp(codigo1, "03") == 0 ||
               strcmp(codigo1, "04") == 0));

    //CIDADE
    printf("Digite o nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    //POPULACAO
    printf("Digite a População: ");
    scanf("%d", &populacao1);

    //AREA CIDADE
    printf("Digite a área (KM²) da cidade: ");
    scanf("%f", &area1);

    //PIB
    printf("Digite o PIB da cidade: ");
    scanf(" %[^\n]", pib1);

    //PONTOS TURISTICOS
    printf("Digite número de pontos turisticos: ");
    scanf("%d", &pturisticos1);

    //CARTA 2
    printf("\nCarta 2:\n");

    //ESTADO
    do {
        printf("Digite o Estado de (A até H) em MAIÚSCULA: ");
        scanf(" %c", &estado2);
        getchar();

        if (estado2 < 'A' || estado2 > 'H') {
            printf("Entrada inválida! Tente novamente digitando de (A até H) em MAIÚSCULA.\n");
        }

    } while (estado2 < 'A' || estado2 > 'H');

    //CODIGO
    do {
        printf("Digite o Codigo de (01 ate 04): ");
        scanf("%2s", codigo2);
        getchar();

        if (!(strcmp(codigo2, "01") == 0 ||
              strcmp(codigo2, "02") == 0 ||
              strcmp(codigo2, "03") == 0 ||
              strcmp(codigo2, "04") == 0)) {
            printf("Codigo invalido! Tente novamente digitando de (01 ate 04).\n");
        }

    } while (!(strcmp(codigo2, "01") == 0 ||
               strcmp(codigo2, "02") == 0 ||
               strcmp(codigo2, "03") == 0 ||
               strcmp(codigo2, "04") == 0));

    //CIDADE
    printf("Digite o nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    //POPULACAO
    printf("Digite a População: ");
    scanf("%d", &populacao2);

    //AREA CIDADE
    printf("Digite a área (KM²) da cidade: ");
    scanf("%f", &area2);

    //PIB
    printf("Digite o PIB da cidade: ");
    scanf(" %[^\n]", pib2);

    //PONTOS TURISTICOS
    printf("Digite número de pontos turisticos: ");
    scanf("%d", &pturisticos2);

    // RESULTADOS
    printf("\nCarta 1: ");
    printf("\nEstado: %c", estado1);
    printf("\nCodigo: %c%s", estado1, codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f Km²", area1);
    printf("\nPIB: %s", pib1);
    printf("\nNúmero de Pontos Turísticos: %d\n", pturisticos1);

    printf("\nCarta 2: ");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %c%s", estado2, codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f Km²", area2);
    printf("\nPIB: %s", pib2);
    printf("\nNúmero de Pontos Turísticos: %d\n", pturisticos2);

    return 0;
} 
