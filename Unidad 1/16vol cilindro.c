#include <stdio.h>
int main (){
    float h;
    float radio;
    float pi=3.1416;
    float volumen;
    float area;
   
    printf("%s\n", "Ingresa el valor de la altura: ");
    scanf("%f", &h);
    printf("%s\n", "Ingresa el radio de la circunferencia: ");
    scanf("%f", &radio);
   
    volumen = (pi*radio*radio*h);
    area = ((2*pi)*(radio*h)+(2*pi*radio*radio));
   
    printf("%s%.4f\n", "El volumen es: ", volumen);
    printf("%s%.4f\n", "El area es: ", area);
    
    return 0;
}        