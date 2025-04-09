#include <stdio.h>

float cak(float cel) {
    return cel + 273.15;
}

int main() {
    float cel, kel;

    printf("Ingresa la temperatura en grados Celsius: ");
    scanf("%f", &cel);

    kel = cak(cel);

    printf("%.2f K.\n", kel);

    return 0;
}
