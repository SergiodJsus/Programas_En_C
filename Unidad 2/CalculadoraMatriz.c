#include <stdio.h>

#define FILAS 3
#define COLUMNAS 6

int main() {
    float matriz[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++) {
        printf("Dame el valor de num1: ");
        scanf("%f", &matriz[i][0]);

        printf("Dame el valor de num2: ");
        scanf("%f", &matriz[i][1]);

        matriz[i][2] = matriz[i][0] + matriz[i][1];
        matriz[i][3] = matriz[i][0] - matriz[i][1];
        matriz[i][4] = matriz[i][0] * matriz[i][1];
        matriz[i][5] = matriz[i][0] / matriz[i][1];
        printf("\n");
    }

    printf("\n|%15s\t|%15s\t|%15s\t|%15s\t|%15s\t|%15s\t|\n", 
        "num1", "num2", "suma", "resta", "multiplicacion", "division");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("|%15.2f\t", matriz[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
