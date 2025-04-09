#include <stdio.h>

void llenar(int matriz[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("valor[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir(int matriz[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }
}

void producto(int matriz[3][3], int escalar, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", matriz[i][j] * escalar);
        }
        printf("\n");
    }
}

int determinante(int matriz[3][3]) {
    int det = 0;
    for (int i = 0; i < 3; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;
        det =det+ sign * matriz[0][i] * matriz[1][(i + 1) % 3] * matriz[2][(i + 2) % 3];
    }

    return det;
}

int main() {
    int matriz[3][3], escalar, n;

    printf("Ingrese el tamanio de la matriz: ");
    scanf("%d", &n);

    if (n != 3) {
        printf("El tamanio de la matriz debe ser 3x3.\n");
        return 0;
    } else {
        printf("Ingrese los valores:\n");
        llenar(matriz, n);

        printf("Ingrese el escalar: ");
        scanf("%d", &escalar);

        printf("Matriz ingresada:\n");
        imprimir(matriz, n);

        printf("Matriz multiplicada por %d:\n", escalar);
        producto(matriz, escalar, n);

        printf("Determinante: %d\n", determinante(matriz));

        return 0;
    }
}
