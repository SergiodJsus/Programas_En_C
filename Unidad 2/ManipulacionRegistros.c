#include <stdio.h>

int main (){
int a, b, c, d, e;

printf("Ingrese valor A\n");
scanf("%d",&a);
printf("Ingrese valor B\n");
scanf("%d",&b);
printf("Ingrese valor C \n");
scanf("%d",&c);
printf("Ingrese valor D \n");
scanf("%d",&d);
printf("Ingrese valor E\n");
scanf("%d",&e);

int *const pa= &a;
int *const pb= &b;
int *const pc= &c;
int *const pd= &d;
int *const pe= &e;

printf("Valores ingresados: A=%p\n", &pa);
printf("Valores ingresados: B=%p\n", &pb);
printf("Valores ingresados: C=%p\n", &pc);
printf("Valores ingresados: D=%p\n", &pd);
printf("Valores ingresados: E=%p\n", &pe);

int suma= *pa + *pa;
printf("Resultado de la suma: %d\n", suma);

*pa=suma;
printf("Valor nuevo: A=%d\n",*pa);

int res= *pb + *pb;
printf("Resultado de la suma: %d\n", res);

*pb=res;
printf("Valor nuevo: A=%d\n",*pb);

int mul= *pc + *pc;
printf("Resultado de la suma: %d\n", mul);

*pb=res;
printf("Valor nuevo: A=%d\n",*pb);
return 0;
}