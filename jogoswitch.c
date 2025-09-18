#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal.\n1. Iniciar Jogo.\n2. Ver Regras.\n3. Sair.\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um numero de 0 a 9:\n");
            scanf("%d", &palpite);
            if (palpite == numeroSecreto) {
                printf("Voce acertou!\n");
            } else {
                printf("Voce errou! O numero secreto era %d.\n", numeroSecreto);
            }
            break;
        case 2:
            printf("Mostrando Regras...\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao Invalida.\n");
    }

    return 0;

}