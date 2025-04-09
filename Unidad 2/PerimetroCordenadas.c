#include <stdio.h>//Incluimos la libreria para imprimir y leer
#include <math.h>//Libreria necesaria para realizar operaciones matematicas


struct Rectangulo {//declaramos a esctructura de el rectangulo
    float x1, y1, x2, y2, x3, y3, x4, y4; //Declaramos todas nuestras variables
    float per1, per2, per3, per4, perimetro, area;// declaramos todos nuestros resultados
};

struct Triangulo {//Delacramos la estructura del triangulo
    float x1, y1, x2, y2, x3, y3;//Delcaramos variables
    float per1, per2, per3, perimetro, area;//Declaramos resultados
};




int main() { //funcion principal del programa   
    int opcion;//declaramos la variable del switch  
    printf("1. Rectangulo\n");//imprimimos nuestras opciones
    printf("2. Triangulo\n");//Imprimimos las opciones
    printf("Seleccione la figura para calcular el perimetro:\n");//Hacemos que elija una opcion
    scanf("%d", &opcion);//Guardamos la eleccion

    switch (opcion) {//Abrimos un switch dependiendo la variable opcion
        case 1: { //Si elije el 1
            struct Rectangulo rect; //Comenzamos con el arreglo 
            printf("Ingrese las cordenadas del rectangulo: \n");//Pedimos que ingrese sus datos
            printf("x1: ");//Pedimos x1
            scanf("%f", &rect.x1);//leemos x1
            printf("y1: ");//pedimos y1
            scanf("%f", &rect.y1);//leemos y1
            printf("x2: ");//pedimos x2
            scanf("%f", &rect.x2);//leemos x2
            printf("y2: ");//pedimos y2
            scanf("%f", &rect.y2);//leemos y2
            printf("x3: ");//pedimos x3
            scanf("%f", &rect.x3);//leemos x3
            printf("y3: ");//pedimos y3
            scanf("%f", &rect.y3);//leemos y3
            printf("x4: ");//pedimos x4
            scanf("%f", &rect.x4);//leemos x4
            printf("y4: ");//pedimos y4
            scanf("%f", &rect.y4);//leemos y4
            rect.per1 = sqrt((rect.x2-rect.x1)*(rect.x2-rect.x1)+(rect.y2-rect.y1)*(rect.y2-rect.y1));//calculamos el lado 1
            rect.per2 = sqrt((rect.x3-rect.x2)*(rect.x3-rect.x2)+(rect.y3-rect.y2)*(rect.y3-rect.y2));//calculamos el lado 2
            rect.per3 = sqrt((rect.x4-rect.x3)*(rect.x4-rect.x3)+(rect.y4-rect.y3)*(rect.y4-rect.y3));//calculamos el lado 3
            rect.per4 = sqrt((rect.x1-rect.x4)*(rect.x1-rect.x4)+(rect.y1-rect.y4)*(rect.y1-rect.y4));//calculamos el lado 4
            rect.perimetro = (rect.per1 + rect.per2 + rect.per3 + rect.per4);//Calculamos el perimetro total
            rect.area = rect.per1 * rect.per2;//Calculamos area
            printf("Perimetro del rectangulo: %.2f\n", rect.perimetro);//Imprimimos el resultado
            printf("Area del rectangulo: %.2f\n", rect.area);

            break;
        }
        case 2: {
            struct Triangulo tri;//Declaramos nuestra estructura para el triangulo
            printf("Ingrese las coordenadas de los tres vartices del triangulo: \n");//Pedimos las cordenadas del triangulo
            printf("x1: ");//Pedimos x1
            scanf("%f", &tri.x1);//Leemos x1
            printf("y1: ");//Pedimos y1
            scanf("%f", &tri.y1);//leemos y1
            printf("x2: ");//Pedimos x2
            scanf("%f", &tri.x2);//Leemos x2
            printf("y2: ");//Pedimos y2
            scanf("%f", &tri.y2);//Leemos y2
            printf("x3: ");//Pedimos x3
            scanf("%f", &tri.x3);//leemos x3
            printf("y3: ");//Pedimos y3
            scanf("%f", &tri.y3);//Pedimos y3
            
            tri.per1 = sqrt((tri.x2-tri.x1)*(tri.x2-tri.x1)+(tri.y2-tri.y1)*(tri.y2-tri.y1));//calculamos el lado 1 del triangulo
            tri.per2 = sqrt((tri.x3-tri.x2)*(tri.x3-tri.x2)+(tri.y3-tri.y2)*(tri.y3-tri.y2));//Calculamos el lado 2 del triangulo
            tri.per3 = sqrt((tri.x1-tri.x3)*(tri.x1-tri.x3)+(tri.y1-tri.y3)*(tri.y1-tri.y3));//Calculamos el lado 3 del triangulo
            tri.perimetro = (tri.per1 + tri.per2 + tri.per3);//Calculamos el perimetro total
            tri.area = ((tri.x1*(tri.y2-tri.y3))+(tri.x2*(tri.y3-tri.y1))+(tri.x3*(tri.y1-tri.y2)))/2;//Calculamos el area
            if (tri.area<0){//En caso que el area sea negativa
                tri.area = tri.area * (-1);//Lo volvemos positivo
                printf("El perimetro del triangulo: %.2f\n", tri.perimetro);//Imprimimos el resultado del perimetro
                printf("El area del triangulo es: %.2f\n", tri.area );//Imprimimos el area
            }
            else { //Si no es negativo
            printf("El perimetro del triangulo: %.2f\n", tri.perimetro);//Imprimimos el resultado del perimetro
            printf("El area del triangulo es: %.2f\n", tri.area );//Imprimimos el area

            }

            break;
        }
        default://Si no elige nada
            printf("Opción no válida\n");//Imprimimos en caso que elija algo invalido
    }
    
    return 0;//fin del programa
}
