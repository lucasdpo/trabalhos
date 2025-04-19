#include <stdio.h>

int main(){

/*declaracao das variaveis da carta 1*/
    char estado1[2];
    char codigo1[4];
    char cidade1[30];
/*O município brasileiro com maior nome é São José do Vale do Rio Preto,
    com 29 caracteres contando os espaços*/
    int popul1;
    float area1;
    float pib1;
    int turis1;

/*declaracao das variaveis da carta 2*/
    char estado2[2];
    char codigo2[4];
    char cidade2[30];
    int popul2;
    float area2;
    float pib2;
    int turis2;

/*"tela titulo" ja com o pedido para o usuario inserir, um a um, os dados das duas cartas*/
    printf(" \n");
    printf("S U P E R   T R U N F O   D E   P A I S E S\n");
    printf(" \n");
    printf("---Informe os dados da primeira carta---\n");
    printf(" \n");

/*entrada dos dados da primeira carta*/
    printf("Digite o codigo do estado da primeira carta: ");
    scanf("%s", &estado1);
    
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", &codigo1);
    getchar();//tive que usar em varios lugares pra limpar o input

    printf("Digite o nome da cidade da primeira carta: ");
    fgets(cidade1, 30, stdin);//usei fgets para poder usar espaços no nome da cidade

    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &popul1);
    
    printf("Digite a area da primeira carta (em quilometros quadrados): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da primeira carta (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &turis1);
    getchar(); 

/*entrada dos dados da segunda carta*/
    printf(" \n");
    printf("---Informe os dados da segunda carta---\n");
    printf(" \n");
    printf("Digite o codigo do estado da segunda carta: ");
    scanf("%s", &estado2);
    
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", &codigo2);
    getchar();

    printf("Digite o nome da cidade da segunda carta: ");
    fgets(cidade2, 30, stdin);

    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &popul2);
    
    printf("Digite a area da segunda carta (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da segunda carta (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &turis2);

/*exibicao dos dados*/
    printf(" \n");
    printf("---Carta 1---\n");
    printf(" \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da carta: %s \n", codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("Populacao: %d habitantes \n", popul1);
    printf("Area: %.2fkm² \n", area1);  //%.2f limita a exibicao a duas casas decimais
    printf("PIB: R$%.2f bilhoes \n", pib1);
    printf("Numero de pontos turisticos: %d \n", turis1);
    printf(" \n");

    printf(" \n");
    printf("---Carta 2---\n");
    printf(" \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da carta: %s \n", codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %d habitantes \n", popul2);
    printf("Area: %fkm² \n", area2);
    printf("PIB: R$%f bilhoes \n", pib2);
    printf("Numero de pontos turisticos: %d \n", turis2);
    printf(" \n");

    return 0;
}
