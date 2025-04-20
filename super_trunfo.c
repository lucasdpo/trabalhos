#include <stdio.h>

int main(){

/*declaracao das variaveis da carta 1*/
    char estado1[2];
    char codigo1[4];
    char cidade1[30];
    /*O município brasileiro com maior nome é São José do Vale do Rio Preto,
    com 29 caracteres contando os espaços*/
    unsigned long int popul1;
    float area1;
    float pib1;
    int turis1;
    float dens1;
    float ppc1;
    float super1;

/*declaracao das variaveis da carta 2*/
    char estado2[2];
    char codigo2[4];
    char cidade2[30];
    unsigned long int popul2;
    float area2;
    float pib2;
    int turis2;
    float dens2;
    float ppc2;
    float super2;

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
    getchar();//tive que usar em alguns lugares pra limpar o input

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

/*calculo dos indicadores*/
    dens1 = (float) popul1 / area1;
    ppc1 = (pib1 * 1000000000 ) / (float) popul1;

    dens2 = (float) popul2 / area2;
    ppc2 = (pib2 * 1000000000 ) / (float) popul2;

/*calculo do "super poder"*/
    super1 = (float) popul1 + area1 + pib1 + (float) turis1 + dens1 + (1 / ppc1);
    super2 = (float) popul2 + area2 + pib2 + (float) turis2 + dens2 + (1 / ppc2);

/*exibicao dos dados*/
    printf(" \n");
    printf("---Carta 1---\n");
    printf(" \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da carta: %s \n", codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("Populacao: %d habitantes \n", popul1);
    printf("Area: %.2f quilometros quadrados \n", area1);  //%.2f limita a exibicao a duas casas decimais
    printf("PIB: %.2f bilhoes de rea \n", pib1);
    printf("Numero de pontos turisticos: %d \n", turis1);
    printf("Densidade Populacional: %.2f habitantes por quilometro quadrado \n", dens1);
    printf("PIB per capita: %.2f reais \n", ppc1);
    printf("Super Poder: %.0f \n", super1);
    printf(" \n");

    printf(" \n");
    printf("---Carta 2---\n");
    printf(" \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da carta: %s \n", codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %d habitantes \n", popul2);
    printf("Area: %.2f quilometros quadrados \n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d \n", turis2);
    printf("Densidade Populacional: %.2f habitantes por quilometro quadrado \n", dens2);
    printf("PIB per capita: %.2f reais \n", ppc2);
    printf("Super Poder: %.0f \n", super2);
    printf(" \n");

/*comparacao das duas cartas*/
    printf(" \n");
    printf("R E S U L T A D O\n");
    printf(" \n");

///*logica de comparacao com if e else
    if (popul1 > popul2) {printf("Populacao: Carta 1 venceu! ");} 
        else {printf("Populacao: Carta 2 venceu! ");}
        printf("(%d vs %d)\n", popul1, popul2);
        printf(" \n");

    if (area1 > area2) {printf("Area: Carta 1 venceu! ");} 
        else {printf("Area: Carta 2 venceu! ");}
        printf("(%.2f vs %.2f)\n", area1, area2);
        printf(" \n");

    if (pib1 > pib2) {printf("PIB: Carta 1 venceu! ");} 
        else {printf("PIB: Carta 2 venceu! ");}
        printf("(%.2f vs %.2f)\n", pib1, pib2);
        printf(" \n");

    if (turis1 > turis2) {printf("Numero de pontos turisticos: Carta 1 venceu! ");} 
        else {printf("Numero de pontos turisticos: Carta 2 venceu! ");}
        printf("(%d vs %d)\n", turis1, turis2);
        printf(" \n");

    if (dens1 < dens2) {printf("Densidade Populacional: Carta 1 venceu! ");} 
        else {printf("Densidade Populacional: Carta 2 venceu! ");}
        printf("(%.2f vs %.2f)\n", dens1, dens2);
        printf(" \n");

    if (ppc1 > ppc2) {printf("PIB per capita: Carta 1 venceu! ");} 
        else {printf("PIB per capita: Carta 2 venceu! ");}
        printf("(%.2f vs %.2f)\n", ppc1, ppc2);
        printf(" \n");

    if (super1 > super2) {printf("Super Poder: Carta 1 venceu! ");} 
        else {printf("Super Poder: Carta 2 venceu! ");}
        printf("(%.0f vs %.0f)\n", super1, super2);
        printf(" \n");
//*/

    return 0;
}
