#include <stdio.h>


int mayor_numero(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);
    
    printf("El numero mayor es: %d\n", mayor_numero(a, b));

}
