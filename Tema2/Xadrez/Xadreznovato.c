#include <stdio.h>

int main () {

        int rainha = 1, bispo = 1;

        printf("Vamos simular movimentos num tabuleiro de xadrez!\n\n");
        printf("A primeira será a torre, ela irá se movimentar cinco casas para a direita.\n");

        for (int i = 1; i <= 5; i++) 
        {
            printf("Movimento %d: Torre se moveu uma casa para a direita.\n", i);
        }

        printf("\n");

        printf("Agora iremos movimentar nossa Rainha oito casas para a esquerda.\n");
        do {
            printf("Movimento %d: Rainha se moveu uma casa para a esquerda.\n", rainha); 
            rainha++;
            
         } while (rainha <= 8); 

        printf("\n");

         printf("Agora iremos movimentar nosso Bispo 5 casas para cima e para a direita.\n");

         while (bispo <= 5) 
         {
            printf("Movimento %d: Bispo se moveu uma casa para cima e para a direita.\n", bispo);
            bispo++;
         }
        
    return 0;
}