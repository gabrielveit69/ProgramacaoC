#include <stdio.h>

int main() {
    int idade = 31;
    float altura = 1.75;

    if (idade >= 18 && idade <= 30 && altura >= 1.70) {
        printf("Apto para o cargo.\n");
    } else {
        printf("Nao apto para o cargo.\n");
    }

    return 0;
}