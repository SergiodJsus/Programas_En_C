#include <stdio.h>

struct Persona {
    char nombre[50]; 
    int edad;
    char correo[50];
    char telefono[10];
    char nac[4];  
    char genero[20];
    char direc[100]; 
    char enf[50];  
};


int main() {
    int size;
    
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &size);

    struct Persona persona[size]; 


    for (int i = 0; i < size; i++) {
        printf("\nIngrese los datos de la persona %d\n", i + 1);

        printf("Ingrese su nombre: \n");
        scanf(" %s",persona[i].nombre); 

        printf("Ingrese su edad: \n");
         scanf("%d",&persona[i].edad);

        printf("Ingrese su correo: \n");
        scanf(" %s",persona[i].correo);

         printf("Ingrese su telefono: \n");
        scanf("%s",persona[i].telefono);

        printf("Ingrese su año de nacimiento: \n");
        scanf("%s",persona[i].nac);
        printf("Ingrese su genero: \n");
        scanf("%s",persona[i].genero);
        printf("Ingrese su direccion: \n");
        scanf("%s",persona[i].direc);

        printf("Ingrese si padece una enfermedad: \n");
        scanf(" %s",persona[i].enf);
    }


    for (int i = 0; i < size; i++) {
        printf("\nPersona %d: ", i + 1);
        printf("Nombre: %s\n",persona[i].nombre);
        printf("Edad: %d\n",persona[i].edad);
        printf("Correo: %s\n", persona[i].correo);
        printf("Telefono: %s\n",persona[i].telefono);
        printf("Año de nacimiento: %s\n",persona[i].nac);
        printf("Genero: %s\n",persona[i].genero);
        printf("Direccion: %s\n",persona[i].direc);
        printf("Enfermedad: %s\n",persona[i].enf);
    }

    return 0;
}