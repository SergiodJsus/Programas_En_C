#include <stdio.h>

int main() {
    int espacio = 3;
    int asterisco = 3; 

    for (int m = 3; m >= 0; m--) {  
        for (int o = 1; o <= espacio; o++) {  
            printf("%5s", " ");  
        }
        for (int q = 1; q <= asterisco; q++) {  
            printf("%5s","*");  
        }
       
        asterisco+=2; 
        espacio--;   

        
        printf("\n");  
    
}   
    return 0;
}
