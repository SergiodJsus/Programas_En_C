#include <stdio.h>
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}
int main() {
    int espacios = 6;
    int asteriscos = 0; 

    
    for (int i = 6; i >= 0; i--) {  
        for (int j = 1; j <= espacios; j++) {  
            printf("%5s", " ");  
        }
        for (int k = 0; k <= asteriscos; k+=2) {  
            setColor("\033[7;36m");
            printf("%5s"," ");  
            setColor("\033[0m");
        }
       
        asteriscos+=4; 
        espacios--;   
        printf("\n");  
    }
    return 0;
}