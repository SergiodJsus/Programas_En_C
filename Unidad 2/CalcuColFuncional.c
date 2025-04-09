#include <stdio.h>
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}
int main(){
    int num1, num2, opc;
    float res;

    printf("\033[2J"); 
    setColor("\033[7;32m");
    gotoxy(25, 5);
    printf("Calculadora Basica con gotoxy y switch-case");
    setColor("\033[0m");

    setColor("\033[4;37m");
    gotoxy(15, 7);
    printf("Menu de operaciones:");

    setColor("\033[7;31m");
    gotoxy(15, 9);
    printf("1.");
    setColor("\033[0m");
    printf("  Suma");

    setColor("\033[7;34m");
    gotoxy(15, 11);
    printf("2.");
    setColor("\033[0m");
    printf("  Resta");

    setColor("\033[7;35m");
    gotoxy(15, 13);
    printf("3.");
    setColor("\033[0m");
    printf("  Multiplicacion");

    setColor("\033[7;36m");
    gotoxy(15, 15);
    printf("4.");
    setColor("\033[0m");
    printf("  Division");

    gotoxy(15, 17);
    printf("SELECCIONE UNA OPCION (");
    setColor("\033[7;33m");
    printf("1-4");
    setColor("\033[0m");
    printf("): ");
    scanf("%d", &opc);
    printf("\033[2J");

    printf("Ingrese numero 1: ");
    scanf("%d", &num1);

    printf("Ingrese numero 2: ");
    scanf("%d", &num2);
    printf("\n");

    switch (opc) {
        case 1:
            res = num1 + num2;
            printf("\n El resultado es: %.2f", res);
            break;

        case 2:
            res = num1 - num2;
            printf("\n El resultado es: %.2f", res);
            break;

        case 3:
            res = num1 * num2;
            printf("\n El resultado es: %.2f", res);
            break;

        case 4:
        if (num2 != 0) {
            res = num1 / (float)num2;
            printf("\nEl resultado es:%.2f", res);
        } else {
            printf("\nNo se puede dividir entre cero");
        }
        break;

        default:
            printf("\nSelecciona una opcion correcta");
            break;
    }

    return 0;
}
