#include <stdio.h> /*Incluir la libreria stdio.h*/

int main() /*Funcion principal del programa*/
{
    int fahre, cel; /* Declarar variables en formato int*/
    int low, upp, stp; /* Declarar variables en formato int*/

        low = 0; /* Asignar valores a una variable*/
        upp = 300;  /* Asignar valores a una variable*/
        stp = 20;  /* Asignar valores a una variable*/
        fahre = low;  /* Asignar valores a una variable*/

            while (fahre <= upp) {  /* Declarar un ciclo que se realiza mientraas fahre es menor o igual a upp*/
                cel = 5 * (fahre-32) / 9; /*Realizar la aperacion para cel*/
                printf("%d\t%d\n", fahre, cel); /* imprimir las variables fahre y cel con una tabulacion y un salto de linea*/
                fahre = fahre + stp; /*Sumar stp a fahre*/
                
            } /*fin del ciclo*/
 
    return 0; /* finalizar programa*/
}