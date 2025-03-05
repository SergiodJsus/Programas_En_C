#include <stdio.h>
int main (){
    float radio;
    float volumen;
    float pi=3.1416;
    float area;

    printf("%s\n", "Introduce el valor del radio");
    scanf("%f", &radio);
    
    volumen = (4*pi*radio*radio*radio)/3;
    area = (4*pi*radio*radio);
    
    printf("%s%.4f\n", "El volumen es: ", volumen);
    printf("%s%.4f\n", "El area es: ",area);

    return 0;
}