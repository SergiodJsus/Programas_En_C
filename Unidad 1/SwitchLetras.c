#include <stdio.h>
int main(){
printf("%s\n","Seleccione una ope");
printf("%s\n","a)Seleccionar ope 1");
printf("%s\n","a)Seleccionar ope 2");
char ope;
scanf("%c", &ope);
switch(ope){ 
    case 'a':
        printf("%s\n", "Seleeciono ope 1");
        break;

    case 'b':
        printf("%s\n", "Seleeciono ope 2");
        break;

    default:
        printf("%s\n", "Selecione una opcion valida");
    }
return 0;
}