#include <stdio.h>

    int main () {

    // carta 01
    int pop1, npt1; //npt = numero de pontos turisticos - pop = população
    float pib1, area1; // area em km²
    char estado1, cod1[10], nome1[20]; // cod = código da carta
    
    // carta 02
    int pop2, npt2;
    float pib2, area2;
    char estado2, cod2[11], nome2[21];

    // agora iniciaremos o cadastro das cartas
    printf("Desafio Super Trunfo.");
    printf("Agora vamos lançar os dados da primeira carta.\n");
    
    printf("Qual o Estado da carta(A-H)?\n");
    scanf(" %c", &estado1);

    printf("Qual o código da carta?\n");
    scanf("%s", cod1);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome1); // para poder utilizar espaços nos nomes

    printf("Qual a popoulação da cidade?\n");
    scanf("%d", &pop1);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possúi?\n");
    scanf("%d", &npt1);

    printf("\n");

    printf("Obrigado por cadastrar a carta %s.\n", nome1);

    printf("\n");

    printf("Agora vamos começar a cadastrar a segunda carta.\n");

    printf("\n");

    printf("Qual o Estado da carta(A-H)?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da carta?\n");
    scanf("%s", cod2);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome2);

    printf("Qual a popoulação da cidade?\n");
    scanf("%d", &pop2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possúi?\n");
    scanf("%d", &npt2);

    printf("\n");

    printf("Obrigado por cadastrar a carta %s.\n", nome2);

    printf("\n");

    printf("Agora vamos visualizar as cartas cadastradas.\n");

    printf("\n");

    printf("Carta Nº 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Area: %.2f em km²\n", area1);
    printf("PIB %.2f\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", npt1);

    printf("\n");

    printf("Carta Nº 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Area: %.2f em km²\n", area2);
    printf("PIB %.2f\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", npt2);

    printf("Agora vamos comparar o atributo: População.\n");

    if (pop1 > pop2) {
        printf("A carta %s é a vencedora com %d habitantes.\n", nome1, pop1);
    } else if (pop2 > pop1) {
        printf("A carta %s é a vencedora com %d habitantes.\n", nome2, pop2);
    } else {
        printf("As duas cartas empataram com %d habitantes.\n", pop1);
    }

    printf("Agora vamos comparar o atributo: Área.\n");

    if (area1 > area2) {
        printf("A carta %s é a vencedora com %.2f km².\n", nome1, area1);
    } else if (area2 > area1) {
        printf("A carta %s é a vencedora com %.2f km².\n", nome2, area2);
    } else {
        printf("As duas cartas empataram com %.2f km².\n", area1);
    }

    printf("Agora vamos comparar o atributo: PIB.\n");

    if (pib1 > pib2) {
        printf("A carta %s é a vencedora com %.2f de PIB.\n", nome1, pib1);
    } else if (pib2 > pib1) {
        printf("A carta %s é a vencedora com %.2f de PIB.\n", nome2, pib2);
    } else {
        printf("As duas cartas empataram com %.2f de PIB.\n", pib1);
    }       

    return 0;

    }