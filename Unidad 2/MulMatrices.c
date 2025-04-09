#include <stdio.h>



int main() {
    int n;
    int i, j, k;

    printf("Tamanio de la matriz: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], R[n][n];

    void llenar(int matriz[n][n], int n, char nombre) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("Dame valor de la matriz %c [%d][%d]: ", nombre, i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    void imprimir(int matriz[n][n], int n, char nombre) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%5d  ", matriz[i][j]);
            }
            printf("\n");
        }
    }

    void multiplicar(int A[n][n], int B[n][n], int R[n][n], int n) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                R[i][j] = 0;
                for (k = 0; k < n; k++) {
                    R[i][j] =R[i][j]+ A[i][k] * B[k][j];
                }
            }
        }
    }

    llenar(A, n, '1');
    llenar(B, n, '2');

    multiplicar(A, B, R, n);
    printf("Matriz 1\n");
    imprimir(A, n, '1');
    printf("\n");
    printf("Matriz 2\n");
    imprimir(B, n, '2');
    printf("\n");
    printf("Resultado\n");
    imprimir(R, n, 'R');

    return 0;
}
