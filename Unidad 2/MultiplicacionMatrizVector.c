#include <stdio.h>

void multiplicarMatrizVector(int filas, int columnas, int matriz[filas][columnas], int vector[columnas], int resultado[filas]) {
    for (int i = 0; i < filas; i++) {
        resultado[i] = 0;
        for (int j = 0; j < columnas; j++) {
            resultado[i] = resultado[i] + matriz[i][j] * vector[j];
        }
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el tamanio de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el tamanio columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int vector[columnas];
    int resultado[filas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Valor [%d][%d]: ", i , j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < columnas; i++) {
        printf("Valor[%d]: ", i);
        scanf("%d", &vector[i]);
    }

    multiplicarMatrizVector(filas, columnas, matriz, vector, resultado);

    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Vector ingresado:\n");
    for (int i = 0; i < columnas; i++) {
        printf("%5d ", vector[i]);
        printf("\n");
    }
    printf("\n");

    printf("\nEl resultado es:\n");
    for (int i = 0; i < filas; i++) {
        printf("%5d\n", resultado[i]);
    }

    return 0;
}
