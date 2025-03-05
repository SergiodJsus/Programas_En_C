#include <stdio.h>
int main () {

    int opc;
    printf ("%s\n", "Seleccione una opcion");
    printf("%s\n", "1: summar");
    printf("%s\n", "2: restar");
    scanf("%d", &opc);
    

    switch(opc){
        case 1:
            printf("%s\n", "ha seleccionado suma");
            break;
        
        case 2:
            printf("%s\n", "Ha selecionado suma");
            break;
        default:
            printf("%s\n", "Selecciona algo correcto");
            break;
    }
    
return 0;
}