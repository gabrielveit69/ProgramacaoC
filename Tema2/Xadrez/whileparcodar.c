#include <stdio.h>

int main () {

    int i = 0;

    while (i <= 10000) {
        if (i % 2 == 0) 
        {
            printf("O numero %d é par.\n", i);
        }
        i++;
    }


    return 0;

}