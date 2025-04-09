#include <stdio.h>

struct tabla {
    int valor1;
    int valor2;
    int resultado;

};

int main(){
    struct tabla arreglo[3]={
        {1, 3, 0},
        {2, 3, 0},
        {3, 3, 0},
    };

    for(int i=0; i<3; i++){
        int resultado = arreglo[i].valor1*arreglo[i].valor2;
        arreglo[i].resultado=resultado;
    }

    for (int j=0; j<3;j++){
        printf("%d x %d = %d\n", arreglo[j].valor1,arreglo[j].valor2,arreglo[j].resultado);
    }
    return 0;

}