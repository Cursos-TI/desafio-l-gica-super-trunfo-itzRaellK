#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    printf("\n\n-------------------- Desafio: Tema 1 - Cadastro das Cartas! --------------------\n\n");

    // Definição das variáveis
    char codigo_cidade1[4], codigo_cidade2[4];  // +1 para o caractere nulo
    char pais1[31], pais2[31];          // +1 para o caractere nulo
    char cidade1[31], cidade2[31];        // +1 para o caractere nulo
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    printf("Cadastro de cartas - SUPER TRUNFO!\n");

    // Inserção de dados com mensagens adequadas
    printf("\n-------------------- CARTA N. 1 --------------------\n");
    printf("Código da cidade (máximo 3 caracteres): ");
    scanf("%3s", codigo_cidade1); // Limita até 3 caracteres

    printf("País: ");
    scanf(" %30[^\n]", pais1);    // Limita até 30 caracteres

    printf("Cidade: ");
    scanf(" %30[^\n]", cidade1);  // Limita até 30 caracteres

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Inserção de dados com mensagens adequadas
    printf("\n-------------------- CARTA N. 2 --------------------\n");
    printf("Código da cidade (máximo 3 caracteres): ");
    scanf("%3s", codigo_cidade2); // Limita até 3 caracteres

    printf("País: ");
    scanf(" %30[^\n]", pais2);    // Limita até 30 caracteres

    printf("Cidade: ");
    scanf(" %30[^\n]", cidade2);  // Limita até 30 caracteres

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Comparação e Resultado entre as CARTAS
    if(populacao1 > populacao2) {
        // Exibição dos Dados das Cartas
        printf("\n-------------------- CARTA VENCEDORA! --------------------");
        printf("\n\n-------------------- Carta Cadastrada N. 1 --------------------\n\n");
        
        printf("Código da cidade: %s\n", codigo_cidade1);
        printf("País: %s\n", pais1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos turísticos: %d\n", pontos_turisticos1);

        printf("\nA carta N. 1 (%s) tem população maior que a carta N. 2 (%s)!", codigo_cidade1, codigo_cidade2);

        printf("\n\n-------------------- Fim do programa! --------------------\n\n");
    } else {
        // Exibição dos Dados das Cartas
        printf("\n-------------------- CARTA VENCEDORA! --------------------");
        printf("\n\n-------------------- Carta Cadastrada N. 2 --------------------\n\n");
    
        printf("Código da cidade: %s\n", codigo_cidade2);
        printf("País: %s\n", pais2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos turísticos: %d\n", pontos_turisticos2);

        printf("\nA carta N. 2 (%s) tem população maior que a carta N. 1 (%s)!", codigo_cidade2, codigo_cidade1);

        printf("\n\n-------------------- Fim do programa! --------------------\n\n");
    }

    return 0;
}