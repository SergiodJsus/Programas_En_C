#include <stdio.h>

int mayor_numero(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int a, b, c;
    
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);
    printf("Ingresa el tercer numero: ");
    scanf("%d", &c);
    
    printf("El numero mayor es: %d\n", mayor_numero(a, b, c));

    return 0;
}
