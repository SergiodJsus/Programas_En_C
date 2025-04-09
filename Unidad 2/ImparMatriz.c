#include <stdio.h>

#define filas 6
#define columnas 6

int main() {

    int matriz [filas][columnas] = {
        {1,2,3,1,6,7},
        {4,5,6,6,3,8},
        {2,8,9,7,1,4},
        {4,2,8,7,5,3},
        {4,6,3,7,6,2},
        {5,6,9,3,1,4},
    };

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (j % 2 == 0) {
                printf("#\t");
            } else {
                printf("%d\t", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
