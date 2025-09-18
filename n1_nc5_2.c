#include <stdio.h>

int main (){
    int idade = 34;
    float altura = 1.79;
    char opcao = 'G';
    char nome[20] = "Gabriel";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("Sua altura é: %.2f\n", altura);
    printf("Sua inicial é: %c\n", opcao);

    return 0;

}