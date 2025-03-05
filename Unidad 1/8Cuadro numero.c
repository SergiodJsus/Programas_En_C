
#include <stdio.h>
int main() { 
    printf("\n%s\n", "ejemplo de impresiom");

int limy = 10;
    while (limy >= 0) {
        int limx = 10;
        while (limx >= 0) {
            printf("%4d", limx);
            limx--;

        }
        printf("\n");
        limy--;
    }

    printf("\n%s\n","ejemplo de impresion");

    int limitesy = 0;
    while (limy <= 10) {
        int limx = 0;
        while (limx <= 10) {
            printf("%4d", limx);
            limx++;

        }
        printf("\n");
        limy++;
    }

    printf("\n%s\n","ejemplo de impresion");




    return 0;
}