#include <stdio.h>

float caf(float cel) {
    return (cel * 9.0 / 5.0) + 32;  
}

int main() {
    float cel, farh;
    

    printf("Ingresa la temperatura en C: ");
    scanf("%f", &cel);
    
   
    farh = caf(cel);
    
    printf("%.2f F.\n", farh);
    
    return 0;
}
