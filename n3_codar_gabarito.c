#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int NJ, NPC, RES; // NJ = Numero do Jogador NPC = Numero do Computador RES = Resultado
    char TC; //Tipo de Comparação

    //Gera código aleatório
    srand(time(0));
    NPC = rand() % 100 + 1; // Numero entre 1 e 100

    // Inicio do Jogo
    printf("Bem vindo ao jogo de Maior, Menor ou Igual.\n");
    printf("Você deve escolher um numero e o tipo de comparação.\n");
    printf("M. Maior.\n");
    printf("N. Menor\n");
    printf("I. Igual.\n");

    printf("Escolha a Comparação:\n");
    scanf(" %c", &TC);

    printf("Digite um numero entre 1 e 100:\n");
    scanf("%d", &NJ);
    
    // Exibe o numero do computador

    //printf("O numero do Computador é: %d\n", &NPC);

    switch (TC)
    {
    case 'M':
    case 'm':
    printf("Você escolheu a opção MAIOR.\n");
    RES = NJ > NPC ? 1 : 0;
        break;
    case 'N':
    case 'n':
    printf("Você escolheu a opção MENOR.\n");
    RES = NJ < NPC ? 1 : 0;
        break;
    case 'I':
    case 'i':
    printf("Você escolheu a opção IGUAL.\n");
    RES = NJ = NPC ? 1 : 0;
        break;    
    default:
    printf("Opção de jogo inválida.\n");
        break;
    }

    printf("O numero do Computador é: %d e o do Jogador é: %d\n", NPC, NJ);

    if (RES == 1)
    {
       printf("Parabéns, você venceu!\n");
    } else {
        printf("Infelizmente você perdeu.\n");
    }
    



}