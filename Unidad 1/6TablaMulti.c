#include <stdio.h>
int main(){

    int tabla = 1;

    while (tabla<= 10){
        int numero = 0;
        while (numero <= 0) {
        int mult = tabla * numero;
        printf("%s %d %s %d %s %d\n", "(", tabla, ")(", numero, ")=", mult);
        numero++;
        }
        tabla++;
    }
    return 0;


}