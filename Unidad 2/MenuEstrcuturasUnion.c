#include <stdio.h>
#include <string.h>

#define filas 2
#define columnas 2

typedef struct {
    char nombre[50];
    char edad[10];
} Perro;

typedef struct {
    char nombregato[50];
    char color[50];
} Gato;

typedef union {
    Perro perro;
    Gato gato;
} Dato;

typedef struct {
    Dato valor;
    int tipo;
} Celda;

int main() {
    int opc;
    Celda matriz[filas][columnas];
    char nombre[50];
    char edad[10];
    char nombregato[50];
    char color[50];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Selecciona que quieres guardar?\n");
            printf("1: Perro\n");
            printf("2: Gato\n");
            scanf("%d", &opc);
            matriz[i][j].tipo = opc;

            switch (opc) {
                case 1:
                    printf("Ingrese el nombre del perro: ");
                    scanf("%s", nombre);
                    strcpy(matriz[i][j].valor.perro.nombre, nombre);

                    printf("Ingrese la edad del perro: ");
                    scanf("%s", edad);
                    strcpy(matriz[i][j].valor.perro.edad, edad);
                    break;

                case 2:
                    printf("Ingrese el nombre del gato: ");
                    scanf("%s", nombregato);
                    strcpy(matriz[i][j].valor.gato.nombregato, nombregato);

                    printf("Ingrese el color del gato: ");
                    scanf("%s", color);
                    strcpy(matriz[i][j].valor.gato.color, color);
                    break;
            }
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Celda [%d][%d]:\n", i, j);
            if (matriz[i][j].tipo == 1) {
                printf("  Tipo: Perro - Nombre: %s - Edad: %s\n\n",  matriz[i][j].valor.perro.nombre, matriz[i][j].valor.perro.edad);

            } else if (matriz[i][j].tipo == 2) {
                printf("Tipo: Gato - Nombre: %s - Color: %s\n\n", matriz[i][j].valor.gato.nombregato, matriz[i][j].valor.gato.color);

            }
        }
    }

    return 0;
}
