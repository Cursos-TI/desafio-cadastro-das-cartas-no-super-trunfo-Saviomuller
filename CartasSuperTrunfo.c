#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Cadastro das variáveis da carta 1
    
    char estado1; // Armazena a letra a ser atribuída para o estado de A - H
    char carta1[2]; // Armazena o numero a ser atribuido a carta de 01 - 04
    char cidade1[50]; // Armazena o nome da cidade com no máximo 50 caracteres
    int populacao1; // Armazena a população da cidade
    int turisticos1; // Armazena a quantidade de pontos turistícos da cidade
    float area1; // Armazena a aréa em km² da cidade
    float pib1; // Armazena o PIB da cidade

    // Entrada de dados para a primeira carta
    printf("Defina os dados para a carta 1\n");
    printf("Digite uma letra de A á H para a sua carta:\n");
    scanf("%c", &estado1);

    printf("Digite um numero de 01 a 04 para carta:\n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em Km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos1);

    //Imprime os dados da Carta 1

    printf("----------Dados Carta 1-----------");
    printf("\nEstado: %c\n", estado1);
    printf("Carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.3f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turísticos: %d\n", turisticos1);

    return 0;
}
