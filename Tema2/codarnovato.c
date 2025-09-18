#include <stdio.h>

int main () {
    float temperatura, umidade;
    unsigned int estoque, estoqueMin = 1000;

    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade: \n");
    scanf("%f", &umidade);
    printf("Digite o estoque: \n");
    scanf("%u", &estoque);
    
    if (temperatura > 30) {
        printf("A temperatura esta alta\n");
    } else {
        printf("A temperatura esta ok\n");
    }
    
    if (umidade < 50) {
        printf("A umidade esta baixa\n");
    } else {
        printf("A umidade esta ok\n");
    }

    if (estoque < estoqueMin)
    {
        printf("Estoque abaixo do minimo\n");
    } else {
        printf("Estoque ok\n");
    }
    
    return 0;
    








}