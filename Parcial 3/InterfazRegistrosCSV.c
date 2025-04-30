#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nombre[MAX];
    int edad;
    char pais[MAX];
} Persona;

void setColor(const char* color) {
    printf("%s", color);
}
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
void clearScreen() {
    printf("\033[2J");
}

int main() {
    FILE *file;
    Persona personas[MAX];
    int cantidad, i;
    char nombreArchivo[MAX];

    clearScreen();
    gotoxy(35, 10);          
    printf("Cuantas personas quieres registrar?: ");
    gotoxy(35, 12);
    setColor("\033[7;31m");
    scanf("%d", &cantidad);
    setColor("\033[0;37m");
    getchar();

    clearScreen();
    gotoxy(35, 10);
    printf("Ingresa el nombre del archivo:");
    gotoxy(35, 12);
    setColor("\033[7;36m");
    fgets(nombreArchivo, MAX, stdin);
    nombreArchivo[strcspn(nombreArchivo, "\n")] = 0;
    setColor("\033[0;37m");

    file = fopen(nombreArchivo, "w");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    for (i = 0; i < cantidad; i++) {
        clearScreen();
        gotoxy(2, 4);
        setColor("\033[7;32m");
        printf("\nPersona %d:\n", i + 1);
        setColor("\033[0;37m");
        printf("Nombre: ");
        setColor("\033[7;33m");
        fgets(personas[i].nombre, MAX, stdin);
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = 0;
        setColor("\033[0;37m");
        printf("Edad: ");
        setColor("\033[7;34m");
        scanf("%d", &personas[i].edad);
        getchar();
        setColor("\033[0;37m");
        printf("Pais: ");
        setColor("\033[7;36m");
        fgets(personas[i].pais, MAX, stdin);
        personas[i].pais[strcspn(personas[i].pais, "\n")] = 0;
        setColor("\033[0;37m");
    }


    clearScreen();
    printf("------------------------------------------------\n");
    printf("| #  | Nombre            | Edad | Pais           |\n");
    printf("------------------------------------------------\n");
    fprintf(file, "------------------------------------------------\n");
    fprintf(file, "| #  | Nombre            | Edad | Pais         |\n");
    fprintf(file, "------------------------------------------------\n");

    for (i = 0; i < cantidad; i++) {
        printf("| %-2d | %-17s | %-4d | %-14s |\n", i + 1, personas[i].nombre, personas[i].edad, personas[i].pais);
        fprintf(file, "| %-2d | %-17s | %-4d | %-14s |\n", i + 1, personas[i].nombre, personas[i].edad, personas[i].pais);
        printf("------------------------------------------------\n");
        fprintf(file, "------------------------------------------------\n");

    }



    fclose(file);

    setColor("\033[7;36m");
    printf("\nArchivo guardado exitosamente.\n");
    setColor("\033[0;37m");

    return 0;
}
