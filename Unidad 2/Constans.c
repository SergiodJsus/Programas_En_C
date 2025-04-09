#include <stdio.h>
int main(){
int a, b, c, d, e;

    printf("Ingrese el valor a: \n");
    scanf("%d", &a);
    printf("Ingrese el valor b: \n");
    scanf("%d", &b);
    printf("Ingrese el valor c: \n");
    scanf("%d", &c);
    printf("Ingrese el valor d: \n");
    scanf("%d", &d);
    printf("Ingrese el valor e: \n");
    scanf("%d", &e);

    int *const pa=&a;
    int *const pb=&b;
    int *const pc=&c;
    int *const pd=&d;
    int *const pe=&e;

    printf("Valores ingresado: A=%p\n", &pa);
    printf("Valores ingresado: B=%p\n", &pb);
    printf("Valores ingresado: C=%p\n", &pc);
    printf("Valores ingresado: D=%p\n", &pd);
    printf("Valores ingresado: E=%p\n", &pe);

    int suma = *pa + *pa;
    printf("Resultado de la suma: %d\n", suma);
    int res = *pb - *pb;
    printf("Resultado de la resta: %d\n", res);
    int mul = *pc * *pc;
    printf("Resultado de la multiplicacion: %d\n", mul);
    int div = *pd * *pd;
    printf("Resultado de la division: %d\n", div);

    *pa=suma;
    printf("Valor nuevo: A=%d\n", *pa);
    *pb=res;
    printf("Valor nuevo: B=%d\n", *pb);
    *pc=mul;
    printf("Valor nuevo: C=%d\n", *pc);
    *pd=div;
    printf("Valor nuevo: D=%d\n", *pd);

    return 0;
}
