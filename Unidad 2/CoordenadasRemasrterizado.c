#include <stdio.h>
#include <math.h>

struct Coordenadas {
    int x;
    int y;
};

int main() {
    int opc;
    printf("Seleccione opción:\n");
    printf("1. Cuadrado\n");
    printf("2. Triángulo\n");
    scanf("%d", &opc);

    switch(opc) {
        case 1: { // Cuadrado
            struct Coordenadas arreglo[4];

            // Ingresar las coordenadas
            for (int i = 0; i < 4; i++) {
                printf("Ingrese coordenada x%d: ", i + 1);
                scanf("%d", &arreglo[i].x);
                printf("Ingrese coordenada y%d: ", i + 1);
                scanf("%d", &arreglo[i].y);
            }

            // Calcular las distancias entre los puntos
            float ab = sqrt(pow(arreglo[1].x - arreglo[0].x, 2) + pow(arreglo[1].y - arreglo[0].y, 2));
            float bc = sqrt(pow(arreglo[2].x - arreglo[1].x, 2) + pow(arreglo[2].y - arreglo[1].y, 2));
            float cd = sqrt(pow(arreglo[3].x - arreglo[2].x, 2) + pow(arreglo[3].y - arreglo[2].y, 2));
            float ad = sqrt(pow(arreglo[0].x - arreglo[3].x, 2) + pow(arreglo[0].y - arreglo[3].y, 2));

            float perimetro = ab + bc + cd + ad;
            float area = ab * bc; // Si el cuadrado está alineado con los ejes, esto funcionará.

            printf("Perímetro total: %.2f\n", perimetro);
            printf("Área: %.2f\n", area);
            break;
        }

        case 2:
            printf("Función para triángulo no implementada aún.\n");
            break;

        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
