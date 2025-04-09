#include <stdio.h>

int i, j, filas, columnas;

void pedir_tamano(void) {
    printf("Tamanio en filas: ");
    scanf("%d", &filas);
    printf("Tamanio en columnas: ");
    scanf("%d", &columnas);
}

void llenar(int A[filas][columnas]){
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            printf("Dame valor [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

void imprimir(int A[filas][columnas]){
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }
}

void transponer(int A[filas][columnas], int At[columnas][filas]){
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            At[j][i] = A[i][j];
        }
    }
}

void imprimirmattrans(int At[columnas][filas]){
    for(i = 0; i < columnas; i++){
        for(j = 0; j < filas; j++){
            printf("%5d", At[i][j]);
        }
        printf("\n");
    }
}

int main(){
    pedir_tamano();
    int A[filas][columnas], At[columnas][filas];
    llenar(A);  
    printf("Matriz ingresada:\n");
    imprimir(A);
    transponer(A, At);
    printf("La traspuesta es: \n"); 
    imprimirmattrans(At);
    return 0;
}
