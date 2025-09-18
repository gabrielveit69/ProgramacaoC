#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int player, pc;
    srand(time(0));

    printf("Jogo de Jokenpo.\nEscolha uma opção:\n1. Pedra\n2. Papel\n3. Tesoura\nEscolha:");
    scanf("%d", &player);

    pc = rand() % 3 + 1;

    switch(player) {
        case 1:
            printf("Você escolheu Pedra.\n");
            break;
        case 2:
            printf("Você escolheu Papel.\n");
            break;
        case 3:
            printf("Você escolheu Tesoura.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    switch(pc) {
        case 1:
            printf("O pc escolheu: Pedra.\n");
            break;
        case 2:
            printf("O pc escolheu: Papel.\n");
            break;
        case 3:
            printf("O pc escolheu: Tesoura.\n");
            break;
    }
    
    if (player == pc) {
        printf("Empate!\n");
    } else if ((player == 1 && pc == 3) || (player == 2 && pc == 1) || (player == 3 && pc == 2)) {
        printf("Você ganhou!\n");
    } else {
        printf("Você perdeu!\n");
    }

    return 0;
}