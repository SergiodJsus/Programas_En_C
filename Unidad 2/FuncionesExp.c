#include <stdio.h>

int potencia(int base, int exponente){
    int resultado = 1;

    for (int i = 1; i <= exponente; i++) {
        resultado = resultado * base;
    }
    return resultado;
}

int main(){
    int base, exponente, resultado;

    printf("Introduce la base: ");
    scanf("%d", &base);

    printf("Introduce el exponente: ");
    scanf("%d", &exponente);

    resultado = potencia(base, exponente);

    printf("El resultado es: %d\n", resultado);
}
