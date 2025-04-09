#include <stdio.h>

// Definición de la estructura Dirección
struct Direccion {
    char calle[50];
    int numero;
};

// Definición de la estructura Persona
struct Persona {
    char nombre[50];
    struct Direccion domicilio;
};

int main() {
    int n;


    printf("Ingrese el numero de personas: ");
    scanf("%d", &n);
    getchar(); 
    struct Persona personas[n];

    for (int i = 0; i < n; i++) {
        printf("\nIngrese los datos de la persona %d:\n", i + 1);
        
        printf("Nombre: ");
        scanf(" %49[^\n]", personas[i].nombre);
        getchar(); 

        printf("Calle: ");
        scanf(" %49[^\n]", personas[i].domicilio.calle);
        getchar(); 

        printf("Numero: ");
        scanf("%d", &personas[i].domicilio.numero);
    }

    printf("\n%-20s | %-20s | %-10s\n", "Nombre", "Direccion", "Numero");
    printf("--------------------------------------------------------------\n");


    for (int i = 0; i < n; i++) {
        printf("%-20s | %-20s | %-10d\n", 
               personas[i].nombre, 
               personas[i].domicilio.calle, 
               personas[i].domicilio.numero);
    }

    return 0;
}