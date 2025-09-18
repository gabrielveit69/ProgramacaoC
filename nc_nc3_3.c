#include <stdio.h>

int main () {

    /*
        Incremento ++
     Pré Incremento a++
     Pós Increment ++a
     Decremento --
     Pré Decremento a--
     Pós Decremento --a
     */

    int numero1 = 1, resultado;
    
   
   
    resultado = numero1++;

    printf("Antes do incremento: %d\n", numero1);
    //numero1++;
    //printf("Depois do incremento: %d\n", numero1);

    //numero1--;
    //printf("Depois do decremento: %d\n", numero1);

    printf("Após pós-incremento - numero 1 %d - resultado %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após pré-incremento - numero 1 %d - resultado %d\n", numero1, resultado);

    resultado = numero1--;
    printf("Após pós-decremento - numero 1 %d - resultado %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após pré-decremento - numero 1 %d - resultado %d\n", numero1, resultado);



}