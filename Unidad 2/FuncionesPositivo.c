#include <stdio.h>

void signo(int num) {
    if (num > 0) {
        printf("El numero es positivo");
    } else if (num < 0) {
        printf("El numero es negativo");
    } else {
        printf("El numero es cero");
    }
}

int main() {
    int num;
    printf("Ingresa el numero: ");
    scanf("%d", &num); 
    signo(num); 
    return 0;
}
