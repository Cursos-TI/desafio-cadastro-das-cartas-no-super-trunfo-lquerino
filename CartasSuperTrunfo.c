#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluno: Leonardo Querino

int main() {
    // Definição das variáveis
    
    char estado1, codigo1=1,nome1; // A variável codigo1 está fixa em 1 pois trata-se da carta 1.
    int populacao1, pturistico1;
    float area1, pib1;

    // Captura de dados das variáveis da Carta 1

    printf("\nDigite as informações sobre a Carta 1:\n\n");

    printf("Digite o Estado da carta:");
    scanf("%s", &estado1);

    printf("\nDigite o nome desta cidade:");
    scanf("%s", &nome1);

    printf("\nDigite o número da população:");
    scanf("%d", &populacao1);

    printf("\nDigite a área em metros quadrados:");
    scanf("%f", &area1);

    printf("\nDigite o PIB em reais (R$):");
    scanf("%.2f", &pib1);

    printf("\nDigite a quantidade de ponto turístico desta cidade:");
    scanf("%d", &pturistico1);

    // Saida de dados da carta 1

    printf("\n\nInformações sobre a carta 1:\n");

    printf("Carta: %d", codigo1);
    printf("Estado: %c", estado1);
    printf("Código: %s", codigo1, estado1);
    printf("Nome da cidade: %s", nome1);
    printf("População: %d", populacao1);
    printf("Área: %f", area1);
    printf("PIB: %2.f", pib1);
    printf("Número de pontos turísticos: %s", pturistico1);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
