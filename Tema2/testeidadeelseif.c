#include <stdio.h>

int main () {

    int idade = 12;
    
    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade < 60 && idade >= 18) {
        printf("Adulto\n");
    } else if (idade < 18 && idade > 12) {
        printf("Adolescente\n");
    } else {
        printf("Criança\n");
    }
    return 0;
}