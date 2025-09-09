#include <stdio.h>
#include <stdlib.h>

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

    int opbt;
    int opbt2;

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
    printf("Renda per capita: %.2f reais / hab\n", rendap1);
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
    printf("Renda per capita: %.2f reais / hab\n", rendap2);
    printf("Super poder: %.2f\n", spd2);

    printf("\n\nBatalha das cartas:\n\n");
    
    printf("1. População: \n");
    printf("2. Área: \n");
    printf("3. PIB: \n");
    printf("4. Pontos turísticos: \n");
    printf("5. Densidade Populacional: \n");
    printf("6. Renda per capita: \n");
    printf("7. Super Poder: \n");

    printf("\nSelecione dois atributos para a batalha:\n");

    printf("Atributo 1: ");
    scanf("%d", &opbt);

    printf("Atributo 2: ");
    scanf("%d", &opbt2);

    opbt2 == opbt ? printf("Você escolheu o mesmo atributo da opção 1.") : printf("Atributos selecioados são válidos. . . . . . . . . . . Batalhando!");

    printf("\n*** Exibição do Resultado: ***\n\n");

    printf("Disputa entre: %s x %s\n", nome1, nome2);

    printf("Atributo 1 selecionados para disputa: ", opbt);
    switch (opbt){
case 1:
    printf("População\n");
    break;
case 2:
    printf("Área\n");
    break;
case 3:
    printf("População\n");
    break;
case 4:
    printf("PIB\n");
    break;
case 5:
    printf("Pontos turísticos\n");
    break;
case 6:
    printf("Renda per capita\n");
    break;
case 7:
    printf("Super Poder\n");
    break;
default:
    printf("Opção selecionada foi inválida.\n");
    break;
}
    printf("Atributo 2 selecionados para disputa: ", opbt2);
switch (opbt2){
case 1:
    printf("População\n");
    break;
case 2:
    printf("Área\n");
    break;
case 3:
    printf("População\n");
    break;
case 4:
    printf("PIB\n");
    break;
case 5:
    printf("Pontos turísticos\n");
    break;
case 6:
    printf("Renda per capita\n");
    break;
case 7:
    printf("Super Poder\n");
    break;
default:
    printf("Opção selecionada foi inválida.\n");
    break;
}
    printf("Valores do atributo 1 selecionado: ", opbt);
switch (opbt){
case 1:
    printf("%s = %d hab x %s = %d hab|| - ", nome1, pp1, nome2, pp2);
    break;
case 2:
    printf("%s = %.2f km² x %s = %.2f km² || - ", nome1, area1, nome2, area2);
    break;
case 3:
    printf("%s = %.2f km² x %s = %.2f km² || - ", nome1, pib1, nome2, pib2);
    break;
case 4:
    printf("%s = %d pontos x %s = %d pontos || - ", nome1, pturistico1, nome2, pturistico2);
    break;
case 5:
    printf("%s = %.2f hab/km² x %s = %.2f hab/km² || - ", nome1, dpp1, nome2, dpp2);
    break;
case 6:
    printf("%s = %.2f reais / hab x %s = %.2f reais / hab || - ", nome1, rendap1, nome2, rendap2);
    break;
case 7:
    printf("%s = %.2f x %s = %.2f || - ", nome1, spd1, nome2, spd2);
    break;
default: 
    printf("Opção selecionada foi inválida.\n");
    break;
}
printf("\nValores do atributo 2 selecionado: ", opbt2);
switch (opbt2){
case 1:
    printf("%s = %d hab x %s = %d hab|| - ", nome1, pp1, nome2, pp2);
    break;
case 2:
    printf("%s = %.2f km² x %s = %.2f km² || - ", nome1, area1, nome2, area2);
    break;
case 3:
    printf("%s = %.2f km² x %s = %.2f km² || - ", nome1, pib1, nome2, pib2);
    break;
case 4:
    printf("%s = %d pontos x %s = %d pontos || - ", nome1, pturistico1, nome2, pturistico2);
    break;
case 5:
    printf("%s = %.2f hab/km² x %s = %.2f hab/km² || - ", nome1, dpp1, nome2, dpp2);
    break;
case 6:
    printf("%s = %.2f reais / hab x %s = %.2f reais / hab || - ", nome1, rendap1, nome2, rendap2);
    break;
case 7:
    printf("%s = %.2f x %s = %.2f || - ", nome1, spd1, nome2, spd2);
    break;
default: 
    printf("Opção selecionada foi inválida.\n");
    break;
}
    printf("\n\n ** Batalha individual de atributos **: \n\n", opbt);

    printf("\nCarta vencedora atributo 1: ", opbt);

    switch (opbt){
    case 1:
        if (pp1 > pp2){
            printf("%s venceu", nome1);
        }
        else if (pp1 < pp2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 2:
        if (area1 > area2){
            printf("%s venceu", nome1);
        }
        else if (area1 < area2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("%s venceu", nome1);
        }
        else if (pib1 < pib2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 4:
        if (pturistico1 > pturistico2){
            printf("%s venceu", nome1);
        }
        else if (pturistico1 < pturistico2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 6:
        if (rendap1 > rendap2){
            printf("%s venceu", nome1);
        }
        else if (rendap1 < rendap2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 7:
        if (spd1 > spd2){
            printf("%s venceu", nome1);
        }
        else if (spd1 < spd2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    default:
        printf("Opção selecionada foi inválida.");
        break;
    }

    printf("\nCarta vencedora atributo 2: ", opbt2);

    switch (opbt2){
    case 1:
        if (pp1 > pp2){
            printf("%s venceu", nome1);
        }
        else if (pp1 < pp2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 2:
        if (area1 > area2){
            printf("%s venceu", nome1);
        }
        else if (area1 < area2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("%s venceu", nome1);
        }
        else if (pib1 < pib2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 4:
        if (pturistico1 > pturistico2){
            printf("%s venceu", nome1);
        }
        else if (pturistico1 < pturistico2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 6:
        if (rendap1 > rendap2){
            printf("%s venceu", nome1);
        }
        else if (rendap1 < rendap2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    case 7:
        if (spd1 > spd2){
            printf("%s venceu", nome1);
        }
        else if (spd1 < spd2){ 
            printf("%s venceu", nome2);
        }
        else{
            printf("Houve um empate!");
        }
        break;
    default:
        printf("Opção selecionada foi inválida.");
        break;
    }


    return 0;
}
