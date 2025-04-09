#include <stdio.h>
int suma (int a, int b){
    return a+b;
}
int resta(int a, int b){
    int resultado=a-b;
    return resultado;
}
int multiplicar(int a){
    return a*a;
}
int dividir(int a, int b){
    return a/b;
}
void imprimir(int a,int b, int c, float d){
    printf("\nResultados:\nSuma: %d \nResta: %d\nMultiplicacion: %d\nDivision: %.2f", a, b ,c, d);
}
int main(){
    int op1=suma(3,2);
    int op2=resta(5,3);
    int op3=multiplicar(3);
    float op4=dividir(5,3);
    imprimir(op1,op2,op3,op4);
}
