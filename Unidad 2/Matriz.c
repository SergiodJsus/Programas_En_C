#include <stdio.h>

#define filas 3
#define columnas 3

int main() {

    int matriz [filas][columnas] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    printf("Recorriendo la matriz;\n");
    for (int i = 0; i < filas; i++) {
        for (int j=0;j<columnas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}