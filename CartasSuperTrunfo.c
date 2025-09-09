#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluno: Leonardo Querino

int main(){

    // Definição das variáveis
    
    int cd1= 1; // A variável codigo1 está fixa em 1 pois trata-se da carta 1. //
    int cd2= 2; // A variável codigo1 está fixa em 2 pois trata-se da carta 2. //

    char estado1;
    char estado2;

    char nome1[20];
    char nome2[20];

    float pib1;
    float pib2;

    float dpp1;
    float dpp2;

    float rendap1;
    float rendap2;

    int pp1;
    int pp2;

    int pturistico1;
    int pturistico2;

    float area1;
    float area2;

    // Captura de dados das variáveis da Carta 1

    printf("\nDigite as informações sobre a Carta 1:\n\n");

    printf("Digite o Estado da carta:");
    scanf("%c", &estado1);

    printf("\nDigite o nome desta cidade:");
    scanf("%s", nome1);

    printf("\nDigite o número da população:");
    scanf("%d", &pp1);

    printf("\nDigite a área em km quadrados:");
    scanf("%f", &area1);

    printf("\nDigite o PIB em reais (R$):");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de ponto turístico desta cidade:");
    scanf("%d", &pturistico1);

     // Captura de dados das variáveis da Carta 2

    printf("\n\nDigite as informações sobre a Carta 2:\n\n");

    printf("Digite o Estado da carta:");
    scanf("%s", &estado2);
    
    printf("\nDigite o nome desta cidade:");
    scanf("%s", nome2);

    printf("\nDigite o número da população:");
    scanf("%d", &pp2);

    printf("\nDigite a área em km quadrados:");
    scanf("%f", &area2);

    printf("\nDigite o PIB em reais (R$):");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de ponto turístico desta cidade:");
    scanf("%d", &pturistico2);

    // Calculos matemáticos - Nível Aventureiro //

    // Densidade populacional

    dpp1= (float) pp1/area1;
    dpp2= (float) pp2/area2;

    // Renda per capita

    rendap1= (float) pib1/pp1;
    rendap2= (float) pib2/pp2;

    // Lógica de comparação das cartas e super poder

    float spd1 = pp1 + area1 + pib1 + pturistico1 + rendap1 + (-dpp1);
    float spd2 = pp2 + area2 + pib2 + pturistico2 + rendap2 + (-dpp2);

    // Saida de dados da carta 1

    printf("\n\nInformações sobre a carta:\n\n");

    printf("Carta: %d\n", cd1);
    printf("Estado: %c\n", estado1);
    printf("Código: %c%d\n", estado1, cd1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", pp1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pturistico1);
    printf("Densidade populacional: %.2f hab/km²\n", dpp1);
    printf("Renda per capita: %.2f reais\n", rendap1);
    printf("Super poder: %.2f\n", spd1);

     // Saida de dados da carta 2

    printf("\n\nInformações sobre a carta:\n\n");

    printf("Carta: %d\n", cd2);
    printf("Estado: %c\n", estado2);
    printf("Código: %c%d\n", estado2, cd2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", pp2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pturistico2);
    printf("Densidade populacional: %.2f hab/km²\n", dpp2);
    printf("Renda per capita: %.2f reais\n", rendap2);
    printf("Super poder: %.2f\n", spd2);

    printf("\n\nBatalha das cartas:\n\n");

    printf("População: %d\n", pp1 > pp2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pturistico1 > pturistico2);
    printf("Densidade Populacional: %d\n", dpp1 < dpp2);
    printf("PIB per Capita: %d\n", rendap1 > rendap2);
    printf("Super Poder: %d\n\n", spd1 > spd2);

    // Logíca de comparação If e Else

    printf("\n\nBatalha das cartas: Lógica IF e ELSE\n\n");

    printf("Comparativo População: 1 = %d hab x 2 = %d hab|| - ", pp1, pp2); 

    if (pp1 > pp2){
        printf("Neste atributo a carta 1 (%s) venceu", nome1);
    }
    else{
        printf("Neste atributo a carta 2 (%s) venceu", nome2);
    }

    printf("\nComparativo PIB: 1 = R$ %.2f x 2 = R$ %.2f || - ", pib1, pib2); 

    if (pib1 > pib2){
        printf("Neste atributo a carta 1 (%s) venceu", nome1);
    }
    else{
        printf("Neste atributo a carta 2 (%s) venceu", nome2);
    }

    printf("\nComparativo Densidade Populacional: 1 = %.2f hab/km² x 2 = %.2f hab/km² || - ", dpp1, dpp2); 

    if (dpp1 < dpp2){
        printf("Neste atributo a carta 1 (%s) venceu", nome1);
    }
    else{
        printf("Neste atributo a carta 2 (%s) venceu", nome2);
    }
    
    return 0;
}
