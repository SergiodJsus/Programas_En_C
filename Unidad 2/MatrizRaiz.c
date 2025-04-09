#include <stdio.h>
#include <stdbool.h>

bool raiz(int val) {
    bool flag = false;

    for (int i = 0; i <= 100; i++) {
        int valraiz = i * i;
        if (valraiz == val) {
            flag = true;
            break;
        }
    }
    return flag;
}

int obtenerRaiz(int val) {
    for (int i = 0; i <= 100; i++) {
        if (i * i == val) {
            return i;
        }
    }
}

void llenarMatriz(int raizNum, char matriz[raizNum][raizNum]) {
    for (int i = 0; i < raizNum; i++) {
        for (int j = 0; j < raizNum; j++) {
            printf("Caracter[%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int raizNum, char matriz[raizNum][raizNum]) {
    printf("\n\n");
    printf("|");
    for (int i = 0; i < raizNum; i++) {
        for (int j = 0; j < raizNum; j++) {
            printf("%5c|", matriz[i][j]);
        }

    }
    printf("\n");
}

int main() {
    int num;
    
    printf("Introduce un numero: ");
    scanf("%d", &num);

    if (!raiz(num)) {
        printf("El numero no tiene raiz.\n");
        return 0;
    }

    int raizNum = obtenerRaiz(num);

    char matriz[raizNum][raizNum];

    llenarMatriz(raizNum, matriz);

    imprimirMatriz(raizNum, matriz);

    return 0;
}
