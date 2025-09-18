#include <stdio.h>

int main () {

    int i;

    do {
        printf("Digite um numero par para sair do programa:");
        scanf("%d", &i);
        if (i % 2 == 0)
        {
            printf("%d é par\n", i);
        } else {
            printf("%d é impar\n", i);
        }
        
    } while (i % 2 != 0);

    printf("Voce digitou um numero par, o programa sera encerrado.\n");



    return 0;
}