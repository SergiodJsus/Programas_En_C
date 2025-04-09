#include <stdio.h>
typedef struct {
    int numerador;
    int denominador;
} Fraccion;

void llenar(int tam, Fraccion matriz[tam][tam]) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Ingrese el numerador[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j].numerador);
            printf("Ingrese el denominador[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j].denominador);
            
        }}}

void imprimir(int tam, Fraccion matriz[tam][tam]) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%d/%d\t", matriz[i][j].numerador, matriz[i][j].denominador);
        }
        printf("\n");
    }
}

void mult(int tam, Fraccion A[tam][tam], Fraccion B[tam][tam], Fraccion resultado[tam][tam]) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            resultado[i][j].numerador = A[i][j].numerador * B[i][j].numerador;
            resultado[i][j].denominador = A[i][j].denominador * B[i][j].denominador;
        }
    }
}

int main() {
    int tam;
    printf("Ingrese el tamamio: ");
    scanf("%d", &tam);
    
    Fraccion matrizA[tam][tam];
    Fraccion matrizB[tam][tam];
    Fraccion resultado[tam][tam];
    
    printf("\nMatrizA:\n");
    llenar(tam, matrizA);
    
    printf("\nMatrizB\n");
    llenar(tam, matrizB);
    
    printf("\nMatriz A:\n");
    imprimir(tam, matrizA);
    
    printf("\nMatriz B:\n");
    imprimir(tam, matrizB);
    
    mult(tam, matrizA, matrizB, resultado);
    
    printf("\nResultado:\n");
    imprimir(tam, resultado);
    
    return 0;
}