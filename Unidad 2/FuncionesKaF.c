#include <stdio.h>

float kaf(float kel) {
    return (kel - 273.15) * 9.0 / 5.0 + 32;
}

int main() {
    float kel, farh;

    printf("Ingresa la temperatura en grados Kelvin: ");
    scanf("%f", &kel);

    farh = kaf(kel);

    printf("%.2f F.\n", farh);

    return 0;
}
