#include <stdio.h>

struct Disenio {
    char color[50];
    char tamanio[50];
    char forma[50];
    char ergonomico[50];
    char peso[50];
    char textura[50];
};

struct Persona {
    char material[50];
    char dureza[50];
    char durabilidad[50];
    char olor[50];
    char funadicional[50];
    struct Disenio disenio;
};

int main() {
    int n;

    printf("Ingrese el numero de borradores: ");
    scanf("%d", &n);
    getchar(); 

    struct Persona borradores[n];

    for (int i = 0; i < n; i++) {
        printf("\nIngrese los datos del borrador %d:\n", i + 1);

        printf("Material: ");
        scanf(" %49[^\n]", borradores[i].material);
        getchar(); 

        printf("Dureza: ");
        scanf(" %49[^\n]", borradores[i].dureza);
        getchar(); 

        printf("Durabilidad: ");
        scanf(" %49[^\n]", borradores[i].durabilidad);
        getchar(); 

        printf("Olor: ");
        scanf(" %49[^\n]", borradores[i].olor);
        getchar(); 

        printf("Funcion Adicional: ");
        scanf(" %49[^\n]", borradores[i].funadicional);
        getchar(); 

        printf("Color: ");
        scanf(" %49[^\n]", borradores[i].disenio.color);
        getchar(); 

        printf("Tamanio: ");
        scanf(" %49[^\n]", borradores[i].disenio.tamanio);
        getchar(); 

        printf("Forma: ");
        scanf(" %49[^\n]", borradores[i].disenio.forma);
        getchar(); 

        printf("Ergonomico: ");
        scanf(" %49[^\n]", borradores[i].disenio.ergonomico);
        getchar(); 

        printf("Peso: ");
        scanf(" %49[^\n]", borradores[i].disenio.peso);
        getchar(); 

        printf("Textura: ");
        scanf(" %49[^\n]", borradores[i].disenio.textura);
        getchar(); 
    }

    printf("\n%-15s | %-10s | %-12s | %-10s | %-20s | %-10s | %-10s | %-10s | %-10s | %-10s | %-10s\n",
           "Material", "Dureza", "Durabilidad", "Olor", "Func. Adic.", "Color", "Tamanio", "Forma", "Ergonomico", "Peso", "Textura");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-15s | %-10s | %-12s | %-10s | %-20s | %-10s | %-10s | %-10s | %-10s | %-10s | %-10s\n",borradores[i].material, borradores[i].dureza, borradores[i].durabilidad, borradores[i].olor, borradores[i].funadicional, borradores[i].disenio.color, borradores[i].disenio.tamanio,borradores[i].disenio.forma, borradores[i].disenio.ergonomico, borradores[i].disenio.peso,borradores[i].disenio.textura);
    }

    return 0;
}
