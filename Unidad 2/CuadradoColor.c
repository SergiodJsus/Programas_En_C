#include <stdio.h>

#define TOTAL 1000

const char* colores[TOTAL];

void Colores() {
    const char* base[8] = {
        "\033[7;30m", "\033[7;31m", "\033[7;32m", "\033[7;33m",
        "\033[7;34m", "\033[7;35m", "\033[7;36m", "\033[7;37m"
    };

    for (int i = 0; i < TOTAL; i++) {
        colores[i] = base[i % 8];
    }
}


void setColor(const char* color) {
    printf("%s", color);
}



int main() {
    int n;
    printf("\033[2J");
    printf("Introduce el tamanio del cuadrado: ");
    scanf("%d", &n);

    Colores();



    int cont = 0;



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            setColor(colores[cont % TOTAL]); 
            printf("   ");
            cont++;
        }
        printf("\033[0m\n");
    }

    return 0;
}
