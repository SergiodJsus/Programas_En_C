#include <stdio.h>

struct Vehiculo {
    char num_llantas[10];  
    char color[20];  
    char hp[10];
};

struct Camion {
    char num_asientos[10];
    char num_puertas[10];
};

struct Motocicleta {
    char cilindrada[10];
    char tipo[20];
};

union TipoVehiculo {
    struct Camion camion;
    struct Motocicleta moto;
};

struct VehiculoCompleto {
    struct Vehiculo datos_generales;
    int tipo;
    union TipoVehiculo especifico;
};

int main() {
    struct VehiculoCompleto vehiculo;

    printf("Ingrese la cantidad de llantas: ");
    scanf("%s", vehiculo.datos_generales.num_llantas);
    
    printf("Ingrese el color del vehiculo: ");
    scanf("%s", vehiculo.datos_generales.color);

    printf("Ingrese la cantidad de caballos de fuerza: ");
    scanf("%d", vehiculo.datos_generales.hp);

    printf("Que tipo de veiculo es?\n");
    printf("1:Camion\n");
    printf("2:Motocicleta\n");
    scanf("%d", &vehiculo.tipo);

    switch (vehiculo.tipo){
        case 1:
            printf("Ingrese la cantidad de asientos del camion: ");
            scanf("%s", vehiculo.especifico.camion.num_asientos);

            printf("Ingrese la cantidad de puertas del camion: ");
            scanf("%s", vehiculo.especifico.camion.num_puertas);
            break;
        
        case 2:
            printf("Ingrese la cilindrada de la motocicleta: ");
            scanf("%s", vehiculo.especifico.moto.cilindrada);

            printf("Ingrese el tipo de motocicleta: ");
            scanf("%s", vehiculo.especifico.moto.tipo);
            break;
        
        default:
            printf("Tipo de vehiculo no valido.\n");
    }

    printf("\n\n");
    printf("Cantidad de llantas: %s\n", vehiculo.datos_generales.num_llantas);
    printf("Color: %s\n", vehiculo.datos_generales.color);
    printf("Caballos de fuerza: %s hp\n", vehiculo.datos_generales.hp);

    switch (vehiculo.tipo) {
        case 1:
            printf("Tipo: Camion\n");
            printf("Cantidad de asientos: %s\n", vehiculo.especifico.camion.num_asientos);
            printf("Cantidad de puertas: %s\n", vehiculo.especifico.camion.num_puertas);
            break;
        
        case 2:
            printf("Tipo: Motocicleta\n");
            printf("Cilindrada: %s cc\n", vehiculo.especifico.moto.cilindrada);
            printf("Tipo de motocicleta: %s\n", vehiculo.especifico.moto.tipo);
            break;
    }

    return 0;
}
