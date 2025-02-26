#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

    // Cadastro das variáveis da carta 1    
    char estado1; // Armazena a letra a ser atribuída para o estado de A - H
    char carta1[3]; // Armazena o numero a ser atribuido a carta de 01 - 04 (limitado a 2 dígitos)
    char cidade1[60]; // Armazena o nome da cidade com no máximo 59 caracteres
    int populacao1; // Armazena a população da cidade
    int turisticos1; // Armazena a quantidade de pontos turistícos da cidade
    float area1; // Armazena a aréa em km² da cidade
    float pib1; // Armazena o PIB da cidade

    // Cadastro das variáveis da carta 2
    char estado2; // Armazena a letra a ser atribuída para o estado de A - H
    char carta2[3]; // Armazena o numero a ser atribuido a carta de 01 - 04 (limitado a 2 dígitos)
    char cidade2[60]; // Armazena o nome da cidade com no máximo 59 caracteres
    int populacao2; // Armazena a população da cidade
    int turisticos2; // Armazena a quantidade de pontos turistícos da cidade
    float area2; // Armazena a aréa em km² da cidade
    float pib2; // Armazena o PIB da cidade    

    // Entrada de dados para a  carta 1
    printf("Defina os dados para a carta 1\n");

    printf("Digite uma letra de A á H para a sua carta:\n");
    scanf(" %c", &estado1); // Espaço para evitar erro de buffer

    printf("Digite um numero de 01 a 04 para carta:\n");
    scanf("%2s", carta1); // "2s"  Limita a 2 caracteres

    getchar(); // Limpa buffer antes de fgets
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a quebra de linha

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em Km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos1);

    printf("\n---------------------------------------\n");

    // Entrada de dados para carta 2
    printf("\nDefina os dados para a carta 2\n");

    printf("Digite uma letra de A á H para a sua carta:\n");
    scanf(" %c", &estado2);

    printf("Digite um numero de 01 a 04 para carta:\n");
    scanf("%2s", carta2); //"2s" Limita a 2 caracteres


    getchar();
    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a quebra de linha

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em Km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos2);
    
    //Imprime os dados da Carta 1
    printf("\n----------Dados Carta 1-----------\n");
    printf("Estado: %c\n", estado1);
    printf("Carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.3f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turísticos: %d\n", turisticos1);

    //Imprime os dados da Carta 2
    printf("\n----------Dados Carta 2-----------\n");
    printf("Estado: %c\n", estado2);
    printf("Carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.3f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Turísticos: %d\n", turisticos2);

    return 0;
}
