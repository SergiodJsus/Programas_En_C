#include <stdio.h>

void tabla(int num, int resul) {
    int resul;
    for (int i = 1; i <= 10; i++) {
        resul=num * i;
        printf("%d x %d = %d\n", num, i, resul);
    }
}

int main() {
    int num;
    printf("Ingresa el numero: ");
    scanf("%d", &num); 
    tabla(num);
    return 0;
}
