#include <stdio.h>

typedef struct {
    int num;
    int den;
} Frac;

Frac sumar(Frac a, Frac b) {
    Frac r;
    r.num = a.num * b.den + b.num * a.den;
    r.den = a.den * b.den;
    return r;
}

Frac restar(Frac a, Frac b) {
    Frac r;
    r.num = a.num * b.den - b.num * a.den;
    r.den = a.den * b.den;
    return r;
}

Frac multiplicar(Frac a, Frac b) {
    Frac r;
    r.num = a.num * b.num;
    r.den = a.den * b.den;
    return r;
}

Frac cambiar_signo(Frac a) {
    a.num = -a.num;
    return a;
}

void llenar(Frac m[10][10], int n, char nombre) {
    printf("Ingresar valores para %c:\n", nombre);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            printf("Ingresa numerador %c[%d][%d]: ", nombre, i + 1, j + 1);
            scanf("%d", &m[i][j].num);
            printf("Ingresa denominador %c[%d][%d]: ", nombre, i + 1, j + 1);
            scanf("%d", &m[i][j].den);
        }
}

void imprimirMatriz(Frac m[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d/%d\t", m[i][j].num, m[i][j].den);
        }
        printf("\n");
    }
}

void sumarMatrices(Frac a[10][10], Frac b[10][10], Frac r[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            r[i][j] = sumar(a[i][j], b[i][j]);
}

void restarMatrices(Frac a[10][10], Frac b[10][10], Frac r[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            r[i][j] = restar(a[i][j], b[i][j]);
}

void multiplicarMatrices(Frac a[10][10], Frac b[10][10], Frac r[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            r[i][j].num = 0;
            r[i][j].den = 1;
            for (int k = 0; k < n; k++) {
                Frac mult = multiplicar(a[i][k], b[k][j]);
                r[i][j] = sumar(r[i][j], mult);
            }
        }
}

void obtenerSubmatriz(Frac origen[10][10], Frac destino[10][10], int n, int fila, int columna) {
    int r = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (i == fila) continue;
        c = 0;
        for (int j = 0; j < n; j++) {
            if (j == columna) continue;
            destino[r][c] = origen[i][j];
            c++;
        }
        r++;
    }
}

Frac determinante(Frac m[10][10], int n) {
    if (n == 1) return m[0][0];
    Frac det = {0, 1};
    for (int j = 0; j < n; j++) {
        Frac menor[10][10];
        obtenerSubmatriz(m, menor, n, 0, j);
        Frac subdet = determinante(menor, n - 1);
        Frac mult = multiplicar(m[0][j], subdet);
        if (j % 2 == 1) mult = cambiar_signo(mult);
        det = sumar(det, mult);
    }
    return det;
}

int main() {
    Frac A[10][10], B[10][10], R[10][10];
    int n;

    printf("Ingrese el tamanio: ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Tamanio invalido.\n");
        return 0;
    }

    llenar(A, n, 'A');
    llenar(B, n, 'B');

    printf("\nMatriz A:\n"); imprimirMatriz(A, n);
    printf("\nMatriz B:\n"); imprimirMatriz(B, n);

    printf("\nSuma A + B:\n");
    sumarMatrices(A, B, R, n);
    imprimirMatriz(R, n);

    printf("\nResta A - B:\n");
    restarMatrices(A, B, R, n);
    imprimirMatriz(R, n);

    printf("\nMultiplicacion A x B:\n");
    multiplicarMatrices(A, B, R, n);
    imprimirMatriz(R, n);

    printf("\nDeterminante de A:\n");
    Frac d = determinante(A, n);
    printf("Det A = %d/%d\n", d.num, d.den);

    return 0;
}
