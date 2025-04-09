#include <stdio.h>

#define filas 3
#define columnas 3

int main() {

    char matriz[filas][columnas][50];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Dame una palabra : ");
            scanf("%s", matriz[i][j]);
        }
    }

    printf("\n\n");
    for (int i = 0; i < filas; i++) {
        printf("|");
        for (int j = 0; j < columnas; j++) {
            printf("\t%20s|", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
