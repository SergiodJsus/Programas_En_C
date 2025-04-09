#include <stdio.h>

#define filas 3 
#define columnas 2

struct Diseno {
    char color[20];
    char material[20];
};

struct Telefono {
    char marca[20];
    char precio[20]; 
    struct Diseno diseno;
};

int main() {

    struct Telefono matriz[filas][columnas] = {
        {
            {"Apple", "12,000", {"Negro", "Aluminio"}},
            {"Samsung", "5,000", {"Blanco", "Cristal"}}
        },
        {
            {"Xiaomi", "7,000", {"Azul", "Plastico"}},
            {"Huawei", "9,000", {"Verde", "Aluminio"}}
        },
        {
            {"Nokia", "3,800", {"Gris", "Plástico"}},
            {"Motorola", "4,500", {"Rojo", "Metal"}}
        }
    };

    printf("\n");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("|%15s | %15s | %15s | %15s|\t", matriz[i][j].marca, matriz[i][j].precio, matriz[i][j].diseno.color, matriz[i][j].diseno.material);
        }
        printf("\n");
    }

    return 0;
}
