#include <stdio.h>

int main() {
    int nota;
    printf("Digite a nota do aluno (0-100): ");
    scanf("%d", &nota);
    
    if (nota >= 90) {
        printf("A\n");
    } else if (nota >= 80) {
        printf("B\n");
    } else if (nota >= 70) {
        printf("C\n");
    } else if (nota >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }


}