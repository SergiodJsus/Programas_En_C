#include <stdio.h> //incluir libreria para leer y imprimir datos
#include <math.h> //libreria para hacer calculos como raiz cuadrada
#include <string.h> //libreria de concatenacion

struct EcCuadratica { //definir la estructura de la ecuacion
    int a;//declarar a
    int b;//declarar b
    int c;//declarar c
    int discriminante; //declarar la variable del descriminante
    float x1; //declarar la variable de x1
    float x2; //declarar la variable de x2
    char solucion[30]; //declarar la variable de la solucion
};

int main() {//funcion principal
    int n; //declaramos la variable donde vamos a almacenar la cantidad de arreglos
    printf("Ingrese el numero de ecuaciones a resolver: "); //pedimos el numero
    scanf("%d", &n);//lo guardamos en la variable

    struct EcCuadratica arreglo[n]; //declaramos la estructura con el arreglo

    for (int i = 0; i < n; i++) { //declaramos un for para que pida los datos conforme a la cantidad de arreglos    
        printf("Ingrese los valores para la ecuacion %d:\n", i + 1);//Indicamos la ecuacion a la cual le vamos a ingresar valores
        printf("a: ");// pedimos a
        scanf("%d", &arreglo[i].a);// leemos a
        printf("b: ");//pedimos b
        scanf("%d", &arreglo[i].b);//leemos b
        printf("c: ");//pedimos c
        scanf("%d", &arreglo[i].c); //leemos c
    }//terminar el ciclo for

    for (int i = 0; i < n; i++) { //iniciamos otro ciclo ahora para cacular las soluciones de las ecuaciones introducidas
        int d = (arreglo[i].b * arreglo[i].b) - (4 * arreglo[i].a * arreglo[i].c); //declaramos y calculamos el discriminante
        arreglo[i].discriminante = d; //igualamos el valor de nuestro arreglo a el valor de la discriminante
        if (d < 0) { //Creamos un if para verificar si tiene solucion
            strcpy(arreglo[i].solucion, "NO TIENE SOLUCION");//Si es menor a cero no tiene solucion por ende no se puede resolver
            arreglo[i].x1 = 0;//No hay solucion
            arreglo[i].x2 = 0;//No hay solucion
        } else {//Si no es menor a cero
            float valx1 = ((-1) * arreglo[i].b + sqrt(d)) / (2 * arreglo[i].a);//calculamos x1
            float valx2 = ((-1) * arreglo[i].b - sqrt(d)) / (2 * arreglo[i].a);//calculamos x2

            strcpy(arreglo[i].solucion, "TIENE SOLUCION");//Indicamos que si tiene solucion
            arreglo[i].x1 = valx1;//Igualamos nuestros resultados a las variables de nuestro arreglo
            arreglo[i].x2 = valx2;//Igualamos nuestros resultados a las variables de nuestro arreglo
        }
    }
    
    printf("\n%s\t|%s\t|%s\t|%s\t\t|%s\t|%s\n", "a", "b", "c", "x1", "x2", "Solucion");//imprimimos las caracteristicas de nuestra especie de tabla
    for (int i = 0; i < n; i++) {//creamos un for para imprimir los resultados de nuestras ecuaciones
        printf("%d\t|%d\t|%d\t|%.2f\t\t|%.2f\t|%s\n",arreglo[i].a, arreglo[i].b, arreglo[i].c, arreglo[i].x1, arreglo[i].x2, arreglo[i].solucion); //Damos formatos y relacionamos los valores con las variables
    }

    return 0;//fin del programa
}