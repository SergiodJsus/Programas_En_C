#include <stdio.h>

void llenar(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Ingresa el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multi(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]) {
    int temp[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = 0;
            for (int k = 0; k < n; k++) {
                temp[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = temp[i][j];
        }
    }
}

void elevar(int n, int matriz[n][n], int exponente, int resultado[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = (i == j) ? 1 : 0;
        }
    }

    int temp[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = matriz[i][j];
        }
    }

    for (int p = 0; p < exponente; p++) {
        multi(n, resultado, temp, resultado);
    }
}

int main() {
    int n, exponente;

    printf("Ingresa el orden de la matriz: ");
    scanf("%d", &n);

    int matriz[n][n], resultado[n][n];

    printf("\nIngrese los elementos de la matriz:\n");
    llenar(n, matriz);

    printf("\nIngrese el exponente: ");
    scanf("%d", &exponente);

   elevar(n, matriz, exponente, resultado);

    printf("\nMatriz original:\n");
    imprimir(n, matriz);

    printf("\nResultado de elevar la matriz al exponente %d:\n", exponente);
    imprimir(n, resultado);

    return 0;
}