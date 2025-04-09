#include <stdio.h>

float fac(float farh) {
    return (farh - 32) * 5.0 / 9.0;
}

int main() {
    float farh, cel;

    printf("Ingresa la temperatura en F: ");
    scanf("%f", &farh);

    cel = fac(farh);

    printf("%.2f C.\n", cel);

    return 0;
}
