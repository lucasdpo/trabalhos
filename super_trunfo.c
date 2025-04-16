#include <stdio.h>

#define TAM 29
//O município brasileiro com maior nome é São José do Vale do Rio Preto, com 29 caracteres contando os espaços

int main() {

//declarei as variáveis:
    char estado1[TAM], codigo1[TAM], cidade1[TAM]; //as outras variáveis char só funcionaram com o mesmo limite
    int populacao1, turis1;
    float area1, pib1;
//mesma coisa, da segunda carta
    char estado2[TAM], codigo2[TAM], cidade2[TAM];
    int populacao2, turis2;
    float area2, pib2;

    //entrada dos dados da primeira carta
    printf("Digite o código do estado da primeira carta: ");
    fgets(estado1, TAM, stdin);

    printf("Digite o código da primeira carta: ");
    fgets(codigo1, TAM, stdin);

    printf("Digite o nome da cidade da primeira carta: ");
    fgets(cidade1, TAM, stdin); //usei fgets para poder usar espaços no nome da cidade

    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira carta (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira carta: ");
    scanf("%d", &turis1);

    getchar(); //pra limpar o input

    //entrada dos dados da segunda carta
    printf("Digite o código do estado da segunda carta: ");
    fgets(estado2, TAM, stdin);

    printf("Digite o código da segunda carta: ");
    fgets(codigo2, TAM, stdin);

    printf("Digite o nome da cidade da segunda carta: ");
    fgets(cidade2, TAM, stdin);

    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda carta (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda carta: ");
    scanf("%d", &turis2);

    //impressão dos dados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %s", estado1);
    printf("Código: %s", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turis1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s", estado2);
    printf("Código: %s", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turis2);

    return 0;
}
