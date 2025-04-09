#include <stdio.h>

int suma_num(int a, int b) {
    int suma=0;

    for (int i = a; i <= b; i++) {
        suma=suma + i;
    }
    return suma;
}

int main() {
    int num1, num2;
    
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);
    
    printf("La suma es: %d\n",suma_num(num1, num2));
    
    return 0;
}