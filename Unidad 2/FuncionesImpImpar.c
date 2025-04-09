#include <stdio.h>

void imprimirImpares(int inicio, int fin) {
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);  
        }
    }

}

int main() {
    int inicio, fin;
    

    printf("Ingresa el valor inicial del intervalo: ");
    scanf("%d", &inicio);
    
    printf("Ingresa el valor final del intervalo: ");
    scanf("%d", &fin);
    
    imprimirImpares(inicio, fin);
    
    return 0;
}
