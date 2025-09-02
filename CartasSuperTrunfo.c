#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluno: Leonardo Querino

int main(){

    // Definição das variáveis
    
    char estado1;
    char nome1[10];
    int cd1= 1; // A variável codigo1 está fixa em 1 pois trata-se da carta 1.
    int* populacao1;
    int* pturistico1;
    float area1;
    float pib1;

    char estado3;
    char nome2[10];
    int cd2= 2; // A variável codigo1 está fixa em 2 pois trata-se da carta 2.
    int* populacao2;
    int* pturistico2;
    float area2;
    float pib2;

    // Captura de dados das variáveis da Carta 1

    printf("\nDigite as informações sobre a Carta 1:\n\n");

    printf("Digite o Estado da carta:");
    scanf("%c", &estado1);

    printf("\nDigite o nome desta cidade:");
    scanf("%s", &nome1);

    printf("\nDigite o número da população:");
    scanf("%d", &populacao1);

    printf("\nDigite a área em metros quadrados:");
    scanf("%f", &area1);

    printf("\nDigite o PIB em reais (R$):");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de ponto turístico desta cidade:");
    scanf("%d", &pturistico1);

     // Captura de dados das variáveis da Carta 2

    printf("\n\nDigite as informações sobre a Carta 2:\n\n");

    printf("Digite o Estado da carta:");
    scanf("%s", &estado3);
    
    printf("\nDigite o nome desta cidade:");
    scanf("%s", &nome2);

    printf("\nDigite o número da população:");
    scanf("%d", &populacao2);

    printf("\nDigite a área em metros quadrados:");
    scanf("%f", &area2);

    printf("\nDigite o PIB em reais (R$):");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de ponto turístico desta cidade:");
    scanf("%d", &pturistico2);

    // Saida de dados da carta 1

    printf("\n\nInformações sobre a carta:\n\n");

    printf("Carta: %d\n", cd1);
    printf("Estado: %c\n", estado1);
    printf("Código: %c%d\n", estado1, cd1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fm\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pturistico1);

     // Saida de dados da carta 2

    printf("\n\nInformações sobre a carta:\n\n");

    printf("Carta: %d\n", cd2);
    printf("Estado: %c\n", estado3);
    printf("Código: %c%d\n", estado3, cd2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fm\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pturistico2);

    return 0;
}
