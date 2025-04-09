#include <stdio.h>

int main(){

int fno, sno, *ptr, *qtr, sum;

printf("\n\n Pointer: Add two numbers: \n");
printf("-----------------------------------\n");

printf("Numero 1:\n");
scanf("%d", &fno);
printf("Numero 2:\n");
scanf("%d", &sno);

ptr=&fno;
qtr=&sno;

printf("\n\n Pointer1: %p", ptr);
printf("\n\n Pointer2: %p\n", qtr);

sum=*ptr + *qtr;

printf("El numero es: %d\n\n", sum);
return 0;
}